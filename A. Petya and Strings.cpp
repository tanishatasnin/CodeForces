#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = count(s.begin(), s.end(), '1');
        if (cnt == 0 || cnt == n) {

            cout << "Yes" << endl;
        } else if (cnt % 2 == 0) {

            cout << "Yes" << endl;
        } else {
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (s[i] == '1') {
                    int j = i+1;
                    while (j < n && s[j] == '1') j++;
                    if (j == cnt) {
                        found = true;
                        break;
                    }
                    i = j;
                }
            }
            if (found) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
