#include<stdio.h> 
#include<string.h>  
int main(){
    int a[200],i,j,p,c,c1,l=-100;
    char b[15];
    for(i=97;i<=122;i++){
        scanf("%d",&a[i]);
    }
    scanf("%s",b);
    p=strlen(b);
    for(i=0;i<p;i++){
        c=b[i];
        c1=a[c];
        if(l<c1){
            l=c1;
        }
    }
   printf("%d",l*p); 
}

