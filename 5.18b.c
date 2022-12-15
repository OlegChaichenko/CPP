#include <stdio.h>
#include <stdint.h>
#include <math.h>
 
void help(int k){
    int n=1;
    long long x=1;
    double power;
    while((int)log10(x)+1<k){
        power=(int)(log10(n+1))+1;
        x*=pow(10,power);
        x+=n+1;
        n++;
    }
    printf("%lli",x);
}
int main(){
    unsigned k;
    printf("k=");
    scanf("%u",&k);
    help(k);
}