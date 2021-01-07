#include <stdio.h>
#include <math.h>
double f(double x){return 1/x;}
int main(void){
    for(int n=1;n<=500;n++){
        double a=1,b=2,s1=0,s2=0,h=(b-a)/n;
        for(int i=1;i<=2*n-1;i+=2) s1+=2*f(a+h*i);
        for(int i=2;i<=2*n-2;i+=2) s2+=2*f(a+h*i);
        double s=(s1+s2+f(a)+f(b))*h/3;
        (n==1||n%100==0)&&printf("n=%3d,s=%lf,d=%lf\n",n,s,s-log(2));
    }
}