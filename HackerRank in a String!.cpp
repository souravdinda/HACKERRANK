#include<stdio.h>
#include<string.h>
int main() {
  int q,i,j=0,a1,k;
 char s[200000];
  char h[] = "hackerrank";
  scanf("%d", &q);

  for (k = 0; k < q; k++) {
    j=0;
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++) {
      if (h[j] == s[i]) {
        j++;
      }
    }
    if (j == 10)
      printf("YES\n");
    else
      printf("NO\n");
  }


  return 0;
}

