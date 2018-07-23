#include "..\std_lib_facilities.h"
#include "drill.h"

void drill1() {
	// Start writing letter to friend
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ",\n";
	keep_window_open();
}

void drill2() {
	// Add introductory line
	cout << "Enter the name of the person you want to write to:\n";
	string first_name="Test";
	cin >> first_name;
	cout << "\n\nDear " << first_name << ",\n\n";
	cout << "	How are you? I miss you so much!\n";

	keep_window_open();
}

void drill3() {
	// Ask about your friend
	cout << "Enter the name of the person you want to write to and your friend:\n";
	string first_name = "Test";
	string friend_name = "Mike";
	cin >> first_name >> friend_name;
	cout << "\n\nDear " << first_name << ",\n\n";
	cout << "	How are you? I miss you so much!\n";
	cout << "Have you seen " << friend_name << " lately?\n";

	cout << "\n\n";

	keep_window_open();
}

void drill4() {
	// Use friend gender with if statement
	cout << "Enter the name of the person you want to write to and your friend with sex ('f' or 'm'):\n";
	string first_name = "John";
	string friend_name = "Mike";
	char friend_sex = 0;

	cin >> first_name >> friend_name >> friend_sex;

	cout << "\n\nDear " << first_name << ",\n\n";
	cout << "	How are you? I miss you so much!\n";
	cout << "Have you seen " << friend_name << " lately? ";
	if (friend_sex == 'm') {
		cout << "If you see " << friend_name << " please ask him to call me.";
	}
	if (friend_sex == 'f') {
		cout << "If you see " << friend_name << " please ask her to call me.";
	}
	cout << "\n\n";

	keep_window_open();
}

void drill5() {
	// add age and simple error handling
	cout << "Enter the name of the person you want to write to with his or her age and your friend with sex ('f' or 'm'):\n";
	string first_name = "John";
	int recipient_age = 0;
	string friend_name = "Mike";
	char friend_sex = 0;

	cin >> first_name >> recipient_age >> friend_name >> friend_sex;

	cout << "\n\nDear " << first_name << ",\n\n";
	cout << "	How are you? I miss you so much!\n";
	cout << "Have you seen " << friend_name << " lately? ";
	if (friend_sex == 'm') {
		cout << "If you see " << friend_name << " please ask him to call me.";
	}
	if (friend_sex == 'f') {
		cout << "If you see " << friend_name << " please ask her to call me.";
	}

	if ((recipient_age <= 0) || (recipient_age >= 110)) {
		simple_error("\nyou're kidding!");
	}
	cout << "\nI hear you just had birthday and you are " << recipient_age << " years old.";



	cout << "\n\n\n";

	keep_window_open();
}

void drill6() {
	// add int operations (i++) and more if conditions
	cout << "Enter the name of the person you want to write to with his or her age and your friend with sex ('f' or 'm'):\n";
	string first_name = "John";
	int recipient_age = 0;
	string friend_name = "Mike";
	char friend_sex = 0;

	cin >> first_name >> recipient_age >> friend_name >> friend_sex;

	cout << "\n\nDear " << first_name << ",\n\n";
	cout << "	How are you? I miss you so much!\n";
	cout << "Have you seen " << friend_name << " lately? ";
	if (friend_sex == 'm') {
		cout << "If you see " << friend_name << " please ask him to call me.";
	}
	if (friend_sex == 'f') {
		cout << "If you see " << friend_name << " please ask her to call me.";
	}

	if ((recipient_age <= 0) || (recipient_age >= 110)) {
		simple_error("\nyou're kidding!");
	}
	cout << "\nI hear you just had birthday and you are " << recipient_age << " years old.";

	if (recipient_age < 12) {
		cout << "\nNext year you will be " << recipient_age + 1 << ".";
	}

	if (recipient_age == 17) {
		cout << "\nNext year you will be able to vote.";
	}

	if (recipient_age > 70) {
		cout << "\nI hope you are enjoying retirement.";
	}

	cout << "\n\n\n";

	keep_window_open();
}

void drill7() {
	// add signature
	cout << "Enter the name of the person you want to write to with his or her age and your friend with sex ('f' or 'm'):\n";
	string first_name = "John";
	int recipient_age = 0;
	string friend_name = "Mike";
	char friend_sex = 0;

	cin >> first_name >> recipient_age >> friend_name >> friend_sex;

	cout << "\n\nDear " << first_name << ",\n\n";
	cout << "	How are you? I miss you so much!\n";
	cout << "Have you seen " << friend_name << " lately? ";
	if (friend_sex == 'm') {
		cout << "If you see " << friend_name << " please ask him to call me.";
	}
	if (friend_sex == 'f') {
		cout << "If you see " << friend_name << " please ask her to call me.";
	}

	if ((recipient_age <= 0) || (recipient_age >= 110)) {
		simple_error("\nyou're kidding!");
	}
	cout << "\nI hear you just had birthday and you are " << recipient_age << " years old.";

	if (recipient_age < 12) {
		cout << "\nNext year you will be " << recipient_age + 1 << ".";
	}

	if (recipient_age == 17) {
		cout << "\nNext year you will be able to vote.";
	}

	if (recipient_age > 70) {
		cout << "\nI hope you are enjoying retirement.";
	}

	cout << "\n\n\nYour sincerely, Tom";

	cout << "\n\n\n";

	keep_window_open();
}