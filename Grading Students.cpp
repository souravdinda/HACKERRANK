#include<stdio.h>
int main(){
    int n,m,k,s,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        k=m/5;
        k++;
        k=k*5;
        s=k-m;
        if(m<38){
            printf("%d\n",m);
        }
        else{
            if(s<3){
                printf("%d\n",k);
            }
            else{
                printf("%d\n",m);
            }
        }
        k=0;
        s=0;
    }
}
