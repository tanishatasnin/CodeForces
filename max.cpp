#include <iostream>

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    if (n <= 0) {
        return -1;
    }

    int maxi = findMax(arr+1, n - 1);
if (arr[0] > maxi) {
        return arr[0];
    } else {
        return maxi;
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

    int maxElement = findMax(arr, n);
    std::cout << "Maximum element in the array: " << maxElement << std::endl;

    return 0;
}

