
#include <iostream>
using namespace std;

int main(){
int m , n , x ,a,b ;

cin>>m>>n>>x;

if(m%x==0){
    a=(m/x);
}
else if(m%x!=0)
    {
    a=(m/x)+1;
}
if(n%x==0){
    b=(n/x);
}
else if(n%x!=0)
    {
    b=(n/x)+1;
}
cout<<a*b;
return 0;
}
