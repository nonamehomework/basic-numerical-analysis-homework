#include <stdio.h>
#include <math.h>
double f(double x, double y){return x+y;}
int main(void){
    for(int n=1;n<=10000;n++){
        if (!(n==1||n%1000==0)) continue;
        double a=0,b=2,e=1,x=a,y=e,h=(b-a)/n;
        for(;x<b;x+=h) y+=h*f(x,y);
        printf("n=%d, x=%lf, y=%lf\n",n,x,y);
    }
}