#include <iostream>
#include <vector>

int fab(int n, std::vector<int> &dp) {
    if(n <= 1) {
        return n;
    } 

    if (dp[n] != -1) return dp[n];

    return dp[n] = fab(n - 1, dp) + fab(n - 2, dp);
}


int main() {
    int num;
    std::cin >> num;
    std::vector<int> dp(num+1, -1);
    std::cout << fab(num, dp) << std::endl;

    return 0;
}