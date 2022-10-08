#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int b;
    int n;
    printf("b=");
    scanf("%d",&b);
    printf("n=");
    scanf("%d",&n);
    double resul = b;
    for (unsigned i = 1; i <= n; i++) {
        resul = b + 1.0 / resul;
    }
    printf("%lf",resul);
}