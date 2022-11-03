#include <stdio.h>
#include <stdint.h>
#include <math.h>
int fib(int n){
    if (n<=1){
        return n;}
    return fib(n - 1) + fib(n - 2);
}
 
void help(int k){
    int n=1;
    long long x=1;
    double power;
    while((int)log10(x)+1<k){
        int f=fib(n+1);
        power=(int)(log10(f))+1;
        x*=pow(10,power);
        x+=f;
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