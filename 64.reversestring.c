#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    int cnt=0,i;
    scanf("%s",s);
    for(i=(strlen(s)-1);i>=0;i--){
         printf("%c",s[i]);
    }
   
}
