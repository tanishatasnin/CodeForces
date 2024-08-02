#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> results;
    results.reserve(t);

    for (int i = 0; i < t; ++i) {
        int x, y;
        cin >> x >> y;

        int total_cells_needed = 4 * y + x;
        int screens_needed = (total_cells_needed + 14) / 15;

        results.push_back(screens_needed);
    }

    for (const int& result : results) {
        cout << result << endl;
    }

    return 0;
}

