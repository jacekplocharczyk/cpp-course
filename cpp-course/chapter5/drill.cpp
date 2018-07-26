#include "../std_lib_facilities.h"
#include "drill.h"

void drill1() {
	//correct errors
	try {
		//my code here
		//Cout << "Success!\n"; //Output: 'Cout': undeclared identifier	chapter5
		//cout << "Success!\n";

		//cout << "Success!\n;  //Output: missing closing quote	
		//cout << "Success!\n";

		//cout << "Success" << !\n"  //Output: missing start quote and semicolon
		//cout << "Success" << "!\n";

		//cout << success << '\n';  //Output: no such variable success
		//cout << "success" << '\n';

		//string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";  //Output: wrong type: res is not an int
		//int res = 7;
		//vector<int> v(10);
		//v[5] = res; 
		//cout << "Success!\n";

		//vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";  //Output: v is not a function () -> [] and should be == instead !=
		//vector<int> v(10);
		//v[5] = 7;
		//if (v[5] == 7)
		//	cout << "Success!\n";

		//if (cond) cout << "Success!\n"; else cout << "Fail!\n";  //Output: no such variable cond
		//bool cond = true;
		//if (cond) 
		//	cout << "Success!\n";
		//else 
		//	cout << "Fail!\n";

		//bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";  //Output: c is false
		//bool c = true;
		//if (c) 
		//	cout << "Success!\n";
		//else 
		//	cout << "Fail!\n";

		//string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";  //Output: boo instead bool and < instead >
		//string s = "ape";
		//bool c = "fool" > s;
		//if (c) 
		//	cout << "Success!\n";

		//string s = "ape"; if (s=="fool") cout << "Success!\n"; //Output: s should be "fool" not "ape"
		//string s = "fool";
		//if (s == "fool")
		//	cout << "Success!\n";

		//string s = "ape"; if (s=="fool") cout < "Success!\n";  //Output: one < instead << and s should be "fool" not "ape"
		//string s = "fool";
		//if (s == "fool") 
		//	cout << "Success!\n";

		//string s = "ape"; if (s+"fool") cout < "Success!\n";  //Output: + to > and one < instead << and
		//string s = "ape";
		//if (bool(s < "fool"))
		//	cout << "Success!\n";

		//vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n"; //Output: 0 instead of i
		//vector<char> v(5);
		//for (int i = 0; i<v.size(); ++i);
		//cout << "Success!\n";

		//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";  //Output: NO ERRORS	
		//vector<char> v(5);
		//for (int i = 0; i <= v.size(); ++i);
		//cout << "Success!\n";

		//string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];  //Output: 6 instead 9
		//string s = "Success!\n";
		//for (int i = 0; i<9; ++i) 
		//	cout << s[i];

		//if (true) then cout << "Success!\n"; else cout << "Fail!\n";  //Output: then is redundant
		//if (true)
		//	cout << "Success!\n";
		//else cout << "Fail!\n";

		// int x = 2000; char c = x; if (c==2000) cout << "Success!\n";  //Output: c is char not int
		//int x = 2000;
		//int c = x;
		//if (c == 2000)
		//	cout << "Success!\n";

		//string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];  //Output: NO ERRORS	
		//string s = "Success!\n";
		//for (int i = 0; i<11; ++i) 
		//	cout << s[i];

		//vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";  //Output: vector has no type
		//vector <int> v(5);
		//for (int i = 0; i <= v.size(); ++i);
		//cout << "Success!\n";

		//int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";  //Output: wrong variable is incrementing
		//int i = 0;
		//int j = 9;
		//while (i<10) 
		//	++i;
		//if (j<i) 
		//	cout << "Success!\n";

		//int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";  //Output: division by 0 and int division
		//int x = 2;
		//double d = 5.0 / (x - 2);
		//if (d == 5.0 / (x - 2))
		//	cout << "Success!\n";

		//string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i]; //Output: string without <char> and out of range 
		//string s = "Success!\n";
		//for (int i = 0; i < 10; ++i) 
		//	cout << s[i];

		//int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";  //Output: no j variable and wrong incrementation
		//int i = 0;
		//int j = 5;
		//while (i<10)
		//	++i;
		//if (j<i) cout << "Success!\n";	

		//int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";  //Output: NO ERRORS	
		//int x = 4;
		//double d = 5 / (x-2);
		//if (d = 2 * x + 0.5) 
		//	cout << "Success!\n";



		keep_window_open();
	}
	catch (exception &e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
	}
	catch (...) {
		cerr << "Ooops: unknown error!\n";
		keep_window_open();
	}





}