#include<stdio.h>
#include<string.h>
int main (){

int n ;
scanf("%d",&n);
char words[n][102];

for(int i=0 ; i<n ; i++){
    scanf("%s",&words[i]);
    int x =strlen(words[i]);

    if(x>10){
        printf("%c%d%c\n", words[i][0],x-2,words[i][x-1]);
    }
    else{
        printf("%s\n",words[i]);
    }
}
return 0 ;
}
