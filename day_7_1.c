#include<stdio.h>

int main()
{

    {
        int n;
        scanf("%d",&n);
        int x = n%7;
        int y = 7-x;
        int xx = n%10;
        if(n%7==0)
        {
            printf("%d",n);
        }
        else if(xx+y<10)
            printf("%d",n=n+y);
        else {
                printf("%d",n-=x);
                }

    }
}
