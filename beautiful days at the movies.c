#include <stdio.h>
int main()
{
    int n,s,e,k,r1 = 0,r,i,w,count=0;
//printf(" enter s,e,k");
scanf("%d%d%d",&s,&e,&k);
for(i=s;i<=e;i++){
        n=i;
    r1=0;
    while(n != 0)
    {
        r = n%10;
        r1 = r1*10 + r;
        n= n/10;
    }

    //printf("Reversed Number = %d\t", r1);
    w=abs(r1-i);
    //printf("%d\n",w);
    if(w%k==0){
        count++;
    }

}
printf("\n\n\n%d ",count);
}
