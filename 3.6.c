#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    printf("c=");
    scanf("%lf",&c);
    printf("%lf,%lf,%lf\n",fabs(a),fabs(b),fabs(c));
    a = fabs(a);
	b = fabs(b);
	c = fabs(c);
    double min = a;
    double max = a;

    // min
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    // max
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("max=%lf\n",max);
    printf("min=%lf",min);
  


}