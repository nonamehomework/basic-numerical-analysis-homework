#include <math.h>
#include <stdio.h>
#define N 5
int main(int argc, char const *argv[]) {
  double sx = 0, sx2 = 0, sy = 0, sxy = 0, x[] = {1, 2, 3, 4, 5}, y[] = {9, 34, 85, 171, 188};
  for (int i = 0; i < N; sx+=x[i], sy+=y[i], sx2+=x[i]*x[i], sxy+=x[i]*y[i], i++);
  return printf("y = %f + %fx\n", (sy*sx2-sx*sxy) / (N*sx2-sx*sx), (N*sxy-sy*sx) / (N*sx2-sx*sx)), 0;
}
