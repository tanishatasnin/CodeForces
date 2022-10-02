#include<stdio.h>
int main()
{

        int n;
        int x,e=0,o=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",x);
            if(x%2==0)
                printf("%d",e++);
            else o++;
        }
        printf("%d",x);

}

