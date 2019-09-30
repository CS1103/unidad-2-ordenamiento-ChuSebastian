#pragma once

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void shell_sort(vector <T>& A) {
	int gap = A.size() / 2;
	while (gap > 0) {
		for (int i = gap; i < A.size(); i++) {
			for (int j = i; j >= gap; j -= gap) {
				if (A[j] < A[j - gap])
					swap(A[j], A[j - gap]);
				else
					break;
			}
		}
		gap = gap / 2;
	}
}

template <typename T>
void swap(T& small, T large) {
	T temp = large;
	large = small;
	small = temp;
}


