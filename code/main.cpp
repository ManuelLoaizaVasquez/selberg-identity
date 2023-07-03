#include <chrono>
#include <iomanip>
#include <iostream>
#include "experimentacion.hpp"

int main(void) {
    long long x = 1LL;
    for (int i = 1; i <= 8; i++) {
        x *= 10LL;
        auto start = std::chrono::high_resolution_clock::now();
        long double k = K(x);
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
        std::cout << "\\(10^" << i << "\\)"
        << " & " << std::fixed << std::setprecision(10) << k
        << " & " << duration << " \\\\" << std::endl;
    }
    return 0;
}