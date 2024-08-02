#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

// Function to calculate minimum cost of the RBS
int calculateMinCost(const string &s) {
    int n = s.length();
    vector<int> positions; // Stack to track positions of opening brackets
    vector<int> cost; // To track cost for each position

    // Find positions of existing brackets
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            positions.push_back(i);
        } else if (s[i] == ')') {
            if (!positions.empty()) {
                cost.push_back(i - positions.back());
                positions.pop_back();
            }
        }
    }

    // Fill remaining positions for underscores
    stack<int> open;
    vector<int> underscorePositions;

    for (int i = 0; i < n; i++) {
        if (s[i] == '_') {
            underscorePositions.push_back(i);
        }
    }

    // We need to add as many pairs of brackets to complete the RBS
    for (size_t i = 0; i < underscorePositions.size() / 2; ++i) {
        open.push(underscorePositions[i]);
        cost.push_back(underscorePositions[underscorePositions.size() - i - 1] - underscorePositions[i]);
    }

    // The total cost is the sum of all distances in `cost`
    int totalCost = 0;
    for (int c : cost) {
        totalCost += c;
    }

    return totalCost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << calculateMinCost(s) << endl;
    }

    return 0;
}

