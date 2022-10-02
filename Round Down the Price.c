#include<stdio.h>
int main (){
int i, x,n ;
scanf("%d",&x);


for(i=10; i<=x ; i=i*i){

printf("%d\n", i);
}

if (x>=i)
i=i*i;
 n=i-x;
printf("%d", n);

return 0;
}
