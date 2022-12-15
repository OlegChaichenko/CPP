#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    double resul = 4 * n + 2;
    for (int i = n - 1; i != -1; i--) {
        resul = 4 * i + 2 + 1.0 / resul;
    }
    printf("%lf",resul);



}