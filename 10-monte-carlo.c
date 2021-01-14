#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
    double m=0,x,y;
    for(int i=1;i<=100000;i++){
        x=(double)rand()/RAND_MAX;
        y=(double)rand()/RAND_MAX;
        m+=(x+y);
        if(i % 5000==0)
            printf("%6d %lf\n",i,(double)m/i);
    }
}