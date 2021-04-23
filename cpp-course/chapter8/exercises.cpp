#include "exercises.h"
#include "../std_lib_facilities.h"


void print_vector(vector <int>& v, string label) {
	cout << "Printing vector: " << label << "\n[";
	for (int element : v) {
		cout << " " << element;
	}
	cout << " ]\n";
}

void exercise1() {
	vector <int> test_vector{ 1, 2, 3, 41, 2, 321, 2, 12 };
	print_vector(test_vector, "A");

	cout << "\n\n";
	keep_window_open();
}

void fibonacci(int x, int y, vector <int>& vec, int n) {
	if (n < 1) {
		error("Arguments number has to be grater than 0");
	}


	vec.push_back(x);
	if (n == 1)
		return;
	vec.push_back(y);
	if (n == 2)
		return;
	for (int i = 2; i < n; ++i) {
		int next_element = vec[i - 1] + vec[i - 2];
		vec.push_back(next_element);
	}
}

void exercise2() {
	vector <int> test_vector1;
	vector <int> test_vector2;
	vector <int> test_vector3;
	vector <int> test_vector4;

	try
	{
		print_vector(test_vector1, "A");
		fibonacci(1, 2, test_vector1, 10);
		print_vector(test_vector1, "Fibonacci");
		print_vector(test_vector2, "B");
		fibonacci(1, 2, test_vector2, 1);
		print_vector(test_vector2, "Fibonacci");
		print_vector(test_vector3, "C");
		fibonacci(1, 2, test_vector3, 2);
		print_vector(test_vector3, "Fibonacci");
		print_vector(test_vector4, "D");
		fibonacci(1, 2, test_vector4, -10);
		print_vector(test_vector4, "Fibonacci");

	}
	catch (exception& e)
	{
		cout << e.what() << '\n';
	}





	cout << "\n\n";
	keep_window_open();
}

bool compare_given_element(int value, const vector<int>& vec, int element_no) {
	return value < vec[element_no];
}

int last_max_before_oversize_int(const vector<int>& vec, const int max_value) {
	for (int i = vec.size() - 1; i >= 0; --i) {
		if (vec[i] > max_value)
			return vec[i];
	}

	return max_value;
}

void exercise3() {
	bool done = false;
	int last_max = 1;
	int epochs_no = 10;

	while(!done){
		vector <int> test_vector;
		fibonacci(last_max / 10, last_max, test_vector, epochs_no);

		if (compare_given_element(last_max, test_vector, epochs_no - 1)) {
			print_vector(test_vector, "before oversize*************************************");
			last_max = test_vector[epochs_no - 1];
		}
		else {
			last_max = last_max_before_oversize_int(test_vector, last_max);
			print_vector(test_vector, "when oversize*************************************");
			done = true;
		}
	}

	cout << "\n\n";
	keep_window_open();
}

vector <int> create_reversed_vector(const vector <int>& orginal_vector) {
	vector <int> result(orginal_vector.size());
	int input_size = orginal_vector.size();

	for (int i = 0; i < input_size; i++) {
		result[i] = orginal_vector[input_size - i - 1];
	}
	return result;
}

void revers_in_place_vector(vector <int>& orginal_vector) {
	int input_size = orginal_vector.size();

	for (int i = 0; i < input_size/2; i++) {
		swap(orginal_vector[input_size - i - 1], orginal_vector[i]);
	}

}


void exercise4() {
	vector <int> a{ 1,2,3,4,5 };
	vector <int> reversed_copy_a = create_reversed_vector(a);
	print_vector(a, "original before revers");
	print_vector(reversed_copy_a, "copy after revers");
	cout << "\n\n";

	print_vector(a, "original before revers");
	revers_in_place_vector(a);
	print_vector(a, "original after revers");
	cout << "\n\n";

	print_vector(a, "original before revers");
	swap(a[0], a[3]);
	print_vector(a, "original after revers");
	cout << "\n\n";



	cout << "\n\n";
	keep_window_open();
}