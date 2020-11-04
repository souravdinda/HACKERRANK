
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int t;
  char s[10000], revstr[10000];
  scanf("%d", &t);
  for (int k = 0; k < t; k++) {
    scanf("%s", s);
    int x = strlen(s);

    int j = 0;
    for (int i = x - 1; i >= 0; i--) {
      revstr[j] = s[i];
      j++;
    }
    revstr[j] = '\0';
    int c = 0;
    for (int l = 0; l < x; l++) {
      if (abs(revstr[l] - revstr[l - 1]) == abs(s[l] - s[l - 1]))
        c++;
    }
    if (c == x - 1)
      printf("Funny");
    else
      printf("Not Funny");
    printf("\n");
  }
}

