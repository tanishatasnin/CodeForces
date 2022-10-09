#include<iostream>
#include<string.h>
using namespace std ;

int main(){




int i,count=0 ;
string s ;
cin>>s;
for(i=0; i<s.size() ; i++)
    {
    if(s[i]=='4' || s[i]=='7'){
        count ++;
    }
    }
    if( count==4 || count==7 ){
        cout<<"YES";
    }
    else{
       cout<<"NO";

    }


return 0 ;
}

