#include<stdio.h>
int main(){
  struct quote {
    int m;
    int c;
    int c1;
  }a[100];
  //struct qoute a[100];
  int n, i, d, d1;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d%d%d", &a[i].c, &a[i].c1, &a[i].m);
    }
    for(i=0;i<n;i++){
        d=a[i].m-a[i].c;
        if(d<0){
          d = a[i].c - a[i].m;
        }
        d1=a[i].m - a[i].c1;
        if(d1<0){
            d1=a[i].c1-a[i].m;
        }
        if(d>d1)
            printf("Cat B");
        else if(d<d1)
            printf("Cat A");
        else 
            printf("Mouse C");
            printf("\n");
    }
}


