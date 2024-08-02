#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n); // sort the array in ascending order

        int curr = a[0], ans = 1; // initialize curr as the first element and ans as 1
        for (int i = 1; i < n; i++) {
            if (a[i] > curr + 1) { // if the next element is not consecutive
                ans++; // increment the number of sets
                curr = a[i]; // update curr to the next element
            }
        }

        cout << ans << endl;
    }

    return 0;
}
