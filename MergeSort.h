#pragma once

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void merge_sort(vector<T>& A) {
	if (A.size() <= 1) return;

	int mid = A.size() / 2;
	vector<T> left;
	vector<T> right;

	for (size_t j = 0; j < mid; j++)
		left.push_back(A[j]);
	for (size_t j = 0; j < (A.size()) - mid; j++)
		right.push_back(A[mid + j]);

	merge_sort(left);
	merge_sort(right);
	::sorting(left, right, A);
}

template <typename T>
void sorting(vector<T>& left, vector<T>& right, vector<T>& a) {
	int nL = left.size();
	int nR = right.size();
	int i = 0, j = 0, k = 0;

	while (j < nL && k < nR)
	{
		if (left[j] < right[k]) {
			a[i] = left[j];
			j++;
		}
		else {
			a[i] = right[k];
			k++;
		}
		i++;
	}
	while (j < nL) {
		a[i] = left[j];
		j++; i++;
	}
	while (k < nR) {
		a[i] = right[k];
		k++; i++;
	}
}
