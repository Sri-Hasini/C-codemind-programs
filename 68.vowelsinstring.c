#include<stdio.h>
int main(){
    char s[10001],h;
    int i,index;
    scanf("%[^\n]s ",s);
    scanf("%c",&h);
    for(i=0;s[i]!='\0';i++){
        if(s[i]==h){
            index=i;
        }
    }printf("%d ",index);
}
