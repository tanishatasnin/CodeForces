#include<iostream>
using namespace std;
int countOdd(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    if (arr[n - 1] % 2 != 0) {
        return 1 + countOdd(arr, n - 1);
    } else {
        return countOdd(arr, n - 1);
    }
}

int countEven(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    if (arr[n - 1] % 2 == 0) {
        return 1 + countEven(arr, n - 1);
    } else {
        return countEven(arr, n - 1);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int oddCount = countOdd(arr, n);
    int evenCount = countEven(arr, n);

    cout << "Number of odd integers: " << oddCount << endl;
    cout << "Number of even integers: " << evenCount << endl;

    return 0;
}

