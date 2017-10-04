////#include <iostream>
////#include <string>
////
////enum MyEnum
////{
////	lol1, lol2, lol3
////};
////
////
////std::string switch_f(MyEnum d);
////
////int main() {
////	MyEnum q = lol3;
////
////	std::cout << (switch_f(lol1)) << std::endl;
////	switch_f(q);
////	system("pause");
////}
////
////std::string switch_f(MyEnum d) {
////	//int lol1 = 8; /// variables used in enum cannot be assigned any other values
////	switch (d)
////	{
////	case 0: 
////		return "its' lol1";
////		break;
////	case lol2: 
////		return "lol2";
////		break;
////	case lol3: 
////		return "lol3";
////		break;
////
////
////	default: 
////		return "fuck_me";
////		break;
////	}
////}
//
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int bt[20], p[20], wt[20], tat[20], pr[20], i, j, n, total = 0, pos, temp, avg_wt, avg_tat;
//	cout << "Enter Total Number of Process:";
//	cin >> n;
//
//	cout << "\nEnter Burst Time and Priority\n";
//	for (i = 0; i<n; i++)
//	{
//		cout << "\nP[" << i + 1 << "]\n";
//		cout << "Burst Time:";
//		cin >> bt[i];
//		cout << "Priority:";
//		cin >> pr[i];
//		p[i] = i + 1;           //contains process number
//	}
//
//	//sorting burst time, priority and process number in ascending order using selection sort
//	for (i = 0; i<n; i++)
//	{
//		pos = i;
//		for (j = i + 1; j<n; j++)
//		{
//			if (pr[j]<pr[pos])
//				pos = j;
//		}
//
//		temp = pr[i];
//		pr[i] = pr[pos];
//		pr[pos] = temp;
//
//		temp = bt[i];
//		bt[i] = bt[pos];
//		bt[pos] = temp;
//
//		temp = p[i];
//		p[i] = p[pos];
//		p[pos] = temp;
//	}
//
//	wt[0] = 0;            //waiting time for first process is zero
//
//						  //calculate waiting time
//	for (i = 1; i<n; i++)
//	{
//		wt[i] = 0;
//		for (j = 0; j<i; j++)
//			wt[i] += bt[j];
//
//		total += wt[i];
//	}
//
//	avg_wt = total / n;      //average waiting time
//	total = 0;
//
//	cout << "\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time";
//	for (i = 0; i<n; i++)
//	{
//		tat[i] = bt[i] + wt[i];     //calculate turnaround time
//		total += tat[i];
//		cout << "\nP[" << p[i] << "]\t\t  " << bt[i] << "\t\t    " << wt[i] << "\t\t\t" << tat[i];
//	}
//
//	avg_tat = total / n;     //average turnaround time
//	cout << "\n\nAverage Waiting Time=" << avg_wt;
//	cout << "\nAverage Turnaround Time=" << avg_tat;
//
//	system("pause");
//}


#include <iostream>
#include<string>

int main() {
	int v = 8;
	int o = 98;
	std::cout << &v << std::endl;
	int * const  pointer = &v ; //never changes address
	const int *p1 = &o; //cannot changes value of original memory
	const int * const p_3 = &o;//can't change value or address
	//std::cout << pointer << std::endl;
	v = 234;
	p1 = &v;
	int k = *p_3;
	int** g_pointer;
	int* t = &v;
	g_pointer = &t;
	std::cout << pointer << std::endl;
	std::cout << p1 << std::endl;
	std::cout << o << std::endl;
	std::cout << *p_3 << std::endl;
	std::cout << &v << std::endl;
	std::cout << t << std::endl;
	std::cout << **g_pointer << std::endl;
	std::cout << &t << std::endl;



	std::cout << std::endl << std::endl;
// array when initialized, act as an pointer if used with it'a name
	int a[3] = { 1,6,3 };
	int *q,*s;
	q = &a[0];
	s = a;
	std::cout <<"array pointer pointing towards base add   "<< a << std::endl;
	std::cout << "array of 0, displaying value of a[0]    "<< a[0] << std::endl;
	std::cout << "pointer q pointing towards a[0]    "<<q << std::endl;
// some more features of array pointer
	std::cout << "array pointer pointing towards base value    "<<*a + 8 << std::endl;
	std::cout << "a[0]+1 should be value at 0 + 1    "<< a[0] + 1 << std::endl;
	std::cout << "pointer q + 2, which should move it by two position, and should point to a[2]   "<<q + 2 << std::endl;
	std::cout << &a[2] << std::endl;
	std::cout << &a[1] << std::endl;
	std::cout << q + 1<< std::endl;

// we can do before and after increment on pointers too
	std::cout << ++q << std::endl;
	std::cout << ++*q << std::endl;
	std::cout << *++q << std::endl;
	std::cout << q++ << std::endl;
// ************************************************* cout<<q = q+1<<, q becomes q+1 for the rest of the program
	system("pause");
}
/*pointers are ordinary variable that can store address as value, which other variable cannot
poiter of pointer takes value
something named coslon pointer which is like int * const pointer_name;, now this stores a permanent address to a variable 

*********************** very important ******************88

int * const p ; address cannot be changed. but value can be changed
but const int *p = 7; fixes a value

when an array is defined, if just use it's name, it will be acting likne pointer, even following pointer rules. see above example
*/