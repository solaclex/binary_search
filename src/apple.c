#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
  int i,s;
  s = 0;
  for (i = 0; i < n; i++){
    s += (A[i] + x - 1) / x;
  }
  return s <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;
  while(ub - lb > 1){
    int m = (lb + ub) / 2;
    if (p(m) >0) {
      ub = m;
    }
    else {
      lb = m;
    }
  }
  printf("%d\n",ub);

  return 0;
}
