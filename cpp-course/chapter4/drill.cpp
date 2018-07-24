#include "../std_lib_facilities.h"
#include "drill.h"

char get_end_char() {
	char end_char = 'a';
	cout << "\nTo quit enter '|'.\nIf you would like to continue enter other character.\n";
	cin >> end_char;
	return end_char;
}


void drill1() {
	// read and print 2 integers or exit program by typing '|'
	char end_char = get_end_char();
	int x, y;

	while (end_char != '|') {
		cout << "\nEnter two integers\n\t";
		cin >> x >> y;
		cout << "\t" << x << "\t" << y;		end_char = get_end_char();
	}

	cout << "\nQuiting...\n\n";
	keep_window_open();
}

void drill2() {
	// add finding greater and lesser values
	char end_char = get_end_char();
	int x, y;

	while (end_char != '|') {
		cout << "\nEnter two integers\n\t";
		cin >> x >> y;
		if (x > y) {
			cout << "\nThe smaller value: " << y;
			cout << "\nThe greater value: " << x;
		}
		else if (x < y) {
			cout << "\nThe smaller value: " << x;
			cout << "\nThe greater value: " << y;
		}



		end_char = get_end_char();
	}

	cout << "\nQuiting...\n\n";
	keep_window_open();
}

void drill3() {
	// add finding equal values
	char end_char = get_end_char();
	int x, y;

	while (end_char != '|') {
		cout << "\nEnter two integers\n\t";
		cin >> x >> y;
		if (x > y) {
			cout << "\nThe smaller value: " << y;
			cout << "\nThe greater value: " << x;
		}
		else if (x < y) {
			cout << "\nThe smaller value: " << x;
			cout << "\nThe greater value: " << y;
		}
		else {
			cout << "\nNumbers are equal";

		}



		end_char = get_end_char();
	}

	cout << "\nQuiting...\n\n";
	keep_window_open();
}

void drill4() {
	// double instead int
	char end_char = get_end_char();
	double x, y;

	while (end_char != '|') {
		cout << "\nEnter two doubles\n\t";
		cin >> x >> y;
		if (x > y) {
			cout << "\nThe smaller value: " << y;
			cout << "\nThe greater value: " << x;
		}
		else if (x < y) {
			cout << "\nThe smaller value: " << x;
			cout << "\nThe greater value: " << y;
		}
		else {
			cout << "\nNumbers are equal";

		}



		end_char = get_end_char();
	}

	cout << "\nQuiting...\n\n";
	keep_window_open();
}

void check_almost_equality(double proportion) {
	if (proportion > 0.99 && proportion < 1.01)
		cout << "\nThe numbers are almost equal.";	
}

void drill5() {
	// check if numbers are almost equal
	char end_char = get_end_char();
	double x, y, proportion;

	while (end_char != '|') {
		cout << "\nEnter two doubles\n\t";
		cin >> x >> y;
		proportion = x / y;

		if (x > y) {
			cout << "\nThe smaller value: " << y;
			cout << "\nThe greater value: " << x;
			check_almost_equality(proportion);
		}
		else if (x < y) {
			cout << "\nThe smaller value: " << x;
			cout << "\nThe greater value: " << y;
			check_almost_equality(proportion);

		}
		else if (x == y) {
				cout << "\nThe numbers are equal.";
		}
			
		end_char = get_end_char();
	}

	cout << "\nQuiting...\n\n";
	keep_window_open();
}

void drill6() {
	// find max and minimum, take one at the time
	char end_char = get_end_char();
	double x, min, max;
	min = 100000000000000000000000000000.0; // should be max of double
	max = -min;

	while (end_char != '|') {
		cout << "\nEnter double value:\n\t";
		cin >> x;
		cout << "\nYou entered: " << x;

		if (x > max) {
			max = x;
			cout << "\nIt is the greatest value so far.\n";
		}
		if (x < min) {
			min = x;
			cout << "\nIt is the lowest value so far.\n";
		}

		end_char = get_end_char();
	}

	cout << "\nQuiting...\n\n";
	keep_window_open();
}

double convert(double x, string units) {
	constexpr double m_cm = 100;
	constexpr double in_cm = 2.54;
	constexpr double ft_in = 12;
	constexpr double ft_cm = ft_in * in_cm;
	double result = 0;

	if (units == "m") {
		result = x * m_cm;
	}
	else if (units == "in") {
		result = x * in_cm;
	}
	else if (units == "ft") {
		result = x * ft_cm;
	}
	else if (units == "cm") {
		result = x ;
	}
	return result;
}

void drill7() {
	// add unit conversion
	char end_char = get_end_char();
	string units;
	double x, min, max, converted_x;
	min = 100000000000000000000000000000.0; // should be max of double
	max = -min;

	while (end_char != '|') {
		cout << "\nEnter double value with units [m, cm, ft, in]:\n\t";
		cin >> x >> units;
		cout << "\nYou entered: " << x << units;
		converted_x = convert(x, units);
		cout << "\nIt is: " << converted_x << " cm";

		if (converted_x > max) {
			max = converted_x;
			cout << "\nIt is the greatest value so far.\n";
		}
		if (converted_x < min) {
			min = converted_x;
			cout << "\nIt is the lowest value so far.\n";
		}

		end_char = get_end_char();
	}

	cout << "\nQuiting...\n\n";
	keep_window_open();
}

bool check_units(string units) {
	if (units == "m") {
		return true;
	}
	else if (units == "in") {
		return true;
	}
	else if (units == "ft") {
		return true;
	}
	else if (units == "cm") {
		return true;
	}
	return false;
}

