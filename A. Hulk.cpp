#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;

int n,m,d,t,a[N],b[N],ans[N];
unordered_map<int,int> pos;

int main() {
  cin>>t;
  while(t--) {
    cin>>n>>m>>d;
    for(int i=1;i<=n;i++) {
      int x;
      cin>>x;
      pos[x]=i;
    }
    for(int i=0;i<m;i++) cin>>a[i];
    int res=0;
    for(int i=0;i<m-1;i++) {
      int dis=pos[a[i+1]]-pos[a[i]];
      int cnt=(dis-1)/d;
      res=max(res,cnt);
    }
    cout<<res+1<<endl;
  }
  return 0;
}
