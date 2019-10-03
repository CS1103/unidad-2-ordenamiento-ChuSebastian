#include <iostream>
#include <fstream>
#include "Definiciones.h"
#include "Split.h"
#include "Record.h"
#include "General.h"
#include "HeapSort.h"
#include <algorithm>
#include "MergeSort.h"
#include "ShellSort.h"
#include "QuickSort.h"

using namespace std;



int main() {


	vector <Record> records = VectorRecords();


	/*
	MaxHeap(records, false);
	ImprimirArchivo("MaxHeap1.csv", records);
	MaxHeap(records, true);
	ImprimirArchivo("MaxHeap2.csv", records);
	quick_sort(records, 2, 3);
	ImprimirArchivo("Quick1.csv", records);
	*/

	shell_sort(records);
	ImprimirArchivo("Shell1.csv", records);
	shell_sort(records, true);
	ImprimirArchivo("Shell2.csv", records);


	

	return 0;
}