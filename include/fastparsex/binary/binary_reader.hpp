#pragma once

#include <string>

namespace fp {

class BinaryReader {
public:
    explicit BinaryReader(const std::string& path);
    bool read_all(std::vector<char>& out);

private:
    std::string path_;
};

} // namespace fp
