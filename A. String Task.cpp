
#include<bits/stdc++.h>
#define ll     long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std ;

 int main (){
fastread();
 string s ,pr ;


 cin>>s ;
  ll n =s.length() ;
  transform(s.begin(),s.end(),s.begin(), ::tolower);
 for( ll i=0 ; i<n ; i++){

    if(s[i]=='a'  || s[i]=='e'  || s[i]=='i'  || s[i]=='o'  || s[i]=='u'  || s[i]=='y'   ){
        continue;
    }
    else{
        pr+='.';
        pr+=s[i];
    }
 }
cout<<pr<<endl;
return 0 ;
 }
