
#include <stdio.h>
    int main() {
       long long int n, a[100000], i, j, temp, p,k,c=0;
      scanf("%lld%lld", &n,&k);
      for (i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
      }
      for (i = 2; i <= n; i++) {
        temp = a[i];
        p = i - 1;
        while (temp < a[p] && p >= 1) {
          a[p + 1] = a[p];
          p--;
        }
        a[p + 1] = temp;
      }
      for(i=1;i<=n;i++){
          if(a[i]<=k){
              k-=a[i];
              c++;
          }
      }
        printf("%lld",c)  ;
      }

          
         
      
      

