#include <bits/stdc++.h>
using namespace std;
int longestCommonSubsequence(string X, string Y) {


        int n  = X.size();
        int m = Y.size();


        int dp[n + 1][m + 1];
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			if (i == 0 || j == 0)
				dp[i][j] = 0;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (X[i - 1] == Y[j - 1])
				dp[i][j] = 1 + dp[i - 1][j - 1];
			else
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);

	return dp[n][m];

    }

// Driver code
int main()
{
	string S1 = "AGGTAB";
    string S2 = "GXTXAYB";
    int m = S1.size();
    int n = S2.size();

	cout << "Length of LCS is " << longestCommonSubsequence(S1,S2);

	return 0;
}
