#include<stdio.h>
#include<math.h>
int main(){
    int a[100],n,i,j,s=0,temp,p,p1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
      if(n<=40){
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]<a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
}
}
}
      

/*for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}*/
j = 0;
          
          for (i = 0; i < n; i++) {
            p=pow(2,j);
            p1=p*a[i];
            //printf("j=%d ",j);
            s=s+p1;
           /* printf("p=%d ",p);
            printf("p1=%d ",p1);
            printf("a[%d]=%d ",i,a[i]);
            printf("s=%d ",s);
            printf("\n");*/
            j++;
        }
      }
        printf("%d",s);

}

