#include "../std_lib_facilities.h"
#include "drill.h"

// simple Date (too simple?)
struct Date941 {
	int y;       // year
	int m;     // month in year
	int d;      // day of month
};

void init_day(Date941& dd, int y, int m, int d)
{
	if (!(y > 1900 && y < 2020))
		error("Wrong year!");

	if (!(m > 0 && m < 13))
		error("Wrong month!");

	if (!(d > 0 && d < 32))
		error("Wrong day!");

	dd.y = y;
	dd.m = m;
	dd.d = d;
}

void add_day(Date941& dd, int n)
{
	for (int i = 0; i < n; ++i) {
		if (dd.d == 31) {
			dd.d = 1;
			if (dd.m == 12) {
				++dd.y;
				dd.m = 1;
			}
			else
				++dd.m;
		}
		else
			++dd.d;
	}



}

ostream& operator<<(ostream& os, const Date941& d)
{
	return os << '(' << d.y
		<< ',' << d.m
		<< ',' << d.d << ')';
}

void check_example_drill1(int d, int m, int y) {
	Date941 test_date;
	try
	{
		init_day(test_date, y, m, d);
		cout << test_date;
		cout << "\n";
		cout << "after 1 incrementation"  << "\n";
		add_day(test_date, 1);
		cout << test_date;
		cout << "\n";
		cout << "after 31 next incrementation" << "\n";
		add_day(test_date, 31);
		cout << test_date;
		cout << "\n";
		cout << "after 372 next incrementation" << "\n";
		add_day(test_date, 372);
		cout << test_date;
		cout << "\n";
	}
	catch (exception& e)
	{
		cout << e.what() << '\n';
	}



}

void drill1() {


	cout << "check_example_drill1(25, 6, 1986);\n";
	check_example_drill1(25, 6, 1986);

	cout << "check_example_drill1(0, 6, 1986);\n";
	check_example_drill1(0, 6, 1986);

	cout << "check_example_drill1(31, 6, 1986);\n";
	check_example_drill1(31, 6, 1986);

	cout << "check_example_drill1(25, 0, 1986);\n";
	check_example_drill1(25, 0, 1986);

	cout << "check_example_drill1(25, 12, 1986);\n";
	check_example_drill1(25, 12, 1986);

	cout << "check_example_drill1(25, 13, 1986);\n";
	check_example_drill1(25, 13, 1986);

	cout << "check_example_drill1(25, 6, 2100);\n";
	check_example_drill1(25, 6, 2100);

	cout << "check_example_drill1(25, 6, 21);\n";
	check_example_drill1(25, 6, 21);




	cout << "\n\n";
	keep_window_open();

}

struct Date942 {
		int y, m, d;                            // year, month, day
		Date942(int y, int m, int d);      // check for valid date and initialize
		void add_day(int n);           // increase the Date by n days
};

Date942::Date942(int yy, int mm, int dd) {
	if (!(yy > 1900 && yy < 2020))
		error("Wrong year!");

	if (!(mm > 0 && mm < 13))
		error("Wrong month!");

	if (!(dd > 0 && dd < 32))
		error("Wrong day!");

	y = yy;
	m = mm;
	d = dd;
}

void Date942::add_day(int n)
{
	for (int i = 0; i < n; ++i) {
		if (d == 31) {
			d = 1;
			if (m == 12) {
				++y;
				m = 1;
			}
			else
				++m;
		}
		else
			++d;
	}
}

ostream& operator<<(ostream& os, const Date942& d)
{
	return os << '(' << d.y
		<< ',' << d.m
		<< ',' << d.d << ')';
}

void check_example_drill2(int d, int m, int y) {
	try
	{
		Date942 test_date(y, m, d);
		cout << test_date;
		cout << "\n";
		cout << "after 1 incrementation" << "\n";
		test_date.add_day(1);
		cout << test_date;
		cout << "\n";
		cout << "after 31 next incrementation" << "\n";
		test_date.add_day(31);
		cout << test_date;
		cout << "\n";
		cout << "after 372 next incrementation" << "\n";
		test_date.add_day(372);
		cout << test_date;
		cout << "\n";
	}
	catch (exception& e)
	{
		cout << e.what() << '\n';
	}
}

