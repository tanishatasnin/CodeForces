#include<iostream>
using namespace std;

// Function to print odd numbers recursively
void printOdd(int arr[], int n, int index = 0) {
    if (index == n) {
        return;
    }

    if (arr[index] % 2 != 0) {
        cout << arr[index] << " ";
    }

    printOdd(arr, n, index + 1);
}

// Function to print even numbers recursively
void printEven(int arr[], int n, int index = 0) {
    if (index == n) {
        return;
    }

    if (arr[index] % 2 == 0) {
        cout << arr[index] << " ";
    }

    printEven(arr, n, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Odd numbers in the array: ";
    printOdd(arr, n);

    cout << "\nEven numbers in the array: ";
    printEven(arr, n);

    cout << endl;

    return 0;
}

