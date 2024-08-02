#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        int n,c;
        cin>>n>>c;
        int temp,ans=0;
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>temp;
            m[temp]++;
        }
        for(auto x:m){
            ans+=min(x.second,c);
        }
        cout<<ans<<endl;
    }
    return 0;
}