void drill8() {
	// reject wrong units
	char end_char = get_end_char();
	string units;
	double x, min, max, converted_x;
	min = 100000000000000000000000000000.0; // should be max of double
	max = -min;

	while (end_char != '|') {
		cout << "\nEnter double value with units [m, cm, ft, in]:\n\t";
		cin >> x >> units;
		if (check_units(units)) {
			cout << "\nYou entered: " << x << " " << units;
			converted_x = convert(x, units);
			cout << "\nIt is: " << converted_x << " cm";

			if (converted_x > max) {
				max = converted_x;
				cout << "\nIt is the greatest value so far.\n";
			}
			if (converted_x < min) {
				min = converted_x;
				cout << "\nIt is the lowest value so far.\n";
			}
		}
		else {
			cout << "\nWrong units!!! Try again.";
		}


		end_char = get_end_char();
	}

	cout << "\nQuiting...\n\n";
	keep_window_open();
}

double convert_to_meters(double x, string units) {
	constexpr double cm_m = 1.0 / 100.0;
	constexpr double in_m = 2.54 * cm_m;
	constexpr double ft_in = 12;
	constexpr double ft_m = ft_in * in_m;
	double result = 0;

	if (units == "m") {
		result = x;
	}
	else if (units == "in") {
		result = x * in_m;
	}
	else if (units == "ft") {
		result = x * ft_m;
	}
	else if (units == "cm") {
		result = x * cm_m;
	}
	return result;
}

void drill9() {
	// keep sum and print stats at the end
	char end_char = get_end_char();
	string units;
	int numbers_amount = 0;
	double x, min, max, sum, converted_x;
	sum = 0.0;
	min = 100000000000000000000000000000.0; // should be max of double
	max = -min;

	while (end_char != '|') {
		cout << "\nEnter double value with units [m, cm, ft, in]:\n\t";
		cin >> x >> units;
		if (check_units(units)) {
			++numbers_amount;
			cout << "\nYou entered: " << x << " " << units;
			converted_x = convert_to_meters(x, units);
			sum += converted_x;

			cout << "\nIt is: " << converted_x << " m";

			if (converted_x > max) {
				max = converted_x;
				cout << "\nIt is the greatest value so far.\n";
			}
			if (converted_x < min) {
				min = converted_x;
				cout << "\nIt is the lowest value so far.\n";
			}
		}
		else {
			cout << "\nWrong units!!! Try again.";
		}


		end_char = get_end_char();
	}
	cout << "\nMax: " << max << " m.";
	cout << "\nMin: " << min << " m.";
	cout << "\nSum: " << sum << " m.";


	cout << "\nQuiting...\n\n";
	keep_window_open();
}

void print_vector(vector <double> x) {
	for (double value : x) {
		cout << "\n\t" << value;
	}
}

void drill10() {
	// add inputs to vector
	char end_char = get_end_char();
	string units;
	int numbers_amount = 0;
	double x, min, max, sum, converted_x;
	vector <double> input_x;
	sum = 0.0;
	min = 100000000000000000000000000000.0; // should be max of double
	max = -min;

	while (end_char != '|') {
		cout << "\nEnter double value with units [m, cm, ft, in]:\n\t";
		cin >> x >> units;
		if (check_units(units)) {
			++numbers_amount;
			cout << "\nYou entered: " << x << " " << units;
			converted_x = convert_to_meters(x, units);
			input_x.push_back(converted_x);
			sum += converted_x;

			cout << "\nIt is: " << converted_x << " m";

			if (converted_x > max) {
				max = converted_x;
				cout << "\nIt is the greatest value so far.\n";
			}
			if (converted_x < min) {
				min = converted_x;
				cout << "\nIt is the lowest value so far.\n";
			}
		}
		else {
			cout << "\nWrong units!!! Try again.";
		}


		end_char = get_end_char();
	}
	cout << "\nMax: " << max << " m.";
	cout << "\nMin: " << min << " m.";
	cout << "\nSum: " << sum << " m.";
	print_vector(input_x);

	cout << "\nQuiting...\n\n";
	keep_window_open();
}

void drill11() {
	// add sorting in vector
	char end_char = get_end_char();
	string units;
	int numbers_amount = 0;
	double x, min, max, sum, converted_x;
	vector <double> input_x;
	sum = 0.0;
	min = 100000000000000000000000000000.0; // should be max of double
	max = -min;

	while (end_char != '|') {
		cout << "\nEnter double value with units [m, cm, ft, in]:\n\t";
		cin >> x >> units;
		if (check_units(units)) {
			++numbers_amount;
			cout << "\nYou entered: " << x << " " << units;
			converted_x = convert_to_meters(x, units);
			input_x.push_back(converted_x);
			sum += converted_x;

			cout << "\nIt is: " << converted_x << " m";

			if (converted_x > max) {
				max = converted_x;
				cout << "\nIt is the greatest value so far.\n";
			}
			if (converted_x < min) {
				min = converted_x;
				cout << "\nIt is the lowest value so far.\n";
			}
		}
		else {
			cout << "\nWrong units!!! Try again.";
		}


		end_char = get_end_char();
	}
	cout << "\nMax: " << max << " m.";
	cout << "\nMin: " << min << " m.";
	cout << "\nSum: " << sum << " m.";
	sort(input_x);
	print_vector(input_x);

	cout << "\nQuiting...\n\n";
	keep_window_open();
}
