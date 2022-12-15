#include <stdio.h>
#include <stdint.h>
#include <math.h>
 
void help(int k){
    int n=2;
    long long x=1;
    double power;
    while((int)log10(x)+1<k){
        power=(int)(log10(n*n))+1;
        x*=pow(10,power);
        x+=n*n;
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