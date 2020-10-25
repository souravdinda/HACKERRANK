#include<stdio.h>
int main(){
    int i,j,k,a[1000000],d,count=0,n;
    scanf("%d%d",&n,&d);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
for (i = 0; i <n; i++) {
  for (j = i + 1; j <n; j++) {
    if ((a[j] - a[i]) == d) {
      for (k = j + 1; k < n; k++)
        if ((a[k] - a[j]) == d)
          count++;
    }
  }
}
printf("%d", count);
}

