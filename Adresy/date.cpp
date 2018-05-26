#pragma once

#include <iostream>
#include "date.h"

date::date() : year(1970), month(1), day(1) {
	std::cout << "Dziala konstruktor klasy date(bez arg)!" << std::endl;
}

date::date(int a, int b, int c) :year(a), month(b), day(c) {
	std::cout << "Dziala konstruktor klasy date(z arg)!" << std::endl;
}

void date::set_y(int a)
{
	year = a;
}
void date::set_m(int b)
{
	if (b < 1 || b < 12)
	{
		std::cout << "Wrong month number!" << std::endl;
	}else
	month = b;
}
void date::set_d(int c)
{
	if (c < 1 || c>31)
	{
		std::cout << "Wrong day number!" << std::endl;
	}else
	day = c;
}

int date::get_y()
{
	return year;
}
int date::get_m()
{
	return month;
}
int date::get_d()
{
	return day;
}