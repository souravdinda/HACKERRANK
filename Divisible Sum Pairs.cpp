#include<stdio.h>
int main(){
    int n,k,a[100000],r=0,i,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(i<j){
            if ((a[i]+a[j])%k==0){
                r++;
            }
        }
        }
    }
printf("%d",r);
}


