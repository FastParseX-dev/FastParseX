#include <fastparsex/parallel/parallel_csv.hpp>
#include <iostream>

int main() {
    fp::ParallelCSVParser parser("sample.csv");
    parser.parse_parallel();

    std::cout << "Parallel CSV parsing completed\n";
    return 0;
}
