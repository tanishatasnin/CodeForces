#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int count = 0;
        string pi = "3.141592653589793238462643383279";
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == pi[i]) {
                count++;
            } else {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
