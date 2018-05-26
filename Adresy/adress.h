#pragma once

#include <iostream>

using namespace std;

class adress {
	string country;
	string town;
	string street;
	int street_number;
	int house_number;
	string postal_code;
public:
	adress();
	adress(string, string, string, int, int, string);

	void set_country(string);
	void set_town(string);
	void set_street(string);
	void set_street_number(int);
	void set_house_number(int);
	void set_postal_code(string);

	string get_country();
	string get_town();
	string get_street();
	int get_street_number();
	int get_house_number();
	string get_postal_code();
};