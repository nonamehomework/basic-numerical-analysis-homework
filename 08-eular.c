#include <stdio.h>
#include <math.h>
double f(double x, double y){return x+y;}
int main(void){
    for(int n=1;n<=10;n++){
        double a=0,b=1,e=1,x=a,y=e,h=(b-a)/n;
        for(;x<b;x+=h) y+=h*f(x,y);
        (n==1||n%100==0)&& printf("n=%d, x=%lf, y=%lf\n",n,x,y);
    }
}