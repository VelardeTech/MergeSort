#pragma once
void Merge(int* A, int* A1, int* A2, int n) {
	int i = 0; int j = 0; int k = 0;
	int mitad = n / 2;
	while (i < mitad && j < n - mitad) {
		if (A1[i] < A2[j]) {
			A[k] = A1[i]; i++; k++;
		}
		else {
			A[k] = A2[j];
			j++; k++;
		}
	}
	while (i < mitad) {
		A[k] = A1[i]; k++; i++;
	}
	while (j < n - mitad) {
		A[k] = A2[j]; k++; j++;
	}
}