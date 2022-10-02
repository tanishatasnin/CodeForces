#
#include<iostream>

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    int t;
       cin>>t;
    while(t--){
            ll n ;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(),v.end());
    ll ans=LLONG_MAX;
    for (int i=0; i<n ;i++){
        ll x= v[i-2], y=v[i-2], z=v[i];
        ll ans1 , ans2 , ans3 ;
        ans1 = abs(x-x)+abs(y-x)+ abs(z-x);
        ans2 = abs(x-y)+abs(y-y)+ abs(z-y);
        ans3 = abs(x-z)+abs(y-z)+ abs(z-z);

   ans= min({ans,ans1,ans2});

    }
    cout<<ans<<endl;
    }
    return 0 ;
}
