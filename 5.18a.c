#include <stdio.h>
#include <math.h>
 
int help(int k){
    int n=1;
    long long x=1;
    double power;
    while(log10(x)+1<k){
        power=(log10(n*10))+1;
        x*=pow(10,power);
        x+=n*10;
        n*=10;
    }
    return x;
}
int main(){
    int k;
    printf("k=");
    scanf("%d",&k);
    long long res=help(k);
    printf("%lli",res);
}