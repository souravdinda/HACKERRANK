#include<stdio.h>
int main(){
    int n,k,i,largest;
    int height[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&height[i]);
    }
    largest=height[0];
    for(i=1;i<n;i++){
        if(largest<height[i]){
            largest=height[i];
        }
    }
    if(largest>k){
        printf("%d",largest-k);
    }
    else 
        printf("0");

}
