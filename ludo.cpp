#include <iostream>
using namespace std;

int main() {
    int k, position = 94;
    cin >> k;
    position += k;
    if (position == 100) {
        cout << "Yay! Farha has won the game. She is now at 100.";
    }


    else if (position == 95) {
        cout << "Alas! Farha is bitten by snake. She is now at 75.";
        position = 75;

    }
        else if (position == 99) {
        cout << "Farha is on ladder.";
    } else if (position == 98) {
        cout << "Alas! Farha is bitten by snake. She is now at 79.";
        position = 79;
    } else {
        cout << "Nothing happened to her.";
    }
    return 0;
}
