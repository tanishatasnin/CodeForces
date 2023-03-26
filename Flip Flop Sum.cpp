#include<iostream>

using namespace std;

int main(){
int t ;

cin>>t ;
while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        int a[n];
for (int i = 0; i < n; i++) cin >> a[i];
int ans= 0;
for (int i = 0; i < n; i++) {
        int sum=a[i]+a[i+1];
if(sum==0){
a[i+1]=1;
ans+=1;
}

}

if(a[n+1]==1) ans--;
cout<<ans<<endl;

}
}
