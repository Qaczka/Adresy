#pragma once

#include <iostream>
#include <string.h>
#include "date.h"
#include "adress.h"

using namespace std;

class work{
	string com_name;
	adress company_a;
	int c_num;
	date works_since;
public:
	work();
	work(string, adress, int, date);

	void set_com_name(string);
	void set_company_a(adress);
	void set_c_num(int);
	void set_works_since(date);

	string get_com_name();
	adress get_company_a();
	int get_c_num();
	date get_works_since();
};