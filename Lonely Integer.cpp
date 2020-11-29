#include<stdio.h>
int main(){
    struct node{
        int flag;
        int val;
    };
    struct node a[100000];
    int i,j,flag=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i].val);
        a[i].flag=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i].val==a[j].val && i!=j){
                a[i].flag=1;
            }
        }
    }
    for(i=0;i<n;i++){
        if(a[i].flag==0){
            printf("%d ",a[i].val);
        }
    }
    return 0;
    }
