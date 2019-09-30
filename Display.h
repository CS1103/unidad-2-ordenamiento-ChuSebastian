#pragma once
#include <iostream>
using namespace std;
template <typename T>
void Display(vector<T> A) {
	for (T i : A)
		cout << i << " " << endl;
}
