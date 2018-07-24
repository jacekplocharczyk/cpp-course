#include "..\std_lib_facilities.h"
#include "try_this.h"

void try_this1() {
	// Get "name and age" example to run. Then modify it to print age in months. Allow to put floating points variables to age.

	cout << "Please enter your name and age\n";
	string name = "???";
	double age = 0;
	cin >> name >> age;
	cout << "Hello, " << name << " (age in months " << age * 12 << ")\n";
	keep_window_open();
}

void try_this2() {
	// Get "simple program" example to run. Then modify it to read int instead double.

	cout << "Please enter integer value: ";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << n * 3
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< "\n";
	keep_window_open();
}

void try_this3() {
	// Get "repeated word detection program" to run. Test it with sentence: "She she laughed He He He because what he did id not look very very good good."

	string previous = "";
	string current;
	while (cin >> current) {
		if (previous == current)
			cout << "repeated word: " << current << "\n";
		previous = current;
	}
}

void try_this4() {
	// Compile the "Goodbye , cruel world!"
	string s = "Goodbye, cruel world! ";
	cout << s << '\n';
	keep_window_open();
}

void try_this5() {
	//have fun with type conversion 
	double d = 0;
	while (cin >> d) {
		int i = d;
		char c = i;
		int i2 = c;
		cout << " d==" << d
			<< " i==" << i
			<< " i2==" << i2
			<< " char(" << c << ")\n";
	}
}