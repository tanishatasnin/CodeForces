#include<iostream>
using namespace std;

int main(){

unsigned long long m , n , a , f1,f2;

cin>>m>>n>>a;

if(m%a==0){
        f1=m/a;
//cout<<f1<<endl;

}
else {
    f1=m/a+1 ;
//cout<<f1<<endl;
}

if(n%a==0){
        f2=n/a;
//cout<<f2<<endl;

}
else {
    f2=n/a+1;
//cout<<f2<<endl;
}

cout<<f1*f2<<endl;
return 0;
}
