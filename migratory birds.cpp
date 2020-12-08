#include<stdio.h>
int main()
{
    int n,a[50],i,j,temp,types,count=1,c=0;
//printf("enter the no of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++){
        //printf("enter the %d element",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    for(j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
   }
for(i=0;i<n-1;i++){
	if(a[i]==a[i+1]){
		count++;
			if(c<count){
				c=count;
				types=a[i];
			}
}
else{
	count=1;
}
}
printf("%d",types);
}
