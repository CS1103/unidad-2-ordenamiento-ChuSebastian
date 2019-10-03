#pragma once

#include <iostream>
#include <fstream>
#include "Definiciones.h"
#include "Split.h"
#include "Record.h"
using namespace std;


void AbreArchivo(TipoCadena nombreFisico, std::fstream& archivo, ios_base::openmode modo);
ostream& operator<<(ostream& os, vector <Record> vec);
vector <Record> VectorRecords();


template<template<typename, typename...>class container, typename T>
void ImprimirArchivo(string nombre, container<T> vec) {
	fstream archivoSalida;
	AbreArchivo(nombre, archivoSalida, ios::out);
	archivoSalida << vec;
}
