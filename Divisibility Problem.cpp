#include <iostream>
#include <algorithm>

using namespace std;
int main (){
int t ;


cin >> t ;
int a , b ;
for(int i = 0 ; i<t; i++){
 cin>>a>>b;

 if(a%b==0){
    cout<<0<<endl;

 }
 else{
    cout<<b-(a%b)<<endl;
 }
}
}
