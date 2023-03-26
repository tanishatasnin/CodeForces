#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

bool is_good(int a[], int n) {
    int g = a[0];
    for (int i = n; i > 0; i--) {
        g = gcd(g, a[i]);
    }
    return g<=2 ;
}

bool is_beautiful(int a[], int n) {
    for (int i = n; i >=2; i--) {
        if (!is_good(a, n)) {
            return false;
        }
    }
    return true;
}

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
        if (is_beautiful(a, n)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
