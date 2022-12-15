#include <stdio.h>

int * scan( int size) {
    static int array[20];
    
    for (int i = 0; i < size; i++) {
        printf("array[%d] : ", i+1);
        scanf("%d", &array[i]);
    }

    return array;
}

void prin(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Array[%d] = %d\n", i, array[i]);
    }

}

int * sumArr(int array1[], int array2[],  int size) {
    static int array3[20];
    
    for (int i = 0; i < size; i++) {
        array3[i] = array1[i] + array2[i];
    }

    return array3;
}

int scalarProduct(int array1[], int array2[], int size) {
    int product = 0;

    for (int i = 0; i < size; i++) {
        product += array1[i]*array2[i];
    }

    return product;
}

int main () {
    int *array1, *array2, *SUM, product;
    int n;
    printf("n=");
    scanf("%d",&n);
    array1 = scan(n);
    array2 = scan(n);
    printf("SUM ARRAY\n");
    SUM = sumArr(array1, array2, n);
    prin(SUM, n);
    product = scalarProduct(array1, array2, n);
    printf("product = %d", product);
}