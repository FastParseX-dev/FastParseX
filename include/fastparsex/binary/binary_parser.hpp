#pragma once

#include <string>
#include <vector>

namespace fp {

class BinaryParser {
public:
    explicit BinaryParser(const std::string& path);
    bool read_block(std::vector<char>& out, size_t offset, size_t length);

private:
    std::string path_;
};

} // namespace fp
