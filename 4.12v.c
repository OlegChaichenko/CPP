#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double x;
    double y=0;
    printf("n=");
    scanf("%d",&n);
    printf("x=");
    scanf("%lf",&x);
    for(int i=1;i<n+1;i++){
        y+=pow(x,pow(i,2));
    }
    printf("y=%lf",y);
    
}