void drill2() {

	cout << "check_example_drill2(25, 6, 1986);\n";
	check_example_drill2(25, 6, 1986);

	cout << "check_example_drill2(0, 6, 1986);\n";
	check_example_drill2(0, 6, 1986);

	cout << "check_example_drill2(31, 6, 1986);\n";
	check_example_drill2(31, 6, 1986);

	cout << "check_example_drill2(25, 0, 1986);\n";
	check_example_drill2(25, 0, 1986);

	cout << "check_example_drill2(25, 12, 1986);\n";
	check_example_drill2(25, 12, 1986);

	cout << "check_example_drill2(25, 13, 1986);\n";
	check_example_drill2(25, 13, 1986);

	cout << "check_example_drill2(25, 6, 2100);\n";
	check_example_drill2(25, 6, 2100);

	cout << "check_example_drill2(25, 6, 21);\n";
	check_example_drill2(25, 6, 21);

	cout << "\n\n";
	keep_window_open();


}

class Date943 {
		int y, m, d;                                          // year, month, day
	public:
		Date943(int yy, int mm, int dd);                   // check for valid date and initialize
		void add_day(int n);                        // increase the Date by n days
		int month() { return m; }
		int day() { return d; }
		int year() { return y; }
};

Date943::Date943(int yy, int mm, int dd) {
	if (!(yy > 1900 && yy < 2020))
		error("Wrong year!");

	if (!(mm > 0 && mm < 13))
		error("Wrong month!");

	if (!(dd > 0 && dd < 32))
		error("Wrong day!");

	y = yy;
	m = mm;
	d = dd;
}

void Date943::add_day(int n)
{
	for (int i = 0; i < n; ++i) {
		if (d == 31) {
			d = 1;
			if (m == 12) {
				++y;
				m = 1;
			}
			else
				++m;
		}
		else
			++d;
	}
}

ostream& operator<<(ostream& os, Date943& d)
{
	return os << '(' << d.year()
		<< ',' << d.month()
		<< ',' << d.day() << ')';
}

void check_example_drill3(int d, int m, int y) {
	try
	{
		Date943 test_date(y, m, d);
		cout << test_date;
		cout << "\n";
		cout << "after 1 incrementation" << "\n";
		test_date.add_day(1);
		cout << test_date;
		cout << "\n";
		cout << "after 31 next incrementation" << "\n";
		test_date.add_day(31);
		cout << test_date;
		cout << "\n";
		cout << "after 372 next incrementation" << "\n";
		test_date.add_day(372);
		cout << test_date;
		cout << "\n";
	}
	catch (exception& e)
	{
		cout << e.what() << '\n';
	}
}

void drill3() {

	cout << "check_example_drill3(25, 6, 1986);\n";
	check_example_drill3(25, 6, 1986);

	cout << "check_example_drill3(0, 6, 1986);\n";
	check_example_drill3(0, 6, 1986);

	cout << "check_example_drill3(31, 6, 1986);\n";
	check_example_drill3(31, 6, 1986);

	cout << "check_example_drill3(25, 0, 1986);\n";
	check_example_drill3(25, 0, 1986);

	cout << "check_example_drill3(25, 12, 1986);\n";
	check_example_drill3(25, 12, 1986);

	cout << "check_example_drill3(25, 13, 1986);\n";
	check_example_drill3(25, 13, 1986);

	cout << "check_example_drill3(25, 6, 2100);\n";
	check_example_drill3(25, 6, 2100);

	cout << "check_example_drill3(25, 6, 21);\n";
	check_example_drill3(25, 6, 21);

	cout << "\n\n";
	keep_window_open();


}

enum class Month {
	jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

//class Year {                                                         // year in [min:max) range
//		static const int min = 1800;
//		static const int max = 2200;
//	public:
//		class Invalid { };
//		Year(int x) : y{ x }{ if (x<min || max <= x) throw Invalid{}; }
//		int year() { return y; }
//	private:
//		int y;
//};



class Date971 {
		int d;                                          // year, month, day
		Month m;
		int y;

