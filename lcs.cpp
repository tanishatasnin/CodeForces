
#include <bits/stdc++.h>
using namespace std;
string longestCommonSubsequence(string x, string y) {
    int m = x.length();
    int n = y.length();
vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (x[i - 1] == y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int len = dp[m][n];
    string result;
    result.reserve(len);

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (x[i - 1] == y[j - 1]) {
            result += x[i - 1];
            --i;
            --j;
        } else if (dp[i - 1][j] > dp[i][j - 1])
            --i;
        else
            --j;
    }

    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::string x = "ABCBDAB";
    std::string y = "BDCABA";

    std::string lcs = longestCommonSubsequence(x, y);
    int length = lcs.length();

    std::cout << "Longest Common Subsequence: " << lcs << std::endl;
    std::cout << "Length of LCS: " << length << std::endl;

    return 0;
}

