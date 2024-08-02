#include<bits/stdc++.h>
using namespace std;


int maxInRow(int mtx[5][5], int row, int cols)
{
    if (cols == 0) return mtx[row][cols];

    int possibleMax = mtx[row][cols - 1];

    int sublistMax = maxInRow(mtx, row, cols - 1);

    int max = (sublistMax > possibleMax) ? sublistMax : possibleMax;

    return max;
}

int main()
{
    int mtx[5][5] = {{8,1,2,6,7}, {1,8,3,9,6}, {4,5,-5,1,8}, {1,2,3,4,5}, {5,4,3,5,3}};

    printf("%d\n", maxInRow(mtx, 1, 5));
}
