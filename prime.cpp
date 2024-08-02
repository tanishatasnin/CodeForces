#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num, int divisor = 2) {
    if (num <= 2) {
        return (num == 2);
    }
    if (num % divisor == 0) {
        return false;
    }
    if (divisor * divisor > num) {
        return true;
    }
    return isPrime(num, divisor + 1);
}
void printPrime(int arr[], int n, int index = 0) {
    if (index == n) {
        return;
    }

    if (isPrime(arr[index])) {
        cout << arr[index] << " ";
    }

    printPrime(arr, n, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Prime numbers in the array: ";
    printPrime(arr, n);

    cout << endl;

    return 0;
}

