#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t ;
cin>>t;
while(t--){

int x1,x2,x3;
cin>>x1>>x2>>x3;

 int point[3]={x1,x2,x3};

sort(point,point+3);

int a=point[1];
int result= abs(a-x1)+abs(a-x2)+abs(a-x3);

cout<<result<<endl;


}


return 0 ;
}
