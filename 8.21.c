#include <stdio.h>
#include <stdlib.h>

int main()
{
    double matrix[100][100];
    int n, m;
    int rx=0;
    double ys;
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("a[%d][%d]=",j,i);
            scanf("%lf", &matrix[j][i]);
        }
    }  
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (matrix[rx][j] > matrix[i][j])
            {
                rx = i;
            }
        }
        ys = matrix[rx][j];
        matrix[rx][j] = matrix[0][j];
        matrix[0][j] =  ys;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
}