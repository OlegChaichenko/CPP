#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[105][105];
    int n, m;
    int k=1;
    int sum = 0;
    printf("n=");
    scanf("%d", &n);
    printf("m=");
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
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
         if (i - j == k){
         sum += matrix[i][j];}
    }
  }
  printf("sum=%d",sum);
}