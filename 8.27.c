#include <stdio.h>
#include <stdlib.h>

int main()
{
    double matrix[100][100];
    int n;
    printf("n=");
    scanf("%d",&n);
    for (int j = 0; j < 2*n+1; j++)
    {
        for (int i = 0; i < 2*n+1; i++)
        {
            printf("a[%d][%d]=",j,i);
            scanf("%lf", &matrix[j][i]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2*n+1; i++)
    {
        for (int j = 0; j < 2*n+1; j++)
        {
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
    double p;
    for(int i=0;i< 2*n+1;i++){
	   for(int j=i;j< 2*n+1;j++){
          p=matrix[i][j];
	      matrix[i][j]=matrix[j][i];
	      matrix[j][i]=p;}
         }
    printf("Зеркальная:\n");
    for (int i = 0; i < 2*n+1; i++)
    {
        for (int j = 0; j <2*n+1; j++)
        {
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
}    
