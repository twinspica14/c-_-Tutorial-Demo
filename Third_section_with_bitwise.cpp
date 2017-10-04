//#include <iostream>
//#include <string>
//
////using namespace std;
//#define lol "hgub"
//int main() {
//	// this section is about operators +,-,*,/,%
//	float a ;
//	a = 1. / 10.; //modulo should only have integers, no float point
//	std::cout << a++ << endl;//displays first real value and then increases the value by 1, which is displayed in 2nd calling.
//	std::cout << a << endl;
//	std::cout << --a << endl;//displays decreased value, pre decrementation, similarly a-- is post decrementation.
//	std::cout << a << endl;
//	std::printf("lol, print",\n);
//	// bitwise operators are ccreated to work on bits
//	/* we use <bitset> library to display binary values and play with withthem
//	
//	
//	
//	
//	
//	
//	#include <iostream>
//#include <bitset>
//using namespace std;
//int main()
//{
//    string binary = bitset<10>(23).to_string(); //to binary, bitset(x) is very important, as it's function
//    cout<<binary<<"\n";
//int a;
//    unsigned long decimal = bitset<10>(binary).to_ulong();
//    
//    cout<<(decimal << 3)<<"\n";
//    a = (decimal << 3);
//    cout<<(bitset<10>(a))<<endl;
//    return 0;
//}
//
//other bit operations are;
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
///*
//0
//1
//0101 0110
//
//1 2 6 = 1 * 10 ^ 2 + 2 * 10 ^ 1 + 6 * 10 ^ 0 = 100 + 20 + 6
//
//1 0 1 0 = 2 ^ 3 + 2 ^ 1 = 8 + 2 = 10
//
//1 0 1 1 0 0 = 2 ^ 2 + 2 ^ 3 + 2 ^ 5 = 4 + 8 + 32 = 44
//
//Bitwise AND - &
//Bitwise OR - |
//Bitwise NOT - ~ (tilde)
//Bitwise XOR - ^ (caret) eXclusive OR.
//0 0 0
//0 1 1
//1 0 1
//1 1 0
//Bitwise left shift <<
//Bitwise right shift >>
//*/
//
//	std::cout << (10 & 2) << endl;
//
//	/*
//	1 0 1 0
//	0 0 1 0
//	-------
//	0 0 1 0
//	*/
//	std::cout << (10 | 2) << endl;
//
//	/*
//	1 0 1 0
//	0 0 1 0
//	-------
//	1 0 1 0
//	*/
//	std::cout << (10 ^ 2) << endl;
//
//	/*
//	1 0 1 0
//	0 0 1 0
//	-------
//	1 0 0 0
//	*/
//
//	std::cout << (~10) << endl;
//
//	/*
//	000000000000000000000000000000000000 1 0 1 0
//	111111111111111111111111111111111111 0 1 0 1
//	*/
//
//	std::cout << (10 << 3) << endl; //this thing means that we are multiplying 10 by 2 raised to the power of 3 in decimal value
//							   // in bits it will get shifted by 3 places
//							   /*
//							   000000000000000000000000000000000001 0 1 0 0
//							   20 - decimal notation
//							   40
//							   */
//
//	std::cout << (10 >> 1) << endl; //this thing means that we are dividing 10 by 2 raised to the power of 3
//							   /*
//							   00000000000000000000000000000000000 0 1 0 1
//							   5
//							   */
//	std::cin.get();
//}
//
//
//#include <iostream>
//#include <string>
//
//int main() {
//
//	int b = 0, a = 0;
//	std::printf("Please Enter Greatest Integer you can think  ");
//	std::cin >> a;
//	std::printf("Please Enter Another Greatest Integer you can think  ");
//	std::cin >> b;
//
//	//if (b > a) {
//	//	std::cout << b << " This number is greater than " << a;
//	//}
//	//else{
//	//	std::cout << a << " This number is greater than " << b;
//	//}
//
//	switch (a)
//	{
//	case 8:if (b > a) {
//		std::cout << b << " This number is greater than " << a;
//	}
//		   else {
//			   std::cout << a << " This number is greater than " << b;
//		   }
//		   break;
//
//	case 4: std::printf("you selected 4");
//		break;
//	case 7: std::printf("LOL");
//		break;
//	default: std::printf("fuck me");
//		break;
//	}
//	system("pause");
//
//}