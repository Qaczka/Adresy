#pragma once

#include <iostream>
#include "person.h"

person::person() :name("NA"), surname("NA"),  cel_num(-1), email("NA"), sex("NA")
{
	std::cout << "Dziala konstruktor klasy person(bez arg)!" << std::endl;
}
person::person(string nam, string sur, adress ad, date dat, int cel, string e, string s, work wo)
{
	name = nam;
	surname = sur;
	p_adress = ad;
	birthday = dat;
	cel_num = cel;
	email = e;
	sex = s;
	p_work = wo;

	std::cout << "Dziala konstruktor klasy person(z arg)!" << std::endl;
}

void person::set_name(string nam)
{
	name = nam;
}
void person::set_surname(string sur)
{
	surname = sur;
}
void person::set_p_adress(adress ad)
{
	p_adress = ad;
}
void person::set_birthday(date dat)
{
	birthday = dat;
}
void person::set_cel_num(int cel)
{
	cel_num = cel;
}
void person::set_email(string e)
{
	email = e;
}
void person::set_sex(string s)
{
	sex = s;
}
void person::set_p_work(work wo)
{
	p_work = wo;
}


string person::get_name()
{
	return name;
}
string person::get_surname()
{
	return surname;
}
adress person::get_p_adress()
{
	return p_adress;
}
date person::get_birthday()
{
	return birthday;
}
int person::get_cel_num()
{
	return cel_num;
}
string person::get_email()
{
	return email;
}
string person::get_sex()
{
	return sex;
}
work person::get_p_work()
{
	return p_work;
}


