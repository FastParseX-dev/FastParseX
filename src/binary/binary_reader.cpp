#include "fastparsex/binary/binary_reader.hpp"
#include <fstream>

namespace fp {

BinaryReader::BinaryReader(const std::string& path)
    : path_(path) {}

bool BinaryReader::read_all(std::vector<char>& out) {
    std::ifstream file(path_, std::ios::binary);
    if (!file)
        return false;

    file.seekg(0, std::ios::end);
    size_t size = static_cast<size_t>(file.tellg());
    file.seekg(0);

    out.resize(size);
    file.read(out.data(), static_cast<std::streamsize>(size));

    return true;
}

} // namespace fp
