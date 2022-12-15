#include <iostream>
#include <cstdlib>
#include <string>
#define N 3
using namespace std;


typedef struct {
	int date;
	int month;
	int year;
	int stat;
	string name;
	string secna;
} ANKETA;

ANKETA input_mountain() {
	ANKETA example = { NULL,NULL,NULL,NULL, " "," "};

	cout << "Date= ";
	cin >> example.date;
	cout << "Month= ";
	cin >> example.month;
	cout << "Year= ";
	cin >> example.year;
	cout << "If muzhik vvedite 1,if Zhenshina 0(First in list need to be 1)= ";
	cin >> example.stat;

	cout << "name: ";
	cin >> example.name;
	cout << "Familiya: ";
	cin >> example.secna;

	return example;
}

ANKETA find_vozrast(ANKETA arr[]) {
	int max = arr[0].year;
	int max_month = arr[0].month;
	int max_date = arr[0].date;
	for (int i = 0; i < N; i++) {
		if (arr[i].stat == 1) {
			if (arr[i].year < max) {
				max = arr[i].year;
				max_month = arr[i].month;
				max_date = arr[i].date;
			}
			else if (arr[i].year == max) {
				if (arr[i].month < max_month) {
					max = arr[i].year;
					max_month = arr[i].month;
					max_date = arr[i].date;
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		if (arr[i].year == max && arr[i].month==max_month) return arr[i];
	}

}

int find_by_name(ANKETA arr[N]) {
	int count = N;
	int sum=0;
	for (int i = 0; i < N; i++) {
		sum += arr[i].year;
	}
	double ser=sum/count;
	for (int i = 0; i < N; i++) {
		if (arr[i].year >ser) {
			cout << "D)" << arr[i].secna << endl;
		}
	}
	return 0;
	
}

int main() {

	ANKETA anketa_array[N];

	for (int i = 0; i < N; i++) {
		anketa_array[i] = input_mountain();
	}

	ANKETA f1 = find_vozrast(anketa_array);
	cout << "G)Ima Starshego " << f1.name << " Familia " << f1.secna << endl;
	find_by_name(anketa_array);
}