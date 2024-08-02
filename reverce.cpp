#include <iostream>

int printArrayReverse(int arr[], int n, int index) {
    if (index < 0) {
        return -1;
    }
    std::cout << arr[index] << " ";
    printArrayReverse(arr, n, index - 1);
}
int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Array in reverse order: ";
    printArrayReverse(arr, n, n - 1);
    std::cout << std::endl;

    return 0;
}

