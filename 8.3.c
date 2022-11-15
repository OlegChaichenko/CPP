#include <stdio.h>
#include <stdlib.h>


int main() {
    int matrix[100][100];
    int n, m;
    printf("n(<20)=");
    scanf("%d", &n);
    printf("m<20)=");
    scanf("%d", &m);
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("a[%d][%d]=",j,i);
            scanf("%d", &matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
  }
