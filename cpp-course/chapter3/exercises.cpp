#include "..\std_lib_facilities.h"
#include "exercises.h"

void exercise1() {
	// convert miles to kilometers
	cout << "Enter distance in miles to convert: ";
	double distance = 0;
	cin >> distance;
	cout << "\nDistance in miles: " << distance << " is equal to: " << distance * 1.609 << " km.\n";
	keep_window_open();
}

void exercise2() {
	// create program with legal and illegal names to see how compiler reacts
	//int double = 0;
	//double int = 0;
	//char main = 'z';
	//string for = "abc";
}

void exercise3() {
	// compare two integers
	cout << "Enter two integers: ";
	int val1, val2;
	cin >> val1 >> val2;
	if (val1 > val2) {
		cout << "\nFirst value is greater.";
	}
	if (val1 < val2) {
		cout << "\nSecond value is greater.";
	}
	cout << "\nval1 + val2 == " << val1 + val2;
	cout << "\nval1 - val2 == " << val1 - val2;
	cout << "\nval1 * val2 == " << val1 * val2;
	cout << "\nval1 / val2 == " << val1 / val2;

	cout << "\n";

	keep_window_open();
}

void exercise4() {
	// compare two doubles
	cout << "Enter two doubles: ";
	double val1, val2;
	cin >> val1 >> val2;
	if (val1 > val2) {
		cout << "\nFirst value is greater.";
	}
	if (val1 < val2) {
		cout << "\nSecond value is greater.";
	}
	cout << "\nval1 + val2 == " << val1 + val2;
	cout << "\nval1 - val2 == " << val1 - val2;
	cout << "\nval1 * val2 == " << val1 * val2;
	cout << "\nval1 / val2 == " << val1 / val2;

	cout << "\n";

	keep_window_open();
}

void exercise5() {
	// sort three integers
	cout << "Enter three integers: ";
	int val1, val2, val3;
	cin >> val1 >> val2 >> val3;
	if (val1 >= val2) {
		if (val3 >= val1) {
			cout << val2 << ", " << val1 << ", " << val3;
		}
		if (val3 < val1) {
			if (val3 < val2) {
				cout << val3 << ", " << val2 << ", " << val1;
			}
			if (val3 >= val2) {
				cout << val2 << ", " << val3 << ", " << val1;

			}
		}
	}

	if (val1 < val2) {
		if (val3 >= val2) {
			cout << val1 << ", " << val2 << ", " << val3;
		}
		if (val3 < val2) {
			if (val3 < val1) {
				cout << val3 << ", " << val1 << ", " << val2;
			}
			if (val3 >= val1) {
				cout << val1 << ", " << val3 << ", " << val2;

			}
		}
	}

	cout << "\n\n";
	keep_window_open();
}

void exercise6() {
	// sort three strings
	cout << "Enter three strings: ";
	string val1, val2, val3;
	cin >> val1 >> val2 >> val3;
	if (val1 >= val2) {
		if (val3 >= val1) {
			cout << val2 << ", " << val1 << ", " << val3;
		}
		if (val3 < val1) {
			if (val3 < val2) {
				cout << val3 << ", " << val2 << ", " << val1;
			}
			if (val3 >= val2) {
				cout << val2 << ", " << val3 << ", " << val1;

			}
		}
	}

	if (val1 < val2) {
		if (val3 >= val2) {
			cout << val1 << ", " << val2 << ", " << val3;
		}
		if (val3 < val2) {
			if (val3 < val1) {
				cout << val3 << ", " << val1 << ", " << val2;
			}
			if (val3 >= val1) {
				cout << val1 << ", " << val3 << ", " << val2;

			}
		}
	}

	cout << "\n\n";
	keep_window_open();
}

void exercise7(){
	// check if integer is odd or even
	cout << "Enter integer: ";
	int val1;
	cin >> val1;
	if ((val1 % 2) == 0) {
		cout << "\nThe value " << val1 << " is an even number.";
	}
	if ((val1 % 2) == 1) {
		cout << "\nThe value " << val1 << " is an odd number.";
	}

	cout << "\n\n";
	keep_window_open();

	}

void exercise8() {
	// convert string number to int for 0 - 4
	cout << "Enter number as a string: ";
	string number;
	cin >> number;
	if (!(number == "zero" || number == "one" || number == "two" || number == "three" || number == "four")) {
		cout << "\nNot a number I know.\n";
	}
	if (number == "zero" ) {
		cout << "\nNumber is 0.\n";
	}
	if (number == "one") {
		cout << "\nNumber is 1.\n";
	}
	if (number == "two") {
		cout << "\nNumber is 2.\n";
	}
	if (number == "three") {
		cout << "\nNumber is 3.\n";
	}
	if (number == "four") {
		cout << "\nNumber is 4.\n";
	}


	cout << "\n\n";
	keep_window_open();

}