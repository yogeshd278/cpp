#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 6};
    int target = 6;

    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            cout << "Pair found: " << arr[left] << " + " << arr[right] << " = " << target << endl;
            break;
        } else if (sum < target) {
            cout << "Left Pair found: " << arr[left] << " + " << arr[right] << " = " << target << endl;
            left++;  // move left forward
        } else {
            cout << "Right Pair found: " << arr[left] << " + " << arr[right] << " = " << target << endl;
            right--; // move right backward
        }
    }
    return 0;
}
