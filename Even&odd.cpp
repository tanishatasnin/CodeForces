#include<iostream>
#include<string.h>
using namespace std;
int main(){
long long  n  , k ;
cin>>n>>k;
long long count1,count2;

if(n%2==0){
    count1=n/2;
}
else
    {
        count1=(n/2)+1;
    }

    if(k<=count1)
    {
        count2=(2*k)-1;
    }
    else
    {
        count2=(k-count1)*2;
    }

    cout<<count2<<endl;



    return 0;
}
