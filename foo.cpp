#include <chrono>
#include <cmath>
#include <iostream>
#include <vector>

double compute(int n) {
    double result = 0.0;

    for (int i = 1; i < n; ++i) {
        // result += std::sqrt(i) * std::sin(i);
        result += std::sqrt(i) * i;
    }

    return result;
}

int main() {
    std::vector<double> results;
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 100; ++i) {
        results.push_back(compute(1000000));
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;

    std::cout << "Computation finished in " << diff.count() << " seconds." << std::endl;

    return 0;
}