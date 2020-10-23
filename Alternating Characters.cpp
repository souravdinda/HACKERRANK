#include<stdio.h>
int main(){
    char b[10000000];
    int n,i,j,count=0,p;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        count=0;
        scanf("%s",b);
        p=strlen(b);
        for(j=0;j<p-1;j++){
            if(b[j]==b[j+1]){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

