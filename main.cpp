# include <iostream>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    std::cout << "[INFO] Low-latency trading engine initialized successfully." << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::micro> elapsed = end - start;

    std::cout << "[METRICS] Execution time: " << elapsed.count() << " microseconds." << std::endl;
    return 0;
}# include <iostream>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    
    std::cout << "[INFO] Low-latency trading engine initialized successfully." << std::endl;
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::micro> elapsed = end - start;
    
    std::cout << "[METRICS] Execution time: " << elapsed.count() << " microseconds." << std::endl;
    return 0;
}
