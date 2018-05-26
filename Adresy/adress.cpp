#pragma once

#include <iostream>
#include "adress.h"


adress::adress():country("NA"),town("NA"),street("NA"),street_number(-1),house_number(-1),postal_code("NA")
{
	std::cout << "Dziala konstruktor klasy adress(bez arg)!" << std::endl;
}
adress::adress(string a, string b, string c, int d, int e, string f):country(a),town(b),street(c),street_number(d),house_number(e),postal_code(f)
{
	std::cout << "Dziala konstruktor klasy adress(z arg)!" << std::endl;
}

void adress::set_country(string a)
{
	country = a;
}
void adress::set_town(string a)
{
	town = a;
}
void adress::set_street(string a)
{
	street = a;
}
void adress::set_street_number(int a)
{
	street_number = a;
}
void adress::set_house_number(int a)
{
	house_number = a;
}
void adress::set_postal_code(string a)
{
	postal_code = a;
}

string adress::get_country()
{
	return country;
}
string adress::get_town()
{
	return town;
}
string adress::get_street()
{
	return street;
}
int adress::get_street_number()
{
	return street_number;
}
int adress::get_house_number()
{
	return house_number;
}
string adress::get_postal_code()
{
	return postal_code;
}