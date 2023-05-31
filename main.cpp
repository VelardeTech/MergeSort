#include <iostream>
#include <conio.h>
#include <functional>
#include <string>
#include "MergeSort.h"
using namespace std;
using namespace System;
int main() {
	int arreglo[] = { 3,1,4,1,5,9,2,6 };  //Vector de elementos
	int n = 8; //Tamaño del vector

	MergeSort(arreglo, n);  //Llamando a la clase
	cout << "\n\t";
	for (int i = 0; i < n; i++) {
		cout << arreglo[i] << " ";
	}
	_getch(); return 0;
}