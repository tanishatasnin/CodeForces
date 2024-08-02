#include <iostream>

int ProArray(int arr[], int n) {
    if (n == 0) {
        return 1;
    }
    return arr[n - 1] * ProArray(arr, n - 1);
}

int main() {
    int n;
    std::cin >> n;


    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int result = ProArray(arr, n);
    std::cout << "Sum of the elements of the array: " << result << std::endl;

    return 0;
}

