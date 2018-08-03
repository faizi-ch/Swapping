#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace std;
void swappingByVariable(int, int);
void swappingByPointers(int*, int*);

void main()
{
	int n1 = 2;
	int n2 = 4;

	cout << "Values before swappingByVariable:\n" << n1 << "\t" << n2;
	cout << endl;
	swappingByVariable(n1, n2);
	cout << "Values after swappingByVariable:\n" << n1 << "\t" << n2;
	cout << endl;
	cout << "Values before swappingByPointers:\n" << n1 << "\t" << n2;
	cout << endl;
	int* pN1;
	int* pN2;
	pN1 = &n1;
	pN2 = &n2;
	swappingByPointers(pN1, pN2);
	cout << "Values after swappingByPointers:\n" << n1 << "\t" << n2;
	cout << endl;
	system("pause");
}

void swappingByVariable(int n1, int n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

void swappingByPointers(int *n1, int *n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}