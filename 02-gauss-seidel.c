#include <stdio.h>
#include <math.h>
#define N 5
#define K 30
#define EPS 0.0001
int main(int argc, char const *argv[]){
    double a[N][N+1]={{4,-1,0,0,-1,3},{-1,4,-1,0,0,3},{0,-1,4,-1,0,7},{0,0,-1,4,-1,9},{-1,0,0,-1,4,8}}, x[N], y[N], q=EPS+1, sum;
    int i,j,k;
    for(int i = 0; i < N; i++) x[i] = y[i] = 1.0;
    for(k = 1; k <= K && q >= EPS; k++){
        for(i = 0; i < N; (x[i] = (a[i][N]-sum) / a[i][i]), i++)
            for(j = 0, sum = 0; j < N; j++) if (i != j) sum += a[i][j] * x[j];
        for(i = 0, q = 0; i < N; (y[i] = x[i]), i++) q += fabs(x[i]-y[i]);
    }
    if(k > K) printf("収束せず\n"); else for(i = 0; i < N; i++) printf("x%d = %lf\n", i, x[i]); 
}
