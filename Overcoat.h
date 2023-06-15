#ifndef _OVERCOAT_H_
#define _OVERCOAT_H_

#include <iostream>

class Overcoat
{
private:
	char* _type;
	char* _manufacturer;
	char* _size;
	char* _color;
	float _price;

public:
	Overcoat();
	Overcoat(const char* type, const char* manufacturer, const char* size, const char* color, float price);
	Overcoat(const char* type);
	Overcoat(const char* type, const char* manufacturer);
	Overcoat(const char* type, const char* manufacturer, const char* size);
	Overcoat(const char* type, const char* manufacturer, const char* size, const char* color);
	~Overcoat();
	Overcoat(const Overcoat& ov);
	Overcoat& operator=(const Overcoat& ov);
	bool operator<(const Overcoat& ov);
	bool operator>(const Overcoat& ov);
	bool operator==(const Overcoat& ov);
	const char* GetType();
	const char* GetManufacturer();
	const char* GetSize();
	const char* GetColor();
	const float GetPrice();
	void ShowOvercoat();
};



#endif // !_OVERCOAT_H_

