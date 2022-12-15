#include <stdio.h>
#include <stdint.h>
void task6_27(unsigned a, unsigned b){
    unsigned c=1;
    for(int i=0;i<7;i++){
        if ((a&c)!=(b&c)){
            printf("rizni bity na %d pozytsii\n", 8-i);
        }
        c<<=1;
    }
}
int main(){
    unsigned a,b;
    printf("Enter a: ");
    scanf("%u",&a);
    printf("Enter b: ");
    scanf("%u",&b);
    task6_27(a,b);

}