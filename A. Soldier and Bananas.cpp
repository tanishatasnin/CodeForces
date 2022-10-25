#include<iostream>
using namespace std ;

int main(){

int a , b , w;
cin>>a>>b>>w;
int sum =0 ;
for(int i=1; i<=w ; i++){

    sum+=i;
}
int t = (sum*a)-b;
if(t<0)
{
    cout<<"0";
}
else{
    cout<<t ;
}
return 0 ;
 }
