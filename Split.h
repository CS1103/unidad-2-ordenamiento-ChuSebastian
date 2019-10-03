#pragma once
#include <iostream>
#include <vector>
#include "Definiciones.h"
#include "Record.h"
using namespace std;


// SPLIT LINEAS
int _strpos(const std::string& haystack, const std::string& needle);
size_t _strlen(const std::string& text);
std::string _substr(const std::string& data, int begin, int n);
size_t _substrcount(const std::string& pattern, std::string data);
std::vector<std::string> _explode(const std::string& pattern, std::string data);

