// without memoization
#include <iostream>

int fib(int n) {
    if(n <= 1) {
        return n;
    }

    int prev1 = 0;
    int prev2 = 1;

    for(int i = 2; i <= n; i++) {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main() {

    int n;
    std::cout << "Enter the number for fibbonachi" std::endl;
    std::cin >> n;

    std::cout << fib(n) << std::endl;
    return 0;
}