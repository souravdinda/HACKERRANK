#include <stdio.h>
#include <stdlib.h>

int main() {
  long int i, j, k;
  long int t;
  long int a[10000];
  long int n, m, p;
  scanf("%ld", &t);
  while (t--) {
    scanf("%ld", &m);
    scanf("%ld", &n);
    for (i = 1; i <= n; i++) {
      scanf("%ld", &a[i]);
    }
    for (j = 1; j <= n; j++) {
      for (i = j + 1; i <= n; i++) {
        if (a[j] + a[i] == m) {
          p = j;
          k = i;
        }
      }
    }

    printf("%ld %ld\n", p, k);
  }

  return 0;
}
