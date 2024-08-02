#include<bits/stdc++.h>

using namespace std ;



void func(){
vector <int> arr(4);


for(int i =0 ; i<4 ;i++){
     char ch ;

     cin>>ch;

     int num=ch-'0';

     if(num==0)
        num=10;

     arr[i]=num;


}
int ct=0 ;

int str= 1 ;

for(int i =0 ; i< 4 ; i++){

    ct+=abs(arr[i]-str)+1;

   str=arr[i];
}
cout<<ct<<endl;

}


int main (){

int t ;

cin>>t ;

while(t--){

     func();

}


}
