#include <stdio.h>
#include <stdlib.h>


int main() {
    double matrix[100][100];
    int n, m;
    printf("n(menshe chem 25)=");
    scanf("%d", &n);
    printf("m(menshe chem 25)=");
    scanf("%d", &m);
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("a[%d][%d]=",j,i);
            scanf("%lf", &matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
  }