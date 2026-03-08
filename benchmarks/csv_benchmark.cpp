#include <fastparsex/fastparsex.hpp>
#include <iostream>
#include "benchmark_utils.hpp"

int main() {
    const std::string path = "sample.csv";
    size_t size = bench::file_size(path);

    fp::CSVParser parser(path);
    fp::RowView row;

    bench::Timer t;
    t.tic();

    while (parser.next_row(row)) {
        // No-op: just iterate
    }

    double seconds = t.toc();
    bench::print_result("CSV Benchmark", seconds, size);
}
