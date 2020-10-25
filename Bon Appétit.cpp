#include<stdio.h>
int main(){
    int n,k,a[100000],s=0,b,bill,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++){
        if(i!=k){
            s=s+a[i];
        }
    }
    bill=s/2;
    bill=b-bill;
    if(bill>0)
    printf("%d",bill);
    else
    printf("Bon Appetit");

}
