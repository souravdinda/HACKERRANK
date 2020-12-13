#include<stdio.h>
int main(){
    int n,k,a[100000],i,j,c,p;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    c=0;
    p=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c=a[i]-a[j];
            if(c==k){
                p++;
            }
        }
    }
    printf("%d",p);
}
