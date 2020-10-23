int main() {
  int s,temp,t, count1 = 0, count2 = 0,a,b,m,n,i,j;
  scanf("%d %d", &s, &t);
  
  scanf("%d %d", &a, &b);
  
  scanf("%d %d", &m, &n);
 
  for (i = 0; i < m; i++) {
    scanf("%d", &temp);
    if (temp + a >= s && temp + a <= t) {
      count1++;
    }
  }
  for (j = 0; j < n; j++) {
    scanf("%d", &temp);
    if (temp + b >= s && temp + b <= t) {
      count2++;
    }
  }
  printf("%d\n", count1);
  printf("%d", count2);
  return 0;
}

