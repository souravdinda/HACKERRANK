#include <stdio.h>
int main() {
  int p, d, m, s, i, j, count = 0, cost = 0;
  scanf("%d%d%d%d", &p, &d, &m, &s);
  if (p > s) {
    printf("0");

  } else {
    for (i = p; i >= m; i = i - d) {

     // printf("i=%d\t", i);
      cost = cost + i;
      //printf("cost=%d\n", cost);
      if (cost <= s) {
        count++;
      }
    }

    // printf("\n\n%d",count);
    s = s - cost;
   // printf("\ns=%d", s);
    if (s > 0) {
      count = count + (s / m);
      printf("%d", count);
    } else {
      printf("%d", count);
    }
  }
  return 0;
}
