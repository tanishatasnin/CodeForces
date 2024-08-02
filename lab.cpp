#include<iostream>
using namespace std ;


int coin_change( int c[], int n , int sum){
if(sum==0)
    return 1;

    if(sum<0)

        return 0;

    if(n<=0)
        return 0 ;

   return coin_change(c, n, sum - c[n - 1])
           + coin_change(c, n - 1, sum);

}


int main(){

int i , j ;

int coins[]={1,2,3,4,7};

int n = sizeof(coins)/sizeof(coins[0]);

int amount= 7;
 cout << " " << coin_change(coins, n, amount);

    return 0;

}
