#include<stdio.h>
int main(){
    char s[1000];
    int i;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=65&&s[i]<=90){
            printf("%c",s[i]+32);
        }
        else
        printf("%c",s[i]);
    }
}
