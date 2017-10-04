#include <iostream>
#include <string>

int main() {
	std::string lol[] = { "vhv" };
	char c[16] = "khkkjbmjbkjbjk";
	int k[8] = { 1,5,6,7,3,4,5,3 };
	//std::cout << c[3] << std::endl;
	//std::cout << lol[3].length() << std::endl;
	/* important thing note is that actual length is always lenghth + 1, because while saving it's saved as " \0" which saves it as strings and identifies
	string is by default list, not array*/

	//char a = lol[1]; // since length is l + 1, it won't throw error for 10'th term, but would for any other more than that

//	std::cout << *(lol + 2) << std::endl;
	char *p;
	p = &c[0];

		std::cout << p[4]  << std::endl;
		std::cout << *(p+4) << std::endl;
		char l[] = "thdhdtgng";

		std::cout << l << std::endl;
		char *p1 = l;
		//*p = "uyiukuk";
	//	char * p2 = lol->c_str;// this should return const, string to charcter
		std::string km = "1";
		strcpy_s(l, "kkkk");
		l[0] = 'n';
		int b = std::stoi(km);
		std::cout << b << std::endl;
		std::cout << l << std::endl;
		b = 9;

		// important.....


		char *d = "kuygkj";
		d = "lol";
		std::cout << d << std::endl;

		int *kkl = &b;
		
		std::cout << "this gives addfress" << kkl << std::endl;
		std::cout << "this gives value" << *kkl << std::endl;

		*kkl = 228;

		std::cout << "this gives addfress " << kkl << std::endl;
		std::cout << "this gives different value" << *kkl << std::endl;



	system("pause");
}

/*  -------------- Important ------------------------------ 
char c[6] = "jhfcju"
now, we define a charcter....
now important thing too notice here is where we define char * pointer 
pointer = &c
pointer won't point to address of c, but to values of c, where it's address ends.
when c[n] = "always have n-1 chaarc bucz of \0 null character"

pointers cannot be used to change value at char address bcuz it's const defined


string to integer by std::stoi

strcpy_s(,) we use to assign new value to char, bucz aanything is interrupted as string by char
or another way is char[0] = "l";




 char ptr are not like int always remember
 we can define value to char ptr unlike int where address is must
 this value is stored at allocated space somewhere
 we can't change it's value since it's constant, but we change its memore address
 by assiging new value

char *d = "kuygkj";
d = "lol";
std::cout << d << std::endl;




*/