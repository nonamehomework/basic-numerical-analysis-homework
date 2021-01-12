#include <stdio.h>
#include <math.h>
double f(double x,double y){return x+y;}
int main(void){
    for(int n=1;n<=10000;n++){
        if(!(n==1||n%1000==0))continue; 
        double a=0,b=2,y0=1,x=a,y=y0,h=(b-a)/n;
        while(x<b){
            double k1=f(x      ,y         ),k2=f(x+h/2.0,y+k1*h/2.0),
                   k3=f(x+h/2.0,y+k2*h/2.0),k4=f(x+h    ,y+k3*h    );
            y+=h*(k1+2.0*k2+2.0*k3+k4)/6;x+=h;
        }
        printf("n=%5d, x=%lf, y=%lf\n",n,x,y);
    }
}