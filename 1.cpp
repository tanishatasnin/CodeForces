#include <iostream>

using namespace std;

int calculateTeams(int N) {

    int count = 0;

    for (int teamSize = 2; teamSize <= N; teamSize++) {

        int waysToChoose = 1;
        for (int i = 0; i < teamSize; i++) {
            waysToChoose *= (N - i);
            waysToChoose /= (i + 1);
        }


        count += waysToChoose;
    }

    return count;
}

int main() {

    int N;
    cin >> N;

    if (N < 1 || N > 30) {

        return 1;
    }

    int result = calculateTeams(N);
    cout << result << endl;

    return 0;
}
