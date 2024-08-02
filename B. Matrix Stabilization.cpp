#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Check if the cell (i, j) is a peak in the matrix
bool isPeak(int i, int j, int n, int m, const vector<vector<int>>& matrix) {
    int val = matrix[i][j];
    if (i > 0 && matrix[i - 1][j] >= val) return false; // Up
    if (i < n - 1 && matrix[i + 1][j] >= val) return false; // Down
    if (j > 0 && matrix[i][j - 1] >= val) return false; // Left
    if (j < m - 1 && matrix[i][j + 1] >= val) return false; // Right
    return true;
}

// Function to stabilize the matrix
void stabilizeMatrix(int n, int m, vector<vector<int>>& matrix) {
    while (true) {
        vector<pair<int, pair<int, int>>> peaks;

        // Identify all peak cells
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (isPeak(i, j, n, m, matrix)) {
                    peaks.push_back({matrix[i][j], {i, j}});
                }
            }
        }

        // If no peaks are found, we are done
        if (peaks.empty()) {
            break;
        }

        // Sort peaks by value first, then by row, then by column
        sort(peaks.begin(), peaks.end(), [](const auto& a, const auto& b) {
            if (a.first == b.first) {
                if (a.second.first == b.second.first) {
                    return a.second.second < b.second.second;
                }
                return a.second.first < b.second.first;
            }
            return a.first < b.first;
        });

        // Decrease the value of the smallest peak by 1
        int peakRow = peaks[0].second.first;
        int peakCol = peaks[0].second.second;
        matrix[peakRow][peakCol] -= 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        stabilizeMatrix(n, m, matrix);

        // Output the stabilized matrix
        for (const auto& row : matrix) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
