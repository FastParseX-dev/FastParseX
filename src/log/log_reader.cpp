#include "fastparsex/log/log_reader.hpp"
#include <cstdio>

namespace fp {

LogReader::LogReader(const std::string& path)
    : path_(path) {
    file_ = std::fopen(path.c_str(), "r");
}

LogReader::~LogReader() {
    if (file_)
        std::fclose(file_);
}

bool LogReader::next_line(std::string& out) {
    if (!file_)
        return false;

    out.clear();
    int ch;

    while ((ch = std::fgetc(file_)) != EOF) {
        if (ch == '\n')
            break;
        out.push_back(static_cast<char>(ch));
    }

    return !out.empty() || ch != EOF;
}

} // namespace fp
