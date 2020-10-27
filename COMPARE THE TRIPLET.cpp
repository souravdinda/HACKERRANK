#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,*b,i;
    int p=0,s=0;
    a=(int)malloc(3*sizeof(int));
    b= (int)malloc(3*sizeof(int));
    for(i=0;i<3;i++){
        scanf("%d",a+i);
    }
    for(i=0;i<3;i++){
        scanf("%d",b+i);
    }
    for(i=0;i<3;i++){
    if(*(a+i)>*(b+i)){
        s=s+1;
    }
    if (*(a + i) < *(b + i)) {
        p=p+1;
}
}
printf("%d\t%d",s,p);
}

