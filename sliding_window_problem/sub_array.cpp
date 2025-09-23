// find sub-array of fixed window size

#include <iostream>
#include <vector>


int main() {

    int arr[] = {1, 12, -6, -5, 50, 3};
    int k = 4, sum = 0, max_result = 0, start_index = 0;

    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < k; i++) {
        sum += arr[i];
    }

    max_result = sum;

    std::cout << "max_result prev: " << max_result << std::endl;

    // slide the window across the array
    for(int i = k; i < len;  i++) {
        sum =  sum + arr[i] - arr[i - k];
        std::cout << "SUM: " << sum << std::endl;
        if(sum > max_result) {
            max_result = sum;
            start_index = i - k + 1;
        }
        
    }

    std::cout << "max_result: " << max_result << std::endl;

    for(int i = start_index; i < start_index + k; i++) {
        std::cout << "\n" << arr[i] << std::endl;
    }
   
    return 0;
}


