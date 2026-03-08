#include <fastparsex/fastparsex.hpp>
#include <iostream>
#include "benchmark_utils.hpp"

int main() {
    const std::string path = "sample.bin";
    size_t size = bench::file_size(path);

    fp::BinaryReader reader(path);
    std::vector<char> buffer;

    bench::Timer t;
    t.tic();

    reader.read_all(buffer);

    double seconds = t.toc();
    bench::print_result("BINARY Benchmark", seconds, size);
}
