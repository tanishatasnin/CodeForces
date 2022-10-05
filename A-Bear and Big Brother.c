#include<stdio.h>
int main(){
int a , b , s=0 ;
scanf("%d%d",&a,&b);

while(1){
    s++;
    a=a*3;
    b=b*2;
    if(a>b){
        printf("%d",s);
        break;
    }
}
return 0 ;
}
