#include <stdio.h>
#include <math.h>


double sincc(double x){   
    return (cos(x)*x-sin(x))/(x*x);
}

int main(){
    double x;
    printf("x=");
    scanf("%lf",&x);
    if(x==0){
        printf("0");
    }else{
    printf("Похідна=%lf\n",sincc(x));
    }
}