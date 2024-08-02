#include <bits/stdc++.h>
using namespace std;

int ShortestSuperSeq(string X, string Y,string &str_Lcs)
{
    int m = X.length();
    int n = Y.length();


    int dp[m + 1][n + 1];


    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {

            if(i == 0)
                dp[i][j] = j;
            else if(j == 0)
                dp[i][j] = i;
            else if(X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
            dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (X[i - 1] == Y[j - 1])
        {

            str_Lcs.push_back(X[i - 1]);


            i--, j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {

            str_Lcs.push_back(Y[j - 1]);


            j--;
        }
        else
        {

            str_Lcs.push_back(X[i - 1]);


            i--;
        }
    }

    while (i > 0)
    {
     str_Lcs.push_back(X[i - 1]);
        i--;
    }

    while (j > 0)
    {
        str_Lcs.push_back(Y[j - 1]);
        j--;
    }

    reverse(str_Lcs.begin(), str_Lcs.end());

    return dp[m][n];
}


int main()
{
    string X,Y,str_Lcs;

    cin>>X;
    cin>>Y;


    cout <<"Length of the shortest supersequence is: "<<ShortestSuperSeq(X, Y,str_Lcs)<<endl;

    cout<<"LCS: "<<str_Lcs;

    return 0;
}
