#include <stdio.h>
#define N 4
int main(int argc, char const* argv[]){
  int i, j, k;
  double a[N][N + 1] = {{3,2,-3,0,-1},{0,-3,2,1,7},{1,2,-3,2,3},{-3,4,1,2,9}}, p, aki;
  for (i = 0; i < N; i++) {
    for (j = i, p = a[i][i]; j < N + 1; j++) a[i][j] /= p;
    for (k = 0; k < N; k++)
        if (k - i) for (j = i, aki = a[k][i]; j < N + 1; j++) a[k][j] -= aki * a[i][j];
  }
  for (int i = 0; i < N; printf("%lf\n", a[i++][N]));
  return 0;
}
