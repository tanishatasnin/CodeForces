#include<bits/stdc++.h>
using namespace std ;



int pelin(char str[] , int fst , int last){
if (fst<last+ 1){
    fst++;
    last--;

    return pelin(str, fst , last);

    }

if(fst==last){
    return 1;
}
if(str[fst]!=str[last]){
    return 0 ;
}
return 1 ;
}

int main (){

char str[]= "sir";

 int ans ;

 int length = strlen(str);

 if ( length ==0){
    ans=1;
 }
 else {
    ans = pelin(str, 0 , length-1);
 }
 if(ans==1){
    cout<<"pelindrom" <<endl ;
 }
 else{
    cout<<"not pelindrom" <<endl ;
 }
 return 0 ;
}
