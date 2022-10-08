#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int n;
    double p = 1;
    double p2 = 1;
    double i23= 1.0;
    printf("n=");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        i23 /= i;
        p *= (1 + i23);
    for (int j = 1; j < n; j++) {
        p2 *= (1 + (pow(-1,j + 2) * (pow(j, 2))) / (pow(2,j)));
    }
    }
    printf("%lf\n",p);
    printf("%lf",p2);

}