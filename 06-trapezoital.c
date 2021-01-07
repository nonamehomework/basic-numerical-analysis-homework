#include <stdio.h>
#include <math.h>
double f(double x){return 1/x;}
int main(void){
    for(int n=1;n<=500;n++){
        double a=1,b=2,s=0,h=(b-a)/n,x;
        for(int i=0;i<n;i++) s+=2*f(a+h*i);
        s=0.5*(s+f(a)+f(b))*h;
        (n==1||n%100==0)&&printf("n=%3d,s=%lf,d=%lf\n",n,s,s-log(2));
    }
}