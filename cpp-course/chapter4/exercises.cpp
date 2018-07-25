#include "..\std_lib_facilities.h"
#include "exercises.h"


double get_sum(vector<double> v) {
	double sum = 0;
	for (double element : v) {
		sum += element;
	}
	return sum;
}

double get_min(vector<double> v) {
	return *min_element(v.begin(), v.end());
}

double get_max(vector<double> v) {
	return *max_element(v.begin(), v.end());
}

double get_mean(vector<double> v) {
	return get_sum(v) / v.size();
}

void exercise1() {
	//get sum, min, max and mean from vector
	vector <double> distances{ 12.1, 23.5, 54.2, 62.9, 23.1 };
	cout << "Vector sum : " << get_sum(distances) << "\n";
	cout << "Vector mean: " << get_mean(distances) << "\n";
	cout << "Vector max : " << get_max(distances) << "\n";
	cout << "Vector min : " << get_min(distances) << "\n";
	cout << "\n\n";
	keep_window_open();
}

bool is_prime(int value, vector<int> primes) {
	for (int prime : primes) {
		if (value % prime == 0) {
			return false;
		}
	}
	return true;
}

void print_vector(vector <int> x) {
	for (int value : x) {
		cout << "\n\t" << value;
	}
}

void exercise2() {
	//find prime
	vector <int> primes;
	int max_int = 100;
	for (int i = 2; i <= max_int; ++i) {
		if (is_prime(i, primes)) {
			primes.push_back(i);
		}
	}
	print_vector(primes);

	cout << "\n\n";
	keep_window_open();

}

vector <bool> create_true_vector(int elements_no) {
	vector <bool> vec;
	for (int i = 0; i < elements_no; ++i) {
		vec.push_back(true);
	}
	return vec;
}

void exercise3() {
	//find prime with Sieve of Eratosthenes
	int max_int = 100;
	vector <bool> primes_table = create_true_vector(max_int);
	vector <int> primes;



	for (int i = 2; i < max_int; ++i) {
		if (primes_table.at(i)) {
			primes.push_back(i);
			for (int j = i; j < max_int; j += i) {
				primes_table.at(j) = false;
			}
		}
		
	}
	print_vector(primes);

	cout << "\n\n";
	keep_window_open();
}

void exercise4() {
	// change value of specific cell in vector
	vector <int> primes{ 12,2,54 };

	print_vector(primes);
	primes.at(1) = 100000;
	print_vector(primes);


	cout << "\n\n";
	keep_window_open();
}