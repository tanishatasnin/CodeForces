

#include<iostream>
#include<string.h>
using namespace std ;

int main(){

int n ;
cin>>n ;
int ct=0;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

    }
   for(int i=0;i<n;i++) {
        if( arr[i]!=arr[i+1]){
    ct++;
    }
}
cout<<ct;
return 0 ;
}
