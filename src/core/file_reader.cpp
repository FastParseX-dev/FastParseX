#include "fastparsex/file_reader.hpp"

namespace fp {

FileReader::FileReader(const std::string& path, size_t buf_size)
    : buffer(buf_size)
{
    file = std::fopen(path.c_str(), "rb");
    if (!file) {
        is_eof = true;
    }
}

FileReader::~FileReader() {
    if (file) std::fclose(file);
}

bool FileReader::read_chunk() {
    if (!file || is_eof) return false;

    bytes_read = std::fread(buffer.data(), 1, buffer.size(), file);
    if (bytes_read < buffer.size()) {
        is_eof = true;
    }
    return bytes_read > 0;
}

} // namespace fp