	public:
		Date971(int yy, Month mm, int dd);
		Date971(int yy, int mm, int dd);
		void add_day(int n);                        // increase the Date by n days
		int month() { return (int) m; }
		int day() { return d; }
		int year() { return y; }
};

Date971::Date971(int yy, Month mm, int dd) {
	if (!(dd > 0 && dd < 32))
		error("Wrong day!");
	y = yy;
	m = mm;
	d = dd;
}

Date971::Date971(int yy, int mm, int dd) {
	if (!(dd > 0 && dd < 32))
		error("Wrong day!");
	y = yy;
	m = Month(mm);
	d = dd;
}

void Date971::add_day(int n)
{
	for (int i = 0; i < n; ++i) {
		if (d == 31) {
			d = 1;
			if (m == Month(12)) {
				++y;
				m = Month(1);
			}
			else
				m = Month(month() + 1);
		}
		else
			++d;
	}
}


ostream& operator<<(ostream& os, Date971& d)
{
	return os << '(' << d.year()
		<< ',' << d.month()
		<< ',' << d.day() << ')';
}

void check_example_drill4(int d, Month m, int y) {
	try
	{
		Date971 test_date(y, m, d);
		cout << test_date;
		cout << "\n";
		cout << "after 1 incrementation" << "\n";
		test_date.add_day(1);
		cout << test_date;
		cout << "\n";
		cout << "after 31 next incrementation" << "\n";
		test_date.add_day(31);
		cout << test_date;
		cout << "\n";
		cout << "after 372 next incrementation" << "\n";
		test_date.add_day(372);
		cout << test_date;
		cout << "\n";
	}
	catch (exception& e)
	{
		cout << e.what() << '\n';
	}
}

void check_example_drill4(int d, int m, int y) {
	try
	{
		Date971 test_date(y, m, d);
		cout << test_date;
		cout << "\n";
		cout << "after 1 incrementation" << "\n";
		test_date.add_day(1);
		cout << test_date;
		cout << "\n";
		cout << "after 31 next incrementation" << "\n";
		test_date.add_day(31);
		cout << test_date;
		cout << "\n";
		cout << "after 372 next incrementation" << "\n";
		test_date.add_day(372);
		cout << test_date;
		cout << "\n";
	}
	catch (exception& e)
	{
		cout << e.what() << '\n';
	}
}

void drill4() {

	cout << "check_example_drill4(25, Month::jun, 1986);\n";
	check_example_drill4(25, Month::jun, 1986);
	cout << "check_example_drill4(25, 1, 1986);\n";
	check_example_drill4(25, 1, 1986);



	cout << "\n\n";
	keep_window_open();
}

class Date972 {
	int d;                                          // year, month, day
	Month m;
	int y;

public:
	Date972(int yy, Month mm, int dd);
	Date972(int yy, int mm, int dd);
	void add_day(int n);                        // increase the Date by n days
	int month() const 
		{ return (int)m; }
	int day() const
		{ return d; }
	int year() const
		{ return y; }
};

Date972::Date972(int yy, Month mm, int dd) {
	if (!(dd > 0 && dd < 32))
		error("Wrong day!");
	y = yy;
	m = mm;
	d = dd;
}

Date972::Date972(int yy, int mm, int dd) {
	if (!(dd > 0 && dd < 32))
		error("Wrong day!");
	y = yy;
	m = Month(mm);
	d = dd;
}

void Date972::add_day(int n)
{
	for (int i = 0; i < n; ++i) {
		if (d == 31) {
			d = 1;
			if (m == Month(12)) {
				++y;
				m = Month(1);
			}
			else
				m = Month(month() + 1);
		}
		else
			++d;
	}
}


ostream& operator<<(ostream& os, Date972& d)
{
	return os << '(' << d.year()
		<< ',' << d.month()
		<< ',' << d.day() << ')';
}

void check_example_drill5(int d, Month m, int y) {
	try
	{
		Date972 test_date(y, m, d);
		cout << test_date;
		cout << "\n";
		cout << "after 1 incrementation" << "\n";
		test_date.add_day(1);
		cout << test_date;
		cout << "\n";
		cout << "after 31 next incrementation" << "\n";
		test_date.add_day(31);
		cout << test_date;
		cout << "\n";
		cout << "after 372 next incrementation" << "\n";
		test_date.add_day(372);
		cout << test_date;
		cout << "\n";
	}
	catch (exception& e)
	{
		cout << e.what() << '\n';
	}
}

void check_example_drill5(int d, int m, int y) {
	try
	{
		Date972 test_date(y, m, d);
		cout << test_date;
		cout << "\n";
		cout << "after 1 incrementation" << "\n";
		test_date.add_day(1);
		cout << test_date;
		cout << "\n";
		cout << "after 31 next incrementation" << "\n";
		test_date.add_day(31);
		cout << test_date;
		cout << "\n";
		cout << "after 372 next incrementation" << "\n";
		test_date.add_day(372);
		cout << test_date;
		cout << "\n";
	}
	catch (exception& e)
	{
		cout << e.what() << '\n';
	}
}

void drill5() {

	cout << "check_example_drill4(25, Month::jun, 1986);\n";
	check_example_drill5(25, Month::jun, 1986);
	cout << "check_example_drill4(25, 1, 1986);\n";
	check_example_drill5(25, 1, 1986);



	cout << "\n\n";
	keep_window_open();
}