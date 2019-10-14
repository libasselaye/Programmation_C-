#include <chrono>

using timePoint_t = std::chrono::time_point<std::chrono::system_clock>;

auto now = std::chrono::system_clock::now;

double duration(const timePoint_t & tp0, const timePoint_t & tp1) {
    std::chrono::duration<double> nbSeconds = tp1 - tp0;
    return nbSeconds.count();
}

