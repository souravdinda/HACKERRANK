#include <stdio.h>
int main() {
  int n, a[100], i, p = 0, z, t, c, v, q, s = 0;
  scanf("%d", &n);
  // for(c=0;c<t;c++){
  //  scanf("%d",&n);
  while (n != 0) {
    q = n;
    i = n % 10;
    a[p] = i;
    /* if(q%i==0 && i>0){
         w++;*/
    // printf("\n%d\n",i);
    p++;
    // printf("%d ",i);
    n = n / 10;
  }
  v = p;
  // p=0;
  for (z = v - 1; z >= 0; z--) {
    s = s + a[z];
  }
  printf("%d  ", s);
  // printf("\n");
  /*for(z=v-1;z>=0;z--){
      if(q%a[z]==0){
          w++;
             }
  }*/
  // printf("%d\n",w);
  // w=0;
  ///}
  return 0;
}
