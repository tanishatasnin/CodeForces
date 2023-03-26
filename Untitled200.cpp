#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;
        int max_dice = s - r;
        for (int i = 0; i <= n-1; i++) {
            if (i == n) {
                cout << max_dice << " ";
            } else if(i<n){
                cout <<s-r << " ";
            }


        }
        cout << endl;
    }
    return 0;
}
