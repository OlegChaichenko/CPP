#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Chislo:";
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> arr[i];
	}
	cout << " a[ ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << " ]" << endl;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i] * arr[i];
	}
	cout << "sum= " << sum << endl;

	delete[] arr;

	return 0;
}