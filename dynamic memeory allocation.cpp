/*#include <iostream>
#include <string>

/*
<-------------before NUll--------------DYNAMIC MEMORY ALLOCATION
SO WE CAN DEFINE A MEMORY SPACE WITH SIZE OF INT(4BYTES), DOUBLE(8BYTES)..SO ON..
new int / new double
but these space don't have reference, so pointers come to rescue, pointer take add of new dynamic Space. Thry can
refer to it.

we also have
delete p, to free up the held address to free up that space.  It makes the pointer to forget the assigned address, just to take new address
from dynamic space.



int main() {
	int a = 6;

	int *p, *p1;
	p = new int;
	p1 = new int;
	*p = 90;
	*p1 = 990;
	std::cout << new int << std::endl;
	std::cout << p1 << std::endl;
	std::cout << *p1 << std::endl;
	delete p1;
	
	/* ******************* IMPORTANT**************************8
	ONCE THE ADDRESS IS DELETED, OR IT'S FREED, THE POINTER STILL HAS IT'S ADDRESS, BUT THAT FREED SPACE COULD BE USED BY OTHER PROGRAM
	SO TRYING TO CHANGE VALUE WOULD LEAD TO ERROR, SINCE DOESN'T ACCESS TO IT
	*/

	//*p1 = 3000; EXAMPLE CRASHING WHOLE PROJECT
/*	std::cout << p1 << std::endl;
//	std::cout << *p1 << std::endl;
	


	system("pause");
}
*/
#include <iostream>
#include <string>

/*
<---------------------------DYNAMIC MEMORY ALLOCATION
SO WE CAN DEFINE A MEMORY SPACE WITH SIZE OF INT(4BYTES), DOUBLE(8BYTES)..SO ON..
new int / new double
but these space don't have reference, so pointers come to rescue, pointer take add of new dynamic Space. Thry can
refer to it.

we also have
delete p, to free up the held address to free up that space.  It makes the pointer to forget the assigned address, just to take new address
from dynamic space.
before NULL

*/
int main() {
	int b=90,a = 6,c=7;

	int *p, *p1;
	p = new int;
	p1 = new int;
	*p = 90;
	*p1 = 990;
	std::cout << new int << std::endl;
	std::cout << p1 << std::endl;
	std::cout << *p1 << std::endl;
	delete p1;
	p1 = NULL;
	/* ******************* IMPORTANT**************************8
	ONCE THE ADDRESS IS DELETED, OR IT'S FREED, THE POINTER STILL HAS IT'S ADDRESS, BUT THAT FREED SPACE COULD BE USED BY OTHER PROGRAM
	SO TRYING TO CHANGE VALUE WOULD LEAD TO ERROR, SINCE DOESN'T ACCESS TO IT
	when we entering multi values, we don't use *p, since it points to base value, we can instead use array struct as 
	p[i] = value
	
	*/
	p1 = &b;
	*p1 = b; 
	std::cout << p1 << std::endl;
	std::cout << *p1 << std::endl;

	/*lets solve problem of dynamic memeory allocation of array*/

	std::cout << "Please number of values you would like to store in array " << std::endl;
	std::cin >> c;


	int * p3 = new int[c];
	std::cout << sizeof(*p3) << std::endl;

	for (int k =0,i = 0; i < c; i++) {
		std::cout << "please enter value in array" << std::endl;
		std::cin >> k;
		*p3[i] = k;
	}

	for (int i = 0; i < c; i++) {
		std::cout << p3[i] << std::endl;

	}

	std::cout << "add p3 before deleteing " << p3 << std::endl;
	delete p3;
	std::cout << "add p3 after deleteing " << p3 << std::endl;
	// but if we again initialize, we can get same add of the free space
	int *p4 = new int;

	std::cout << "add p4 being assigned just freed space, since it's still available becaus eit's running same program " << p4 << std::endl;
	






	system("pause");
}