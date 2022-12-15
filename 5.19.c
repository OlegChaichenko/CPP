#include <stdio.h>
#include <math.h>
 
int main(){
    double left = -0.001, right = 1.5, eps, medium;
    printf("epsilon=");
    scanf("%lf",&eps);
    while (right - left > eps) {
        medium = (right + left) / 2;
        printf("средняя= %lf\n", medium);
        if ((tan(left) - left) * (tan(medium) - medium) > 0) {

            left = medium;
            printf("лево= %lf\n", left);
        }
        else if ((tan(right) - right) * (tan(medium) - medium) > 0) {

            right = medium;
            printf("право= %lf\n", right);
        }
    }


    printf("Ответ= %.40lf",medium);
}
