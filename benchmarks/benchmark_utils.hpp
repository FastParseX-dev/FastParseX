#pragma once
#include <chrono>
#include <string>
#include <fstream>

namespace bench {

inline size_t file_size(const std::string& path) {
    std::ifstream f(path, std::ios::binary | std::ios::ate);
    return static_cast<size_t>(f.tellg());
}

struct Timer {
    std::chrono::high_resolution_clock::time_point start;

    void tic() {
        start = std::chrono::high_resolution_clock::now();
    }

    double toc() const {
        auto end = std::chrono::high_resolution_clock::now();
        return std::chrono::duration<double>(end - start).count();
    }
};

inline void print_result(const std::string& name, double seconds, size_t bytes) {
    double mb = bytes / (1024.0 * 1024.0);
    double mbps = mb / seconds;

    std::cout << name << ":\n";
    std::cout << "  Time: " << seconds << " s\n";
    std::cout << "  Size: " << mb << " MB\n";
    std::cout << "  Throughput: " << mbps << " MB/s\n\n";
}

} // namespace bench
