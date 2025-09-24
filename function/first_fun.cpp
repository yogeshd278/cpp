#include <iostream>
using namespace std;

int add(int x, int y) {
    cout << "Welcone\n";
    return x + y;
}

int main() {

    int val = add(10, 30);
    cout << val << "\n";

    return 0;
}