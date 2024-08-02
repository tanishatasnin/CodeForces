#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swapFirstCharacters(string &a, string &b) {
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
}

int main() {
    int t;
    cin >> t;

    vector<pair<string, string>> testCases(t);


    for (int i = 0; i < t; ++i) {
        cin >> testCases[i].first >> testCases[i].second;
    }


    for (int i = 0; i < t; ++i) {
        string a = testCases[i].first;
        string b = testCases[i].second;

        swapFirstCharacters(a, b);


        cout << a << " " << b << endl;
    }

    return 0;
}



