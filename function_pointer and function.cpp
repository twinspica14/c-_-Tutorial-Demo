#include <iostream>
#include <string>

void multiplyx(int &v, int n);
void multiplyx_pointer(int *, int a);
int * multiply_return_ptr(int *v, int a);
void multiply_array(int * v);
int main() {
	int a = 6;
	multiplyx(a, 4);
	// this is one way
	int * k = &a;

	//----------array pointer fun-----------------
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}

	//multiplyx_pointer(k, 10);
	multiplyx_pointer(&a, 10); // this is best way, since we are declaring pointer inside in fucntion

	k  = multiply_return_ptr(&a, 10);
	*k = *k / 1000;




	//------------please see example----------------
	int b = 8;
	int * p1 = &b;
	int c = 10;
	p1 = &c;
	*p1 = 600;
	//---------------------------------------------

	// this thing is different with function, since declared pointer is on;y in local of the defined function, so it doesn't affects the
	// the first var address of pointer



	multiply_array(arr);

	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << b << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << std::endl;
	}
	system("pause");
}


















// -------------------important------------------- in function(int &v) means reference to the incoming number, changing
// this number menas changing original value

void multiplyx(int &v, int a) {
	v = v * 4;
}

// ----------------imporatnt-------------- reference by variable and pointer can do same work

void multiplyx_pointer(int * v, int a) {

	*v = *v * a;

}


//---------------------important----------- let's say, after passing value from function, we like to return the value to
// new var y, now we want to change y, so that original value i affected too... we can't use reference. But we could define
// pointer function int * function(,){}, this may seem unnecessary, but who knows

int * multiply_return_ptr(int * v, int a) {
	*v = *v * 200;
	return v; // we are returning ptr, since function isd of pointer type

}


//multiply_array function
void multiply_array(int * v) {
	for (int i = 0; i < 10; i++) {//sizeod(v)/4 won't give 10, bucz ptr points to base loc which has 4 size
		*(v + i) = *(v + i)*i;
	}
}
// -----------solution??????----- simple send an arg like sizdeof(arr)/sizeof(arr[0]) which is actual no of elements in array
