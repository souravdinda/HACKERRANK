#include<stdio.h>
int main(){
    int a[1000000],n,i,c=-10000,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(c<a[i]){
            c=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(c==a[i])
            p++;
    }
    printf("%d",p);

}

