#include<stdio.h>
int main(){
    int i,j,k,a[100000],n,m,p,q,c;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d%d",&p,&q);
            c=a[p];
        for(j=p;j<=q;j++){
            if(c>a[j]){
                c=a[j];
            }
        }
        printf("%d\n",c);
    }
}

