#include<stdio.h>
#include<string.h>
int main (){
int i ,length;
char word[100];
scanf("%s",&word);
length=strlen(word);
for(i=0; i<length;i++){
if(i==0) //Converting character at first to uppercase.
      {
          word[i]=toupper(word[i]);
      }
}
printf("%s", word);
return 0;
}
