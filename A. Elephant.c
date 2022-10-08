#include<stdio.h>
int main(){
int x ,y;

scanf("%d",&x);

y=x/5;

if(x%5==0){
    printf("%d",y);
}
else{
    printf("%d",y+1);
}
return 0 ;
}
