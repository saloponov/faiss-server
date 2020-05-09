FROM ubuntu:18.04 as builder

RUN apt-get update -y && \
    apt-get install -y \
    curl git libssl-dev libopenblas-dev wget gcc g++ make
ENV BLASLDFLAGS /usr/lib/libopenblas.so.0

# cmake
RUN curl https://cmake.org/files/v3.17/cmake-3.17.2-Linux-x86_64.sh -o /tmp/curl-install.sh \
      && chmod u+x /tmp/curl-install.sh \
      && mkdir /usr/bin/cmake \
      && /tmp/curl-install.sh --skip-license --prefix=/usr/bin/cmake \
      && rm /tmp/curl-install.sh
ENV PATH="/usr/bin/cmake/bin:${PATH}"

WORKDIR /builder
COPY . .
RUN mkdir build

WORKDIR /builder/build
RUN cmake ..
RUN cmake --build . -j 8 -v

ENV LD_LIBRARY_PATH $LD_LIBRARY_PATH:/builder/build/faiss/src/faiss

ENTRYPOINT ["/builder/build/bin/faiss_server"]
CMD ["--help"]
