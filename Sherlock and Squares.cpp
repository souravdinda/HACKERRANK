int main() {
  int q,k,i,j,a,b,c=0;
  scanf("%d", &q);
  for (int j = 0; j< q; j++) {
    c=0;
    scanf("%d %d", &a, &b);
    for (i = sqrt(a); i <= sqrt(b); i++) {
      k = i * i;
      if (k >= a && k <= b)
        c++;
    }
    printf("%d\n", c);
  }
}

