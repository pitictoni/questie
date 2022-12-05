#include "vector.h"
#include <iostream>
using namespace std;

void Genereaza(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 10;
}

void Afiseaza(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
