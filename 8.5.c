#include <stdio.h>
#include <stdlib.h>

void transponse(double** m1, double** m2, int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      m2[j][i] = m1[i][j];
    }
  }
}

void fill_matrix(double** matrix, double r, double c) {

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("Input a[%d][%d]: ", i, j);
      scanf_s("%lf", &matrix[i][j]);
    }
  }
}

void show_matrix(double** matrix, double r, double c) {

  for (int i = 0; i < r; i++) {
    printf("( ");
    for (int j = 0; j < c; j++) {
      printf("%lf ", matrix[i][j]);
    }
    printf(" )\n");
  }
    
}

int main() {
    int matrix[100][100];
    int matrix2[100][100];
    int n, m;
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
        for (int j = 0; j < m; j++) {
           matrix2[j][i] = matrix[i][j];
    }}
    printf("транспонована\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
}

