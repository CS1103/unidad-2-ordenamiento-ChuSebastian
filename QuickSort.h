#pragma once

template <typename T>
int partition(vector<T>& A, int left, int right) {
	int pivotIndex = left + (right - left) / 2;
	T pivotValue = A[pivotIndex];
	int i = left, j = right;
	int temp;
	while (i <= j) {
		while (A[i] < pivotValue) {
			i++;
		}
		while (A[j] > pivotValue) {
			j--;
		}
		if (i <= j) {
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i++;
			j--;
		}
	}
	return i;
}


template <typename T> 
void quick_sort(vector <T>& A, int left, int right) {
	if (left < right) {
		int pivotIndex = partition(A, left, right);
		quick_sort(A, left, pivotIndex - 1);
		quick_sort(A, pivotIndex, right);
	}
}

