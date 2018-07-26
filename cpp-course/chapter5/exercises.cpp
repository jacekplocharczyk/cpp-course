#include "../std_lib_facilities.h"
#include "exercises.h"

double ctok(double c)                   // converts Celsius to Kelvin
{
	double k = c + 273.15;
	return k;
}

void exercise1() {
	//find errors and add error when temp < 0K
	double c = 0;                         // declare input variable
	cin >> c;                                // retrieve temperature to input variable
	double k = ctok(c);           // convert temperature

	try {
		if (k < 0.0)
			error("Negative Celvin temperature.\n");
		cout << k << '\n';                 // print out temperature
		keep_window_open();
	}
	catch (runtime_error& e) {
		cerr << "runtime error: " << e.what() << '\n';
		keep_window_open();
	}
}

double ctok_with_test(double c)                   // converts Celsius to Kelvin
{
	double k = c + 273.15;
	if (k < 0.0)
		error("Negative Celvin temperature.\n");
	return k;
}


void exercise2() {
	//test inside function
	double c = 0;                         // declare input variable
	cin >> c;                                // retrieve temperature to input variable


	try {
		double k = ctok_with_test(c);           // convert temperature

		cout << k << '\n';                 // print out temperature
		keep_window_open();
	}
	catch (runtime_error& e) {
		cerr << "runtime error: " << e.what() << '\n';
		keep_window_open();
	}



}