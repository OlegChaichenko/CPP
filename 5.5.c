#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
int x1 = -99;
int x2 = -99;
int x3 = -99;
int xn = 0;
int i = 2;    
while (xn <= 0) {
    xn = x1 + x3 + 100;
    x1 = x2;
    x2 = x3; 
    x3 = xn;
    i++;
    }
printf("%d",i);
}