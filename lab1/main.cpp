#include <iostream>
#include <cmath>
#include <vector>

#ifdef USE_FLOAT
using T = float;
#else
using T = double;
#endif

void fill_and_compute_sum(int size) {
    std::vector<T> arr(size);
    T sum = 0;
    
    for (int i = 0; i < size; ++i) {
        arr[i] = std::sin(2 * M_PI * i / size);
        sum += arr[i];
    }
    
    std::cout << "Sum: " << sum << std::endl;
}

int main() {
    const int size = 10000000;  // 10^7 элементов
    fill_and_compute_sum(size);
    return 0;
}
