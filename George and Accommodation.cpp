
#include<iostream>
#include<string.h>
using namespace std ;

int main(){

int n ;
cin>>n ;
int ct=0;

for(int i=0;i<n;i++){
    int p,q;
    cin>>p>>q;
if(q-p>=2){
    ct++;
}
    }

cout<<ct;
return 0 ;
}
