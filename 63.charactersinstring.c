#include<stdio.h>
int main(){
    char s[1001];
    int cnt=0,i;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++){
        cnt++;
    }
    printf("%d",cnt);
}
