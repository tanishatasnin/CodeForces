#include<stdio.h>
int main()
{

    int n,x,y ;
   // printf("Enter a number :");
    scanf("%d",&n);
    x=n%7;
    y=7-x;
    if(n<=10){
        printf(" ");
    }
    else if(n%7==0){
        printf("%d",n==n);
    }
    else if(n%7!=0)
    {


        printf("%d", y+n);
    }
    return 0;
}
