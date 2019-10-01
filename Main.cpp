#include "QuickSort.h"
#include "ShellSort.h"
#include "MergeSort.h"
#include "HeapSort.h"
#include "Display.h"
#include <fstream>
#include <string>

int main() {
	
	
	//prueba de que el ordenamiento funciona
	vector <double> A{ 3.3, 4.5, 1.3, 8.5, 1.6 };
	cout << "Vector inicial: " << endl;
	Display(A);
	cout << endl;

	//quick sort
	cout << "Quick sort: " << endl;
	quick_sort(A, 0, A.size() - 1);
	Display(A);
	cout << endl;


	//merge sort
	cout << "Merge sort: " << endl;
	merge_sort(A);
	Display(A);
	cout << endl;


	//shell sort
	cout << "Shell sort: " << endl;
	shell_sort(A);
	Display(A);
	cout << endl;


	/*
	//leer el archivo csv
	ifstream myFile;
	myFile.open("datafile.csv");

	while (myFile.good()) {
		string line;
		getline(myFile, line, ',');
		cout << line << ", "; // ----- imprime el archivo csv
		
	}
	cout << endl;
	*/

}

