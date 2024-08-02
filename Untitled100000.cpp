
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int a[N], b[N];
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> b[i];
        }
        sort(a, a + N);
        sort(b, b + N);
        int max_value = INT_MIN;
        for (int i = 0; i < N; i++) {
            max_value = max(max_value, a[i] + b[N - i - 1]);
        }
        cout << max_value << endl;
    }
    return 0;
}
