#include<stdio.h>
#include<string.h>
struct check{
    int flag;
};
int main(){
    char s[1000000];
    struct check a[1000000];
    int i,j,k,count=0,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++){
        a[i].flag=0;
    }
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            if(i!=j && s[j]==s[i]){
                a[i].flag=1;
            }
        }
    }
    for(i=0;i<l;i++){
        if(a[i].flag==0)
            count++;
    }
    if(count>1)
        printf("NO");
    else
        printf("YES");
        }
