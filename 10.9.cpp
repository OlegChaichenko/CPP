#include <iostream>

const int N = 5;
using namespace std;

typedef struct {
	int mas;
	int volume;
} Subject;

Subject input_subject() {
	Subject example_subject = { NULL, NULL };

	cout << "Input subject(mas volume): ";
	cin >> example_subject.mas >> example_subject.volume;

	return example_subject;
}

void output_subject(Subject subject) {
	cout << "Your subject => (" << subject.mas << "," << subject.volume << ")\n";
}

int main() {

	int number;

	Subject subjects_array[N];

	for (int i = 0; i < N; i++) {
		subjects_array[i] = input_subject();
		output_subject(subjects_array[i]);
	}

	int max_density = subjects_array[0].mas * subjects_array[0].volume;

	for (int i = 0; i < N; i++) {
		int current_density = subjects_array[i].mas * subjects_array[i].volume;
		if (current_density > max_density) max_density = current_density;
	}

	Subject subject;
	for (int i = 0; i < N; i++) {
		int current_density = subjects_array[i].mas * subjects_array[i].volume;
		if (current_density == max_density) subject = subjects_array[i];
	}

	output_subject(subject);

	return 0;
}