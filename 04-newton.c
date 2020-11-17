#include <stdio.h>
#include <math.h>
#define EPS 0.00001
double f0(double x){ return x*x-2; }
double f1(double x){ return 2*x; }
int main(int argc, char const *argv[]) {
    double x0=1, x1=2, dx=EPS+1;
    for(;dx>EPS; x1=x0-f0(x0)/f1(x0), dx=fabs(x1-x0), x0=x1);
    return printf("x=%lf\n", x0), 0; 
 }
