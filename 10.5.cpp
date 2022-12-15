#include <iostream>
#include <cstdlib>
#include <string>
#define N 5
using namespace std;


typedef struct {
	int hight;
	string name;
} Mountain;

Mountain input_mountain() {
	Mountain example = { NULL, " " };

	cout << "hight: ";
	cin >> example.hight;

	cout << "name: ";
	cin >> example.name;

	return example;
}

void output_mountain(Mountain user) {
	cout << "Your mountain => (" << user.hight << "," << user.name << ")\n";
}

Mountain find_by_hight(Mountain arr[]) {
	int max = arr[0].hight;
	for (int i = 0; i < N; i++) {
		if (arr[i].hight > max) max = arr[i].hight;
	}

	for (int i = 0; i < N; i++) {
		if (arr[i].hight == max) return arr[i];
	}

}

Mountain find_by_name(Mountain arr[], string name) {
	for (int i = 0; i < N; i++) {
		if (arr[i].name == name) return arr[i];
	}

	cout << "No such mountain with name => " << name;
}

int main() {

	Mountain mountains_array[N];

	for (int i = 0; i < N; i++) {
		mountains_array[i] = input_mountain();
		output_mountain(mountains_array[i]);
	}

	string name;
	cout << "name= ";
	cin >> name;

	Mountain f1 = find_by_name(mountains_array, name);
	cout << "Mountain" << name << " has hight =>" << f1.hight << "\n";

	Mountain f2 = find_by_hight(mountains_array);
	cout << "Mountain" << name << " is the hightest =>" << f2.hight << "\n";

	return 0;
}