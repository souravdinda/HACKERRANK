#include<stdio.h>
int main() {
  int n, i, j, max = 0, count;
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++) {
    count = 0;

    for (j = 0; j < n; j++) {
      if (a[i] == a[j])
        count++;
    }

    if (count > max)
      max = count;
  }
  printf("%d", n - max);
}
