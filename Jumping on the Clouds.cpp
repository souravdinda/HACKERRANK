#include<stdio.h>
int main(){
    int arr[1000000],n,i,s=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n;) {
      if (i + 2 < n) {
        if (arr[i + 1] == 0 && arr[i + 2] == 0) {
          count++;
          i += 2;
        } else if (arr[i + 1] == 0 && arr[i + 2] == 1) {
          count++;
          i += 1;
        } else if (arr[i + 1] == 1 && arr[i + 2] == 0) {
          count++;
          i += 2;
        }
      } else {
        if (i < n - 1)
          count++;
        i++;
      }
    }
printf("%d",count);
}


