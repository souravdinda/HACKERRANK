#include <stdio.h>
int main() {
  int n, a[1500],i,j,temp,p;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
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
  for (i = 1; i <= n; i++)
    printf("%d\t", a[i]);
}


