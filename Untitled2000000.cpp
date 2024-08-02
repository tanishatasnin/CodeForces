#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

   int t;
   cin>>t;
   while(t--){
    string s1,s2;
    cin>>s1;
    s2=s1;
    reverse(s2.begin(),s2.end());
    cout<<s1<<s2<<endl;

   }

    return 0;
}

