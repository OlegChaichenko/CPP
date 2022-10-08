#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    double a;
    int i = 1;
    double sum = 0;
    printf("a=");
    scanf("%lf", &a);
    while (sum < a) {
        sum += 1.0 / i;
        i++;}
    printf("%lf\n",sum);
    printf("%d",i-1);

}