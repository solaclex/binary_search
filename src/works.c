#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
  int i, s, w;
  s = 0;
  w = 0;
  for(i = 1; i < n; i++){
    if(A[i] > x){
      return 0;
    }
    else if(w+A[i] > x){
      s += 1;
      w = A[i];
    }
    else {
      w += A[i];
    }
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
  ub = 100000000;
  while(ub - lb > 1){
    int m = (lb + ub) / 2;
    if(p(m) >0) {
      ub = m;
    }
    else {
      lb = m;
    }
  }
  printf("%d\n",ub);

  return 0;
}
