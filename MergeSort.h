#pragma once
#include "Merge.h"
void MergeSort(int* A, int n) {
	if (n > 1) {
		int mitad = n / 2;  // tamaño / 2 -- (8/2=4)
		int* A1 = new int[mitad];  //Separando en dos bloques
		int* A2 = new int[n - mitad];  //Separando en dos bloques

		for (int i = 0; i < mitad; i++) {  //Recorrer solo la primera bloque
			A1[i] = A[i];
		}
		for (int i = mitad; i < n; i++) {  //Recorrer el segundo bloque
			A2[i - mitad] = A[i];
		}
		MergeSort(A1, mitad);
		MergeSort(A2, n - mitad);
		Merge(A, A1, A2, n);
	}
}