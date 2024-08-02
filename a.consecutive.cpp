#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;


#define ll long long int

#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);




int main(){
    Faster;
    int t;                  cin>>t;
    while(t--){
        int n,k;            cin>>n>>k;
        vector<int> a(n);
        vector<int> selected(k,0);

        for(int i=0;i<n;i++){
            cin>>a[i];
            selected[(i%k)]=max(selected[(i%k)],a[i]);
        }

        ll ans=0;
        for(int i=0;i<k;i++){
            ans+=selected[i];
        }

        cout<<ans<<endl;


    }
    return 0;
}
