#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1] = {0};
    int p,q;
    int lev;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>lev;
        arr[lev]=1;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>lev;
        arr[lev]=1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}
