#include "my.h"
#include <iostream>
#include "../std_lib_facilities.h"

namespace X {
	int var;
	void print() {
		cout << "foo is: " << var << "\n";
	}

	void print(int x) {
		cout << "int is: " << x << "\n";
	}

}

namespace Y {
	int var;
	void print() {
		cout << "foo is: " << var << "\n";
	}

	void print(int x) {
		cout << "int is: " << x << "\n";
	}

}


namespace Z {
	int var;
	void print() {
		cout << "foo is: " << var << "\n";
	}

	void print(int x) {
		cout << "int is: " << x << "\n";
	}

}


void swap_v(int value1, int value2) {
	int temp;
	temp = value1;
	value1 = value2;
	value2 = temp;
}

void swap_r(int& value1, int& value2) {
	int temp;
	temp = value1;
	value1 = value2;
	value2 = temp;
}

//void swap_cr(const int& value1, const int& value2) {
//	int temp;
//	temp = value1;
//	value1 = value2;
//	value2 = temp;
//}


//int main()
//{
//	X::var = 7;
//	X::print();                  // print X’s var
//	using namespace Y;
//	var = 9;
//	print();                       // print Y’s var
//	{        
//		using Z::var;
//		using Z::print;
//		var = 11;
//		print();           // print Z’s var
//	}
//	print();                      // print Y’s var
//	X::print();                // print X’s var
//
//	{ char cc; std::cin >> cc; }
//}



//int foo;
//int main() {
//	//foo = 7;
//	//print_foo();
//	//print(99);
//	int x = 7;
//	int y = 9;
//	std::cout << x << " " << y;
//	swap_r(x, y);                      // replace ? by v, r, or cr
//	std::cout << x << " " << y;
//
//	swap_v(7, 9);
//	const int cx = 7;
//	const int cy = 9;
//	//swap_cr(cx, cy);
//
//	{ char cc; std::cin >> cc; }
//
//	return 0;
//}