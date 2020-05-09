set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_BUILD_TYPE Debug)
set(THREADS_PREFER_PTHREAD_FLAG ON)


# Find 3rd parties
find_package(gflags REQUIRED)
find_package(spdlog REQUIRED)
find_package(protobuf REQUIRED)
find_package(gRPC REQUIRED)
find_package(Threads REQUIRED)


# Faiss Server
add_executable(faiss_server
    main.cpp faiss_server.cpp search.cpp add.cpp
    protobuf/faiss.grpc.pb.cc
    protobuf/faiss.pb.cc)


target_link_libraries(faiss_server
    faiss gflags spdlog::spdlog
    protobuf::libprotobuf
    gRPC::grpc++_unsecure)
