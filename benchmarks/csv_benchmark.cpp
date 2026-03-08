#include <fastparsex/fastparsex.hpp>
#include <chrono>
#include <iostream>

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    fp::CSVParser parser("data.csv");
    fp::RowView row;

    size_t count = 0;
    while (parser.next_row(row)) {
        count++;
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    std::cout << "Parsed rows: " << count << "\n";
    std::cout << "Time: " << ms << " ms\n";
}
