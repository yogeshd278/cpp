#include <iostream>
using namespace std;


int main() {

    int sum=0, num = 12345, last=0;

    while(num > 0) {
        last = num % 10;
        num = num / 10;
        sum += last;
    }

    cout << sum << "\n";

    return 0;
}