#include <stdio.h>
int main() {
  int n, i, m = 5, like = 0;
  
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    like = like + (m / 2);
    m = (m / 2) * 3;
  }
  printf("%d", like);
  return 0;
}

