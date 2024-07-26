#include "../exercise.h"

struct Fibonacci {
    int numbers[11];

    Fibonacci(const int (&arr)[11]) {
        for (int i = 0; i < 11; ++i) {
            numbers[i] = arr[i];
        }
    }

    int get(int i) {
        return numbers[i];
    }
};

int main(int argc, char **argv) {
    Fibonacci constexpr FIB{{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55}};
    ASSERT(FIB.get(index) == 55, "fibonacci(10) should be 55");
    std::cout << "fibonacci(" << index << ") = " << FIB.get(index) << std::endl;
    return 0;
}