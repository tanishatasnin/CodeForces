#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int findX(int a, int b, int c, int d) {
    int m = gcd(a - b, gcd(c, d));
    int x = m - ((a + m) % c);
    return x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = findX(a, b, c, d);
        cout << x << endl;
    }
    return 0;
}
