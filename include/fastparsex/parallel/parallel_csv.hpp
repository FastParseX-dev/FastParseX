#pragma once

#include <string>

namespace fp {

class ParallelCSVParser {
public:
    explicit ParallelCSVParser(const std::string& path);
    void parse_parallel();

private:
    std::string path_;
};

} // namespace fp
