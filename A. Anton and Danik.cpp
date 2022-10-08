#include<iostream>
#include<string.h>
using namespace std ;

int main(){




int i, a, countA=0, countD=0 ;
cin>>a;
string s ;
cin>>s;
for(i=0; i<a ; i++){
    if(s[i]=='A'){
        countA++;
    }
    else if (s[i]='D'){
        countD++;
    }
}
if(countA>countD){
    cout<<"Anton";
}
else if (countA<countD){
    cout<<"Danik";
}
else if (countA==countD){
 cout<<"Friendship";
}
return 0 ;
}
