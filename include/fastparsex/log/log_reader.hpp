
#pragma once

#include <string>
#include <cstdio>

namespace fp {

class LogReader {
public:
    explicit LogReader(const std::string& path);
    ~LogReader();

    // Legge la prossima linea dal file
    bool next_line(std::string& out);

private:
    std::string path_;
    FILE* file_ = nullptr;
};

} // namespace fp
