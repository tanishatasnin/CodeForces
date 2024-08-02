#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

int n ;
bool condition=0 ;
cin>>n ;

int arr[13]={4,44,47,444, 474,477,7,74,77,744,747,777,774};

for(int i=0 ; i<13; i++){
    if(n%arr[i]==0){
        condition =true;
    }
}
if(condition){
    cout<<"YES";
}
else {
    cout<<"NO";
}
return 0 ;
}
