#include <iostream>
#include <string>

using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;


        int nt = x.length();
    int mt = s.length();
   for (int operations = 0; operations <= m; operations++) {
        if (x.find(s) != string::npos) {
            cout<< operations <<endl;
        }
        x += x;
    }

    cout<< -1 << endl;



    }

    return 0;
}
