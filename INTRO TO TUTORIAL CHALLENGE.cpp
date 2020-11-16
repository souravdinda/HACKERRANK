#include<stdio.h>
int main(){
    int v1,n,flag=0,c,i;
    int v[1000];
    scanf("%d%d",&v1,&n);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++){
        if(v1==v[i]){
            flag=1;
            c=i;
            break;
        
        }
    }
    printf("%d",c);

}
