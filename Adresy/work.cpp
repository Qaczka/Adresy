#pragma once

#include <iostream>
#include "work.h"

work::work() {
	std::cout << "Dziala konstruktor klasy work(bez arg)!" << std::endl;
}

work::work(string a, adress b, int c, date d) :com_name(a), company_a(b), c_num(c), works_since(d)
{
	std::cout << "Dziala konstruktor klasy work(z arg)!" << std::endl;
}

void work::set_com_name(string a)
{
	com_name = a;
}
void work::set_company_a(adress a)
{
	company_a = a;
}
void work::set_c_num(int a)
{
	c_num = a;
}
void work::set_works_since(date a)
{
	works_since = a;
}

string work::get_com_name()
{
	return com_name;
}
adress work::get_company_a()
{
	return company_a;
}
int work::get_c_num()
{
	return c_num;
}
date work::get_works_since()
{
	return works_since;
}