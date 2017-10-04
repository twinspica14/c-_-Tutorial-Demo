#include <iostream> // it's input output stream
#include <stdlib.h>
#include<string>
// namespace is where our function is stored and other things conncetd to programmin
// two programmers can have same function stored in different name space, so it's important to 
// mention from where we are taking this function

// since it's hectic to use std :: always, we mention namespace and library name in begining
//#define lol 78; we don't use define in c++, but const
using namespace std;
const string jk = "jokinh"; // we can use this instead od #define
int main()
{
	//std::cout << "Hello World!"; //console output, the function is from standard name space
	//std::cin.get();

	int	a = 5; // int declaration allocates 4 bytes of memory, now wehn declaring address, it won't clear the initial data found in that part, but will replace it with new data
	cout << &a << endl;//& is known as ampersand, which gives address of the variable
	cout << a << endl;// it's very important to mention endl, if any other function needs to be executed thereafter


					  // other int variable
	short int b = 5; // it takes 2 bytes instead of 4 bytes
	float c = 5.12;//4 ytes upto 30 zero
	double d = 5.1233433;//8 bytes, 308 zero

						 // char variables
	char ee;
	ee = 'l'; //char only takes character value, not string, and char takes only single quote
	cout << ee << "it's char value" << endl;

	// we have string variable for strings
	string em = "lol, hahah";// while using string always include string library
	cout << em << endl << "address" << &em << endl;

	// we can concatante strings using + 

	// variable bool, which can store value either true and false

	//unsigned is only positive numbers and the total memory of intake number doubles
	unsigned short we = 34553;

	// if we don't want number to be chnaged we usually write const before the variable declaration

	const string hola = "nope";
	cout << jk << endl;

	// we see to take input from console
	string name, age, loll;
	cout << "please enter your name" << endl;
	cin >> name;
	cout << "please can you enter your age" << endl;
	cin >> age;
	cout << name << "  chutiya hai tu bhosdike  " << age << "   waste kiya" << endl;
	cin >> loll;







































































	cin.get();



}