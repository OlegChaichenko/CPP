#include <iostream>
#include <cstdlib>
using namespace std;


void show_matrix(double** matrix, int r, int c) {
    cout << "Matrix" << endl;
    for (int i = 0; i < r; i++) {
        printf("( ");
        for (int j = 0; j < c; j++) {
            printf("%lf ", matrix[i][j]);
        }
        printf(")\n");
    }

}
double** add_row(double** matr, int r, int c,int max_rowss) {
    int new_r = r + 1;
    double** result = (double**)malloc(new_r * sizeof(double*));
    for (int i = 0; i < new_r; i++)
        result[i] = (double*)malloc(c * sizeof(double));
    double** pMatrix1 = (double**)malloc(r * sizeof(double*));
    for (int i = 0; i < r; i++)
    {
         pMatrix1[i] = (double*)malloc(c * sizeof(double));
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = matr[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            pMatrix1[i][j] = matr[i][j];
        }
    }
    show_matrix(pMatrix1, r, c);
    for (int i = max_rowss+1; i < max_rowss+2; i++) {
        for (int j = 0; j < c; j++) {
            cout << " a[" << i << "][" << j << "]: ";
            cin >> result[i][j];
        }
    }
    for (int i = max_rowss + 2; i < r+1; i++) {
        for (int j = 0; j < c; j++) {
            //printf("result[i][j=%lf\n", result[i][j]);
            //printf("pMatrix1[i][j=%lf\n", pMatrix1[i-1][j];
            result[i][j] = pMatrix1[i - 1][j];
        }
    }
    show_matrix(result, new_r, c);
    return result;
}



int main()
{
    int rows, cols;
    double** pMatrix;
    double max = 0;
    int max_row = 0;
    int j = 0;
    printf("rows: ");
    scanf_s("%i", &rows);

    printf("cols: ");
    scanf_s("%i", &cols);
    pMatrix = (double**)malloc(rows * sizeof(double*));

    for (int i = 0; i < rows; i++)
    {
        pMatrix[i] = (double*)malloc(cols * sizeof(double)); 
    }
    for ( j=0; j < rows; j++)
    {
        printf("Line N%i\n", j);
        for (int i = 0; i < cols; i++)
        {
            scanf_s("%lf", &pMatrix[j][i]);
            if (pMatrix[j][i] > max) {
                max = pMatrix[j][i];
                max_row = j;
                //printf("max_row=%d\n", max_row);
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%0.3lf ", pMatrix[i][j]);
        }
        printf("\n");
    }
    printf("%lf\n", max);
    printf("max_row=%d\n", max_row);
    add_row(pMatrix, rows, cols, max_row);

}
