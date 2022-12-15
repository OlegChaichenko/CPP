#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int fib(int n){
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}


int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("%d\n", fib(n));
    int a;
    int i=0;
    printf("a=");
    scanf("%d",&a);
    while(fib(i)<a){
        i++;
    }
    printf("%d\n",i-1);
    printf("%d\n",i);
    int k=0;
    int sum=0;
    while(fib(k)<1000){
        sum+=fib(k);
        k++;
    }
    printf("%d\n",sum);

    
    
}