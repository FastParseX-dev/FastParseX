#include "fastparsex/binary/binary_parser.hpp"
#include <fstream>

namespace fp {

BinaryParser::BinaryParser(const std::string& path)
    : path_(path) {}

bool BinaryParser::read_block(std::vector<char>& out, size_t offset, size_t length) {
    std::ifstream file(path_, std::ios::binary);
    if (!file)
        return false;

    file.seekg(static_cast<std::streamoff>(offset));
    out.resize(length);
    file.read(out.data(), static_cast<std::streamsize>(length));

    return file.good() || file.eof();
}

} // namespace fp
