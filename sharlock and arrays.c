#include <stdio.h>
int main() {
  int a[30000], i, j, n, p, sum, sum1, k,flag,m,t;
  scanf("%d",&t);
  for(m=0;m<t;m++){
      flag=0;
  //printf("enter n\n");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    //printf("enter no\n");
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++) {
    sum=0;
    sum1=0;

    for (j = 0; j < i; j++) {
      sum = sum + a[j];
    }
    for (k = i + 1; k < n; k++) {
      sum1 = sum1 + a[k];
    }
  //  printf("%d     %d \n", sum, sum1);
    if (sum == sum1) {
      flag=1;
      break;
    }
  }
  if(flag==1)
    printf("YES\n");
  else
    printf("NO\n");
  }
}
