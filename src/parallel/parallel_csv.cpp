#include "fastparsex/parallel/parallel_csv.hpp"
#include <thread>

namespace fp {

ParallelCSVParser::ParallelCSVParser(const std::string& path)
    : path_(path) {}

void ParallelCSVParser::parse_parallel() {
    // Placeholder semplice: in futuro thread pool
    // Per ora: singolo thread
}

} // namespace fp
