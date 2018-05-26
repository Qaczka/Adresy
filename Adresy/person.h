#pragma once
#include <iostream>
//#include <string>
#include "date.h"
#include "work.h"
#include "adress.h"


using namespace std;

class person {
	string name;
	string surname;
	adress p_adress;
	date birthday;
	int cel_num;
	string email;
	string sex;
	work p_work;

public:
	person();
	person(string, string, adress, date, int, string, string, work);

	void set_name(string);
	void set_surname(string);
	void set_p_adress(adress);
	void set_birthday(date);
	void set_cel_num(int);
	void set_email(string);
	void set_sex(string);
	void set_p_work(work);

	string get_name();
	string get_surname();
	adress get_p_adress();
	date get_birthday();
	int get_cel_num();
	string get_email();
	string get_sex();
	work get_p_work();
};
