#include<stdio.h>
int main(){
    char s[10001];
    int i,cnt=0;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            cnt++;
        }
    }printf("%d",cnt);
}
