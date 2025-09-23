#include <iostream>
using namespace std;

int main() {

    int n = 8, count = 1;
    for(int i=n; i>0; i--) {
        for(int j=0; j<i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    

    return 0;
}