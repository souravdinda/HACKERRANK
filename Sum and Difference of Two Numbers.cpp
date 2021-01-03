#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    float p,s,r,r1;
    scanf("%d%d%f%f",&a,&b,&p,&s);
c=a+b;
d=a-b;
r=p+s;
r1=p-s;
printf("%d\t",c);
printf("%d\n",d);
printf("%.1f\t",r);
printf("%.1f",r1);

return 0;
}


