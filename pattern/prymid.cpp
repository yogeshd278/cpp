#include <iostream>
using namespace std;


int main() {

    int n;

    cout << "Enter the number of iteration ";
    cin >> n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        for(int k=0; k<i+1; k++){
            cout << "*";
        }
        for(int p=0; p<i; p++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}