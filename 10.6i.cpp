#include <iostream>
using namespace std;
#define N 5
struct Vector {
	double data[N];
};
Vector input_Vector() {
	Vector example;
	for (int i = 0; i < N; i++) {
		cout << "a[" << i << "]" << endl;
		cin >> example.data[i];
	}
	return example;
}
void show_Vector(Vector example){
	for (int i = 0; i < N; i++) {
		cout << "a[" <<i << "]=" << example.data[i] << endl;
	}
}

int main(){
	Vector ms;
	ms = input_Vector();
	show_Vector(ms);





}