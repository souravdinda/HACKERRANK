#include <stdio.h>
int main() {
  int c[1000000], n,i,energy,k;
  scanf("%d%d", &n,&k);
  for (i = 0; i < n; i++) {
    scanf("%d", &c[i]);
  }
  energy = 100 ;
   i = k % n ;
    energy -= c[i] * 2 + 1;
     while( i != 0){
         i = (i + k) % n ;
         energy -= c[i] * 2 + 1;

     }
     printf("%d",energy);
}
