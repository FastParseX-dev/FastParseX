FastParseX

High‑performance C++ parsing engine for CSV, logs, and binary data.
Designed for maximum throughput, minimal overhead, and seamless integration into data‑intensive pipelines.

---

Features

Core features:

• CSV parser
• Log parser
• Binary parser
• Memory‑mapped I/O (mmap)
• Buffered I/O
• Zero‑copy internal pipelines


Performance features:

• Parallel parsing engine
• Thread‑pool scheduler
• SIMD‑ready architecture
• Compression support (gzip, xz, zstd)


Analytics:

• Streaming profiling engine
• Column statistics
• Performance counters


Export:

• Arrow export (Community + Pro)
• Parquet export (Pro only)


---

Architecture

FastParseX is organized into modular components:

core
csv
log
binary
compress
parallel
profiling
export

Each module is isolated, testable, and optimized for high‑throughput workloads.

---

Installation

FastParseX uses CMake as its build system.

mkdir build
cd build
cmake ..
cmake –build .

To install system‑wide:

sudo cmake –install .

---

Usage Examples


Example 1 — CSV parsing

#include <fastparsex/csv/parser.hpp>

int main() {
fp::CSVParser parser(“data.csv”);
parser.parse();
for (auto& row : parser.rows()) {
// process row
}
}



Example 2 — Parallel CSV parsing

#include <fastparsex/parallel/parallel_csv.hpp>

int main() {
fp::ParallelCSVParser parser(“big.csv”);
parser.parse_parallel();
}



Example 3 — Log parsing

fp::LogParser logp(“server.log”);
logp.parse();



Example 4 — Binary parsing

fp::BinaryParser bp(“data.bin”);
bp.parse();



Example 5 — Arrow export

fp::ArrowWriter writer;
writer.write(table, “output.arrow”);


---

Benchmarks

CSV parsing: approximately 1–4 GB/s
Parallel CSV parsing: approximately 4–8 GB/s
Arrow export: approximately 3 GB/s

Benchmarks performed on modern multi‑core CPUs with NVMe storage.

---

Community Edition vs Pro Edition

Community Edition includes:

• CSV parser
• Log parser
• Binary parser
• Memory‑mapped I/O
• Buffered I/O
• Compression (gzip, xz, zstd)
• Parallel parsing
• Profiling engine
• Arrow export
• Basic benchmarks


Pro Edition includes everything in the Community Edition plus:

• Parquet export
• Advanced benchmarks
• Extended profiling and advanced column metrics
• Additional documentation
• Additional examples


---

Roadmap

Planned improvements:

• SIMD CSV scanner
• Streaming Arrow export
• Improved compression pipelines
• GPU‑assisted parsing
• Distributed parsing engine


---

License

Community Edition: MIT License
Pro Edition: Commercial license (see pro_license.txt)

---

Contributing

Contributions are welcome.
To contribute:

1. Open an issue
2. Discuss the proposal
3. Submit a pull request


Please follow the coding style and module structure.

---

Links

Documentation: docs/
Examples: examples/
Benchmarks: benchmarks/
Pro Edition: ()

---
