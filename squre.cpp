
#include<iostream>
#include<algorithm>

using namespace std ;

int main(){
int t ;
cin>>t;
while (t--){
        int x[4], y[4] ;
        for(int i=0 ; i<4 ; i++) {
            cin>>x[i]>>y[i];
        }

    sort(x, x+4);
    sort(y, y+4);
     int area= max(x[3]-x[0], y[3]-y[0]);
     int ans=area*area;
     cout<<ans<<endl;


}


}
