#include<iostream>
#include<memory>

int main()
{
	int stack[10]; // create an array on stack
	int* ip1 = &stack[0];

	int* ip2 = new int[10]; // create an array on the heap(using allocation)
	delete[] ip2;
} 
