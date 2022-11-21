#include <stdio.h>
#include <stdlib.h>
struct point
{
    double x;
    double y;
};

struct point point_input()
{
    double x, y;
    printf("X:");
    scanf_s("%lf", &x);
    printf("Y:");
    scanf_s("%lf", &y);
    scanf_s("%*c");
    return point{ x, y };
}
struct rectangle
{
    struct point vertex1;
    struct point vertex2;
};

struct rectangle rectangle_input()
{
    printf("Point1\n");
    struct point pnt1 = point_input();
    printf("Point2\n");
    struct point pnt2 = point_input();
    return rectangle{ pnt1, pnt2 };
}

void rectangle_print(struct rectangle a)
{
    printf("Point1: (%lf, %lf)\n", a.vertex1.x, a.vertex1.y);
    printf("Point2: (%lf, %lf)\n", a.vertex1.x, a.vertex2.y);
    printf("Point3: (%lf, %lf)\n", a.vertex2.x, a.vertex2.y);
    printf("Point4: (%lf, %lf)\n", a.vertex2.x, a.vertex1.y);
}

struct polynom
{
    unsigned a;
    double* b;
};


struct polynom polynom_input()
{
    unsigned a;
    printf("Poryadok:");
    scanf_s("%u", &a);
    double* b;
    if (!(b = (double*)malloc((a + 1) * sizeof(b))))
    {
        printf("Error: can`t allocate memmory\n");
    }
    else
    {
        for (int i = 0; i <= a; i++)
        {
            printf("a%i=", i);
            scanf_s("%lf", (b + i));
        }
        scanf_s("%*c");
        return polynom{ a, b };
    }
}

void polynom_print(struct polynom a)
{
    for (int i = a.a; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("%lf", a.b[0]);
        }
        else
        {
            printf("%lf*x^%i + ", a.b[i], i);
        }
    }
    printf("\n");
}

void polynom_del(struct polynom a)
{
    free(a.b);
}

int main()
{

    struct rectangle rctngl1 = rectangle_input(); printf("\n");
    rectangle_print(rctngl1);
    printf("________________\n");

    struct polynom plnm1 = polynom_input(); printf("\n");
    polynom_print(plnm1);
    polynom_del(plnm1);
}
