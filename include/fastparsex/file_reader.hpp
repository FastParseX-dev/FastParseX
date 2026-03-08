#pragma once
#include <cstdio>
#include <vector>
#include <string>

namespace fp {

class FileReader {
public:
    explicit FileReader(const std::string& path, size_t buf_size = 64 * 1024);
    ~FileReader();

    bool read_chunk();
    const char* data() const { return buffer.data(); }
    size_t size() const { return bytes_read; }
    bool eof() const { return is_eof; }

private:
    FILE* file = nullptr;
    std::vector<char> buffer;
    size_t bytes_read = 0;
    bool is_eof = false;
};

} // namespace fp
