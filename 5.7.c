#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    double a1 = 0, a2 = 1, b1 = 1, b2 = 0, ak, bk,sum;
    double s1 = 2 / (a1 + b1);
    sum = s1;
    sum  += 4 / (a2 + b2);
    int col = 4;
    for (int i = 3; i <= n; i++) {
        bk = a2 + b2;
        ak = a2 / i + a1 * b1;
        col *= 2;
        sum  += col / (ak + bk);
        a1 = a2;
        a2 = ak;
        b1 = b2;
        b2 = bk;
    }
    printf("res=%lf",sum );

}