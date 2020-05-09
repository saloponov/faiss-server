//
// Created by root on 29.04.2020.
//

#include "faiss_server.h"

grpc::Status FaissServer::AddVector(::grpc::ServerContext *context, const ::faiss::AddVectorRequest *request,
                                    ::faiss::AddVectorResponse *response) {

    auto top_k = 1;

    if (!request->has_vector()) {
        return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT,
                            "Not found vector in request");
    }

    auto vector = request->vector();
    auto vector_size = vector.float_val_size();

    if (vector_size != index_->d){
        logger_->error("Given vector is invalid size: expect={}, actual={}",
                        index_->d, vector_size);
        return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT,
                            "Given vector is invalid size");
    }

    auto std_vector = std::vector<float>(vector.float_val().begin(), vector.float_val().end());

    logger_->info("Add: size{}", vector_size);

    try {
        index_->add(1, std_vector.data());
    } catch (std::exception& e) {
        logger_->error("Failed to add vector: {}", e.what());
        return grpc::Status(grpc::StatusCode::INTERNAL, "Failed to add index");
    }

    std::vector<long> indices(top_k);
    std::vector<float> dist(top_k);

    try {
        index_->search(1, std_vector.data(), 1, dist.data(), indices.data());
    } catch (std::exception& e) {
        logger_->error("Failed to search index: {}", e.what());
        return grpc::Status(grpc::StatusCode::INTERNAL, "Failed to search index");
    }

    response->set_vector_id(indices[0]);

    return grpc::Status::OK;
}