#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include "Overcoat.h"
#include "TestOvercoat.h"

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	
	TestOvercoat();

	return 0;
}
