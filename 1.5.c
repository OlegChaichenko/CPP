#include <stdio.h>
#include <math.h>
int secondMultiple6operation(int x) {
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	int x16 = x8 * x8;
	int x32 = x16 * x16;
	return x32;
    }

int main()
{
    int a;
    printf("a= ");
    scanf("%d", &a);
    int x2 = a * a;
    printf("a) = %d\n",x2*x2);
    int x4=x2*x2;
    printf("b) = %d\n",x4*x2);
    int x8=x4*x4;
    printf("v) = %d\n",x8*a);
    int x16=x8*x8;
    printf("g) = %d\n",x16/a);
    int x28=x16*x8*x4;
    printf("d) = %d\n",x28);
    unsigned long long int x64=x28*x28*x8;
    printf("f) = %llu\n", x64);
}