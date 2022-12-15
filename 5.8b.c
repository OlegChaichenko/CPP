#include <stdio.h>
#include <math.h>
 
int main(){
    double ep, x, sum , index, h = 1, k = 2;
    printf("ep=");
    scanf_s("%lf",&ep);
    printf("x=");
    scanf_s("%lf",&x);
    index = x / h;
    sum = 1+index;
    while (index > ep) {
        k++;
        h *= k;
        index = pow(x, k) / h;
        sum += index;
    }

    printf("Res => %lf", sum);
}
