#include <iostream>

int sumArray(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n;
    std::cin >> n;


    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int result = sumArray(arr, n);
    std::cout << "Sum of the elements of the array: " << result << std::endl;

    return 0;
}

