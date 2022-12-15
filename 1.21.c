#include <stdio.h>
#include <math.h>

int main()
{
    int a;
	printf("Input number: ");
	scanf_s("%d", &a);
	printf(" - | - | %d | - | - \n - | %d | %d | %d | -\n %d | %d | %d | %d | %d\n", a, a, a, a, a, a, a, a, a);
}