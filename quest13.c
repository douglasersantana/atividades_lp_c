#include <stdio.h>

int Comb(int n, int k) {
  if(k == 1) return n;
  if(k == n) return 1;
  if(1 < k && k < n) return Comb(n-1, k-1) + Comb(n-1,k);
  return 0;
}

int main(void) {
  int n = 10, k = 5;
  printf("n grupos distintos de %d pessoas que podem ser formados a partir de %d pessoas eh= %d", k, n, Comb(n,k));
  return 0;
}
