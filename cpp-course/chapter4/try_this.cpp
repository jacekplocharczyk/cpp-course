#include "..\std_lib_facilities.h"
#include "try_this.h"

void try_this1() {
	// convert currencies using if else statements
	constexpr double yen_per_dollar = 111.07;
	constexpr double dollar_per_yen = 1.0 / yen_per_dollar;
	constexpr double dollar_per_euro = 1.1704;
	constexpr double dollar_per_pound = 1.3125;

	cout << "Please enter price followed by original currency ('e' - EURO, 'y' - YEN, 'p' - GBP)\n";
	double price = 0.0;
	char original_currency = 'a';

	cin >> price >> original_currency;
	
	if (original_currency == 'e') {
		cout << "\nPrice " << price << " in euro is equal to " << price * dollar_per_euro << " dollars.";		
	}
	else if (original_currency == 'p') {
		cout << "\nPrice " << price << " in GBP is equal to " << price * dollar_per_pound << " dollars.";
	}
	else if (original_currency == 'y') {
		cout << "\nPrice " << price << " in yens is equal to " << price * dollar_per_yen << " dollars.";
	}
	else {
		cout << "\nWrong currencies!";
	}

	cout << "\n\n";
	keep_window_open();
}

void try_this2() {
	// convert currencies using switch statements

	constexpr double yen_per_dollar = 111.07;
	constexpr double dollar_per_yen = 1.0 / yen_per_dollar;
	constexpr double dollar_per_euro = 1.1704;
	constexpr double dollar_per_pound = 1.3125;

	cout << "Please enter price followed by original currency ('e' - EURO, 'y' - YEN, 'p' - GBP)\n";
	double price = 0.0;
	char original_currency = 'a';

	cin >> price >> original_currency;

	switch (original_currency) {
	case 'e':
		cout << "\nPrice " << price << " in euro is equal to " << price * dollar_per_euro << " dollars.";
		break;
	case 'y':
		cout << "\nPrice " << price << " in yens is equal to " << price * dollar_per_yen << " dollars.";
		break;
	case 'p':
		cout << "\nPrice " << price << " in GBP is equal to " << price * dollar_per_pound << " dollars.";
		break;
	default:
		cout << "\nWrong currency!";

	}


	cout << "\n\n";
	keep_window_open();
}

void try_this3() {
	// print chars using while loop
	char char_to_print = 'a';
	while (char_to_print != 'z' + 1) {
		cout << "\n\tchar == " << char_to_print << "\t" << int(char_to_print);
		++char_to_print;
	}

	cout << "\n\n";
	keep_window_open();
}

void try_this4() {
	// print chars using for loop

	for (char char_to_print = '0'; char_to_print <= 'Z'; ++char_to_print) {
		if (int(char_to_print) >= 58 && int(char_to_print) <= 64) {
			//pass
		}
		else {
			cout << "\n\tchar == " << char(char_to_print) << "\t" << int(char_to_print);
		}
	}

	cout << "\n\n";
	keep_window_open();
}

int square(int x){
	int result = 0;
	for (int i = 0; i < x; ++i) {
		result += x;
	}
	return result;
}

void try_this5() {
	//create square function
	cout << "\nSquare of 5 is " << square(5);
	cout << "\nSquare of -5 is " << square(-5); // not working for negative numbers because of loop in square function - need absolute value;
	cout << "\nSquare of 100 is " << square(100);

	cout << "\n\n";
	keep_window_open();
}

bool bad_word_check(string word, vector <string> bad_words) {
	for (string bad_word : bad_words) {
		if (word == bad_word) {
			return true;
		}
	}
	return false;
}

void try_this6() {
	// BEEP bad words from input
	vector <string> input_words;
	vector <string> bad_words{"placek", "bad_word" };

	for (string word; cin >> word; ) {
		input_words.push_back(word);
	}

	for (int i = 0; i < input_words.size(); ++i) {
		bool is_a_bad_word = bad_word_check(input_words[i], bad_words);
		if (is_a_bad_word) {
			cout << "BEEP ";
		}
		else {
			cout << input_words[i] << " ";
		}

	}



	cout << "\n\n";
	keep_window_open();
}