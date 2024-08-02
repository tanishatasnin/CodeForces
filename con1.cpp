#include <iostream>
#include <string>
using namespace std;

int calculateTypingTime(const string &s) {
    int time = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == s[i +1]) {
            time += 1;
        } else {
            time += 2;
        }
    }
    return time;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int maxTypingTime = 2;
        string bestPassword;

        for (char ch = 'a'; ch <= 'z'; ++ch) {
            for (size_t i = 1; i <= s.length(); ++i) {

                string newPassword = s.substr(0, i) + ch + s.substr(i);

                int typingTime = calculateTypingTime(newPassword);

                if (typingTime > maxTypingTime) {
                    maxTypingTime = typingTime;
                    bestPassword = newPassword;
                }
            }
        }

        cout << bestPassword << endl;
    }

    return 0;
}
