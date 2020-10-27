#include<stdio.h>
int main(){
    int n,i,k,c,e;
    char s[200];
    scanf("%d",&n);
    scanf("%s",s);
    scanf("%d",&k);
    for (i = 0; i < n; i++) {
        c=s[i];
        if((s[i]>64 && s[i]<=90-k) || (s[i]>96 && s[i]<=122-k))
            printf("%c",c+k);
        else if(s[i]>90-k || s[i]>122-k){
            e=c-k;
            printf("%c",64+e);

        }
         else   
            printf("%c",s[i]);
        }
    }

