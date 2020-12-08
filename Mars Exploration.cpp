#include<stdio.h>
#include<string.h>

int main(){
    int i,j,len,count=0;
    char s[100000],a[100000];
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i=i+3){
        a[i]='S';
        a[i+1]='O';
        a[i+2]='S';

    }
    for(i=0;i<len;i++){
        if(s[i]!=a[i]){
            count++;
        }
    }
    printf("%d",count);
}

