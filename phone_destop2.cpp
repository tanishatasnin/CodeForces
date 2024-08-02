#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        int count= (y+1)/2;
        int rem= ( (y/2)*7 ) + ( (y%2)*11 );  //(y/2*7) forwhe we have even num of y . and if y is odd then +(y%2 *11) for only 1 y .
        int st= max(0, x-rem);

        count+= (st+14)/15;
        cout<<count<<endl; }

 return 0 ;
    }
