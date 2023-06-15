#include "TestOvercoat.h"


void TestOvercoat()
{
	// тип, производитель, размер, цвет, цена
	Overcoat o1("пальто", "Россия", "XL", "серый", 10000);
	Overcoat o3("пальто", "Китай", "XL", "чёрный", 10000);
	printf("/////////////////////////////////////////////////////////////\n");
	std::cout << "Тестирование метода вывода на печать:\n";
	o1.ShowOvercoat();
	o3.ShowOvercoat();
	printf("/////////////////////////////////////////////////////////////\n");
	std::cout << "Тестирование перегруженного оператора присвоения.\n";
	Overcoat o2;
	o2 = o1;
	assert(strcmp(o2.GetType(), o1.GetType()) == 0);
	assert(strcmp(o2.GetManufacturer(), o1.GetManufacturer()) == 0);
	assert(strcmp(o2.GetSize(), o1.GetSize()) == 0);
	assert(strcmp(o2.GetColor(), o1.GetColor()) == 0);
	assert(o2.GetPrice() == o1.GetPrice());
	o2.ShowOvercoat();
	printf("/////////////////////////////////////////////////////////////\n");
	std::cout << "Тестирование перегруженного оператора сравнения == при одинаковых типах одежды и ценах.\n";
	if (o1 == o2)
	{
		std::cout << "\x1b[32mЦены равны\x1b[0m\n";
	}
	assert(o1.GetPrice() == o2.GetPrice());
	printf("/////////////////////////////////////////////////////////////\n");
	std::cout << "Тестирование перегруженного оператора сравнения == при разных типах одежды.\n";
	Overcoat o4("шуба", "Россия", "M", "рыжий", 100000);
	if (o1 == o4)
	{
		std::cout << "\x1b[32mЦена\x1b[0m\n";
		o1.ShowOvercoat();
		std::cout << "\x1b[32mменьше цены\x1b[0m\n";
		o4.ShowOvercoat();
	}
	assert(strcmp(o1.GetType(), o4.GetType()) != 0);
	printf("/////////////////////////////////////////////////////////////\n");
	std::cout << "Тестирование перегруженного оператора сравнения < .\n";
	Overcoat o5("пальто", "Россия", "XXL", "синий", 11000);
	if (o1 < o5)
	{
		std::cout << "\x1b[32mЦена\x1b[0m\n";
		o1.ShowOvercoat();
		std::cout << "\x1b[32mменьше цены\x1b[0m\n";
		o5.ShowOvercoat();
	}
	assert(strcmp(o1.GetType(), o5.GetType()) == 0);
	assert(o1.GetPrice() < o5.GetPrice());
	printf("/////////////////////////////////////////////////////////////\n");
	std::cout << "Тестирование перегруженного оператора сравнения > .\n";
	if (o5 > o1)
	{
		std::cout << "\x1b[32mЦена\x1b[0m\n";
		o5.ShowOvercoat();
		std::cout << "\x1b[32mбольше цены\x1b[0m\n";
		o1.ShowOvercoat();
	}
	assert(strcmp(o1.GetType(), o5.GetType()) == 0);
	assert(o5.GetPrice() > o1.GetPrice());
}
