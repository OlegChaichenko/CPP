#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    double resul = 2;
    for (int i = n; i != 0; i--) {
        if (i % 2 == 0) {
            resul = 2 + 1 / resul;
        }
        else {
            resul = 1 + 1 / resul;
        }
    }
    printf("%lf\n",resul);
}