#include <stdio.h>
int main(){
    int *a,i,s=0,n;
    scanf("%d",&n);
    a=(int)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++){
        s=s+*(a+i);
    }
    printf("%d\n",s);
}

