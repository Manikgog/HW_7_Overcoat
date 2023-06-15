#include "Overcoat.h"

Overcoat::Overcoat()
	: _type(new char('\0'))
	, _manufacturer(new char('\0'))
	, _size(new char('\0'))
	, _color(new char('\0'))
	, _price(0) {}

Overcoat::Overcoat(const char* type, const char* manufacturer, const char* size, const char* color, float price)
	: _type(_type = new char[strlen(type) + 1] {}), _manufacturer(_manufacturer = new char[strlen(manufacturer) + 1] {})
	, _size(_size = new char[strlen(size) + 1] {}), _color(_color = new char[strlen(color) + 1] {}), _price(price)
{
	for (size_t i = 0; i < strlen(_type) + 1; ++i)
	{
		_type[i] = type[i];
	}
	for (size_t i = 0; i < strlen(_manufacturer) + 1; ++i)
	{
		_manufacturer[i] = manufacturer[i];
	}
	for (size_t i = 0; i < strlen(_size) + 1; ++i)
	{
		_size[i] = size[i];
	}
	for (size_t i = 0; i < strlen(_color) + 1; ++i)
	{
		_color[i] = color[i];
	}
}

Overcoat::Overcoat(const char* type) : Overcoat( type, "\0", "\0", "\0", 0) {}

Overcoat::Overcoat(const char* type, const char* manufacturer) : Overcoat(type, manufacturer, "\0", "\0", 0) {}

Overcoat::Overcoat(const char* type, const char* manufacturer, const char* size) : Overcoat(type, manufacturer, size, "\0", 0) {}

Overcoat::Overcoat(const char* type, const char* manufacturer, const char* size, const char* color) : Overcoat(type, manufacturer, size, color, 0) {}

Overcoat::Overcoat(const Overcoat& ov)
	: _type(_type = new char[strlen(ov._type) + 1] {}), _manufacturer(_manufacturer = new char[strlen(ov._manufacturer) + 1] {})
	, _size(_size = new char[strlen(ov._size) + 1] {}), _color(_color = new char[strlen(ov._color) + 1] {}), _price(ov._price)
{
	strcpy_s(ov._type, strlen(ov._type) + 1, this->_type);
	strcpy_s(ov._manufacturer, strlen(ov._manufacturer) + 1, this->_manufacturer);
	strcpy_s(ov._size, strlen(ov._size) + 1, this->_size);
	strcpy_s(ov._color, strlen(ov._color) + 1, this->_color);
}

Overcoat& Overcoat::operator=(const Overcoat& ov)
{
	if (this == &ov)
		return *this;

	if (_type)
		delete[] _type;
	_type = new char[strlen(ov._type) + 1] {};
	strcpy_s(this->_type, strlen(ov._type) + 1, ov._type);

	if (_manufacturer)
		delete[] _manufacturer;
	_manufacturer = new char[strlen(ov._manufacturer) + 1] {};
	strcpy_s(this->_manufacturer, strlen(ov._manufacturer) + 1, ov._manufacturer);

	if (_size)
		delete[] _size;
	_size = new char[strlen(ov._size) + 1] {};
	strcpy_s(this->_size, strlen(ov._size) + 1, ov._size);

	if (_color)
		delete[] _color;
	_color = new char[strlen(ov._color) + 1] {};
	strcpy_s(this->_color, strlen(ov._color) + 1, ov._color);

	_price = ov._price;

	return *this;
}

bool Overcoat::operator<(const Overcoat& ov)
{
	if (strcmp(ov._type, _type))
	{
		std::cout << "Разный тип верхней одежды.\n";
		return false;
	}
	if (_price < ov._price)
		return true;
	return false;
}

bool Overcoat::operator>(const Overcoat& ov)
{
	if (strcmp(ov._type, _type))
	{
		std::cout << "Разный тип верхней одежды.\n";
		return false;
	}
	if (_price > ov._price)
		return true;
	return false;
}

bool Overcoat::operator==(const Overcoat& ov)
{
	if (strcmp(ov._type, _type))
	{
		std::cout << "Разный тип верхней одежды.\n";
		return false;
	}
	if (_price - ov._price < 0.01)
		return true;
	return false;
}

const char* Overcoat::GetType()
{
	return _type;
}

const char* Overcoat::GetManufacturer()
{
	return _manufacturer;
}

const char* Overcoat::GetSize()
{
	return _size;
}

const char* Overcoat::GetColor()
{
	return _color;
}

const float Overcoat::GetPrice()
{
	return _price;
}

void Overcoat::ShowOvercoat()
{
	std::cout << "-------------------------------------------\n";
	std::cout << "Тип одежды: " << _type << '.' << std::endl;
	std::cout << "Производитель: " << _manufacturer << '.' << std::endl;
	std::cout << "Размер: " << _size << '.' << std::endl;
	std::cout << "Цвет: " << _color << '.' << std::endl;
	std::cout << "Цена: " << _price << '.' << std::endl;
}