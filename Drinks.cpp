#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int i , n ; //n is the the number of orange-containing drinks in Vasya's fridge
cin>>n ;

float sum=0 ;
int arr[n];  //the volume fraction of orange juice in the i-th drink, in percent
for(i=0;i<n; i++ ){
    cin>>arr[i];
    sum+=arr[i];
}
cout<<sum/n;
return 0 ;
}
