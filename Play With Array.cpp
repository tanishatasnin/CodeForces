#include <iostream>
#include <vector>

using namespace std;

int minOperationsToEqualizeArrays(int n, vector<int>& a, vector<int>& b) {
    int count = 0;
    int current = a[0] ^ b[0]; // XOR of the first elements

    for (int i = 1; i < n; ++i) {
        if (a[i] != (current ^ b[i])) {
            // If the current element of a is not equal to the corresponding element of b
            // We need to perform an operation to flip the current element
            ++count;
            current ^= 1; // Flip the current element
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        int result = minOperationsToEqualizeArrays(n, a, b);
        cout << result << endl;
    }

    return 0;
}
