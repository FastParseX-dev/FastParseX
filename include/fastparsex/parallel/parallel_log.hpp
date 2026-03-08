#pragma once

#include <string>

namespace fp {

class ParallelLogParser {
public:
    explicit ParallelLogParser(const std::string& path);
    void parse_parallel();

private:
    std::string path_;
};

} // namespace fp
