#include <iostream>
#include <cstdlib>

using namespace std;

void fill_matrix(int** matrix, int r, int c) {

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("Input a[%d][%d]: ", i, j);
			scanf_s("%d", &matrix[i][j]);
		}
	}
}

void show_matrix(int** matrix, int r, int c) {
	cout << "Matrix" << endl;
	for (int i = 0; i < r; i++) {
		printf("( ");
		for (int j = 0; j < c; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf(")\n");
	}

}

int** add_col(int** matr, int r, int c) {
	int new_c = c + 1;
	int** result = (int**)malloc(new_c * sizeof(int*));
	for (int i = 0; i < new_c; i++)
		result[i] = (int*)malloc(r * sizeof(int));
	int** matr1 = (int**)malloc(r * sizeof(int*));
	for (int i = 0; i < r; i++)
		matr1[i] = (int*)malloc(c * sizeof(int));

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			result[i][j] = matr[i][j];
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			matr1[i][j] = result[i][j];
		}
	}
	for (int j = 0; j < c; j++) {
		for (int i = 0; i < r; i++) {
			//printf("result[i][j=%d\n", result[i][j]);
			//printf("result[i][j+1]=%d\n", result[i][j+1]);
			result[i][j + 1] = matr1[i][j];
		}
	}
	for (int i = 0; i < r ; i++) {
		for (int j = 0; j < 1; j++) {
			cout << " a[" << i << "][" << j << "]: ";
			cin >> result[i][j];
		}
	}

	show_matrix(result, r, new_c);

	return result;
}

int main() {

	int n, m;

	cout << "n =";
	cin >> n ;
	cout << "m =";
	cin >> m;
	int** matr = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++)
		matr[i] = (int*)malloc(m * sizeof(int));
	fill_matrix(matr, n, m);
	show_matrix(matr, n, m);
	add_col(matr, n, m);
	return 0;
}