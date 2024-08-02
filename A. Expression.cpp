#include<iostream>
#include<string.h>
using namespace std ;

int main (){

int a, b , c ;

cin>>a>>b>>c;
int x= a*b*c;
int y=a*(b+c);
int z =c* (a+b);
int p =a+b+c;
int q =b*(a+c);
if(x>y && x>z && x>p && x>q){
          cout<<x;
        }

if(y>x && y>z && y>p && y>q){
          cout<<y;
        }
        if(z>x && z>y && z>p && z>q){
          cout<<z;
        }
        if(p>x && p>y && p>z && p>q){
          cout<<p;
        }
        if(q>x && q>y && q>z && q>p){
          cout<<q;
        }
        return 0;
}



