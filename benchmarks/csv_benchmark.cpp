#include <chrono>
#include <iostream>

int main() {
    std::cout << "CSV benchmark placeholder" << std::endl;

    auto start = std::chrono::high_resolution_clock::now();

    // TODO: integrate FastParseX CSV parser here

    auto end = std::chrono::high_resolution_clock::now();
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    std::cout << "Elapsed: " << ms << " ms" << std::endl;
    return 0;
}
