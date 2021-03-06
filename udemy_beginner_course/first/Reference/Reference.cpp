
#include "pch.h"
#include <iostream>

using namespace std;




void Add(int a, int b, int &result) {
	result = (a + b);
}

void Factorial(int a, int &result) {

	int sum = 1;
	for (int i = a; i > 0; i--)
	{
		sum *= i;
	}
	result = sum;
}

void Swap(int &a, int &b) {

	int temp = a;
	a = b;
	b = temp;

}


void SwapWithPointers(int *x, int *y) {
	
	int temp = *x;
	*x = *y;
	*y = temp;
}


int main()
{

	
	//--------------------

	//int x = 10;
	//int &ref = x;

	//std::cout << "x:\t" << x << endl; 
	//std::cout << "ref:\t" << ref << endl; 

	//std::cout << "x:\t" << &x << endl;
	//std::cout << "ref:\t" << &ref << endl;
	// 
	//int y = 20;
	//ref = y;
	//std::cout << "x:\t" << x << endl;
	//std::cout << "ref:\t" << ref << endl;
	//return 0;

	//--------------------










	//--------------------		Add two numbers and return the result through a reference parameter
	//int a = 1;
	//int b = 2;
	//int result = 0;
	//Add(a, b, result);
	//std::cout << "result:\t" << result << endl;
	//--------------------

	//--------------------		Find factorial of a number and return that through a reference parameter
	//int a = 5;
	//int result = 0;
	//Factorial(a, result);
	//std::cout << "result:\t" << result << endl;
	//--------------------

	//--------------------		Swap two numbers through reference arguments
	//int a = 5;
	//int b = 10;
	//Swap(a, b);
	//std::cout << "a:\t" << a << endl;
	//std::cout << "b:\t" << b << endl;
	//--------------------



	//--------------------
	//int a = 5;
	//int b = 10;
	//SwapWithPointers(&a, &b);
	//std::cout << "a:\t" << a << endl;
	//std::cout << "b:\t" << b << endl;
	//--------------------



}



//Add two numbers and return the result through a reference parameter
//void Add(int a, int b, int &result);   

//Find factorial of a number and return that through a reference parameter
//void Factorial(int a, int &result);   

//Swap two numbers through reference arguments
//void Swap(int &a, int &b);            