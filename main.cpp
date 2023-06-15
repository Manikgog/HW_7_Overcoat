/*
Задание 1.
Создать класс Overcoat (верхняя одежда).
Реализовать перегруженные операторы:
1. Проверка на равенство типов одежды (операция = =).
2. Операцию присваивания одного объекта в другой
(операция =).
3. Сравнение по цене двух пальто одного типа (операция>).
*/
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
