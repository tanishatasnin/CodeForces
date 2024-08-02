#include<iostream>

using namespace std;

int calculateTeams(int N) {
    int total = 0;
    for (int team= 2; team <= N; ++team) {
        int combination = 1;
        for (int i = 0; i < team; ++i) {
            combination *= (N - i);
            combination /= (i + 1);
        }

        total += combination;
    }

    return total;
}

int main() {

    int N;
    cin >> N;
if (N <= 1 || N >= 30) {
      return 1;
    }

    int Teams = calculateTeams(N);

    cout << Teams << endl;

    return 0;
}
