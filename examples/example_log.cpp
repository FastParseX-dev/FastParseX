#include <fastparsex/log/log_parser.hpp>
#include <iostream>

int main() {
    fp::LogParser parser("sample.log", fp::apache_common());

    parser.on_record([](const auto& fields) {
        std::cout << "Record: ";
        for (auto& f : fields) {
            std::cout << "[" << f << "] ";
        }
        std::cout << "\n";
    });

    parser.parse();
    return 0;
}
