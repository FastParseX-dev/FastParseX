#include <fastparsex/fastparsex.hpp>
#include <iostream>
#include "benchmark_utils.hpp"

int main() {
    const std::string path = "sample.log";
    size_t size = bench::file_size(path);

    fp::LogParser parser(path);
    parser.on_record([](const auto&) {});

    bench::Timer t;
    t.tic();

    parser.parse();

    double seconds = t.toc();
    bench::print_result("LOG Benchmark", seconds, size);
}
