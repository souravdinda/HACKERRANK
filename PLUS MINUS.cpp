#include<stdio.h>
int main(){
    int a[100000],i,n,p=0,n1=0,z=0;
    float p2,n2,z1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n1++;
        }
        else{
            z++;
        }
        
    }
    p2=(float)p/n;
    n2=(float)n1/n;
    z1=(float)z/n;
    printf("%f\n",p2);
    printf("%f\n", n2);
    printf("%f\n", z1);
}
