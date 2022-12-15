#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    double x;
    bool T=true;
    int sum=0;
    while(T){
        printf("x=");
        scanf("%lf", &x);
        if(x<0){
            sum++;
        }
        if(x==0){
            T=false;
        }
    }
    printf("Кількість=%d",sum);
}