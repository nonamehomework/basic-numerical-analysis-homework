#include <stdio.h>
#include <math.h>
#define EPS 0.000001
double f(double l) { return 1.25*sin(0.4*l)*sin(0.6*l)-l*sin(l); }
int main(int argc, char const *argv[]) {
    double fa, fb, fc, a = 2.5, b = 3.0, c;
    do { 
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        if (f(c)*f(b)<0) a = c; else b = c;
    } while(fabs(f(c)) > EPS);
    printf("λ=%lf\n", c);
    return 0;
}
