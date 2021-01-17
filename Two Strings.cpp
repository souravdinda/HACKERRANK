#include<stdio.h>
#include<string.h>
int main(){
    char s1[10000000],s2[10000000];
    int i,n,j,s11,s21,k,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        flag=0;
        scanf("%s%s",s1,s2);
        s11=strlen(s1);
        s21=strlen(s2);
        for(j=0;j<s11;j++){
            for(k=0;k<s21;k++){
                    if(s1[j]==s2[k]){
                        flag=1;
                        break;
                    }
            }
        }
        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

