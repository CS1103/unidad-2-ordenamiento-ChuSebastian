#include "ShellSort.h"
#include "Display.h"
#include <fstream>
#include <string>

int main() {
	//prueba de que el ordenamiento funciona
	vector <double> A{ 3.3, 4.5, 1.3, 8.5, 1.6 };
	Display(A);
	cout << endl;

	//shell sort
	shell_sort(A);
	Display(A);
	cout << endl;

	//leer el archivo csv
	ifstream myFile;
	myFile.open("datafile.csv");

	while (myFile.good()) {
		string line;
		getline(myFile, line, ',');
		//cout << line << ", ";  ----- imprime el archivo csv
		
	}
	cout << endl;




}

