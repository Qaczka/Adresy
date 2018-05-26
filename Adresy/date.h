#pragma once

class date {
	int year, month, day;
public:
	date();
	date(int, int, int);

	void set_y(int);
	void set_m(int);
	void set_d(int);

	int get_y();
	int get_m();
	int get_d();
};