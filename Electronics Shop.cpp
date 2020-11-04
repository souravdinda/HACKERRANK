#include<stdio.h>
int main(){
    int b,n,m,a[100000],c[1000000],i,j,z,large;
    scanf("%d%d%d",&b,&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=m;i++){
        scanf("%d",&c[i]);
    }
    large=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            
                z=a[i]+c[j];
                    if(large<z && z<=b){
                    large=z;
                }
            
        }
    }
    if(large>0)
    printf("%d",large);
    else 
    printf("-1");
}
