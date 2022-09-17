#include <stdio.h>
#include <math.h>

int main()
{
    int с;
	printf("enter c: ");
	scanf_s("%d", &с);

	float f = (с * 9) / 5 + 32;
	printf("f=%.0f", f);
}