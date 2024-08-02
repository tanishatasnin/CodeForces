
#include <iostream>
#include <string>
#include <vector>
using namespace std;




int main(){

    int t ;
    cin>>t ;
    while(t--){


int n ;
cin >>n ;
string s ;
cin>>s ;

vector<int>v ;
int ans=0;
for(int i=0 ; i<n ; i++){
    if(s[i]=='(') v.push_back(i);
    else if(s[i]==')'){
        ans+=i-v.back(); //last v
        v.pop_back();

    }
    else{
        if(v.size()==0) v.push_back(i);
        else{
            ans+=i-v.back();
            v.pop_back();
        }
    }
}
cout<<ans<<endl;
    }

    return 0 ;
}
