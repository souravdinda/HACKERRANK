#include<stdio.h>
#include<stdlib.h>
int main(){
    int x1,v1,x2,v2,k2,k1,i;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    if(x2>x1 && v2>v1){
        printf("NO");
    }
    else 
    {
        k1=x1;
        k2=x2;
        for(i=1;i<=100000;i++){
            k1=k1+v1;
            k2=k2+v2;
            if(k1==k2){
                break;
            }
        }
        if(k1==k2){
            printf("YES");
        }
        else {
            printf("NO"); 
        }
    }
    return 0;
}
        


