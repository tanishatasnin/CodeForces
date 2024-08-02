#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, W;

    cin >> n;

    int weight[n], value[n];

    for(int i = 0; i < n; i++)
    {
        cin >> weight[i] >> value[i];
    }
    cin >> W;

    int p[n + 1][W + 1];

    for(int w = 0; w <= W; w++)
    {
        p[0][w] = 0;
    }
    for(int i = 1; i <= n; i++)
    {
        p[i][0] = 0;

        for(int w = 1; w <= W; w++)
        {
            if(weight[i - 1] <= W) // the bag can hold item i
            {
                int profit_not_taken = p[i - 1][w];
                int profit_for_taken = p[i - 1][w - weight[i - 1]] + value[i - 1];

                if(profit_for_taken > profit_not_taken)
                {
                    p[i][w] = profit_for_taken;
                }
                else
                {
                    p[i][w] = profit_not_taken;
                }
            }
            else // the bag cannot hold item i
            {
                p[i][w] = p[i - 1][w];
            }
        }
    }
    cout << p[n][W] << endl;
    return 0;
}

