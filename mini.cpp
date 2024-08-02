#include <iostream>

int findMini(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    if (n <= 0) {
        return -1;
    }

    int mini = findMini(arr+1, n - 1);
if (arr[0] < mini) {
        return arr[0];
    } else {
        return mini;
    }
}

int main() {
    int n;
    std::cin >> n;


    int arr[n];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int maxElement = findMini(arr, n);
    std::cout << "Minimum element in the array: " << maxElement << std::endl;

    return 0;
}

