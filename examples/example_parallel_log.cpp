#include <fastparsex/parallel/parallel_log.hpp>
#include <iostream>

int main() {
    fp::ParallelLogParser parser("sample.log");
    parser.parse_parallel();

    std::cout << "Parallel log parsing completed\n";
    return 0;
}
