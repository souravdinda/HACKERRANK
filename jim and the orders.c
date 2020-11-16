#include<stdio.h>
int main() {

    int n,i;
    scanf("%d",&n);
    
    int t[n],d[n],sum[2][n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&t[i],&d[i]);
        sum[0][i] = t[i]+d[i];
        sum[1][i] = i+1;
    }
   
    int key, j,pos;
   for (i = 1; i < n; i++)
   {
       key = sum[0][i];
       pos = sum[1][i];
       j = i-1;
 
       while (j >= 0 && sum[0][j] > key)
       {
           sum[0][j+1] = sum[0][j];
           sum[1][j+1] = sum[1][j];
           j = j-1;
          
       }
       sum[0][j+1] = key;
       sum[1][j+1] = pos;
   }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",sum[1][i]);
    }
    
    return 0;
}

