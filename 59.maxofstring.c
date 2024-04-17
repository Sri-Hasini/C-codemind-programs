#include<stdio.h>
int main(){
    char s[1000];
    int i,max=0;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++){
        if(max<=s[i])
        max=s[i];
    }
    printf("%c",max);
}
