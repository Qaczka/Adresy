#include <iostream>
#include <string>
#include "date.h"
#include "person.h"
#include "adress.h"

using namespace std;

int main()
{
	date test;

	person ada;

	cout << "Name is: " << ada.get_name() << endl;
	cout << "Surname is: " << ada.get_surname() << endl;
	cout << "Adress: " << ada.get_p_adress().get_country() << "(country), " << ada.get_p_adress().get_town() << "(town), " << ada.get_p_adress().get_street() << "(street), " << ada.get_p_adress().get_street_number() << "(street number), " << ada.get_p_adress().get_house_number() << "(house number), " << ada.get_p_adress().get_postal_code() << "(postal code), " << endl;
	cout << "Date: " << ada.get_birthday().get_y() <<"."<< ada.get_birthday().get_m() << "." << ada.get_birthday().get_d() << endl;
	cout << "Celphone number: " << ada.get_cel_num() << endl;
	cout << "Email: " << ada.get_email() << endl;
	cout << "Sex: " << ada.get_sex() << endl;
	cout << "Workplace: " << ada.get_p_work().get_com_name() << "(company name), "
		<< ada.get_p_work().get_company_a().get_country() << ", " << ada.get_p_work().get_company_a().get_town() << ", " << ada.get_p_work().get_company_a().get_street() << ", " << ada.get_p_work().get_company_a().get_street_number() << ", " << ada.get_p_work().get_company_a().get_house_number() << ", " << ada.get_p_work().get_company_a().get_postal_code() << ", " << "(company adress), "
		<< ada.get_p_work().get_c_num() << "(company telephone number), " 
		<< ada.get_p_work().get_works_since().get_y() << "." << ada.get_p_work().get_works_since().get_m() << "." << ada.get_p_work().get_works_since().get_d()<< "(works since), " << endl;

	date my_date(2000, 3, 2);

	adress somewhere("Belgium","Antwerp","Leap",8,10,"20-845");
	adress com_place("Germany", "Bonn", "Gunther", 3, 5, "43-200");
	date com_d(2015, 7, 25);
	work company("Bob's cleanup", com_place, 120342153, com_d);

	person bob("Bob", "Kowalsky", somewhere, my_date, 643254256, "bobkowky@gmail.com", "male", company);

	cout << "Name is: " << bob.get_name() << endl;
	cout << "Surname is: " << bob.get_surname() << endl;
	cout << "Adress: " << bob.get_p_adress().get_country() << "(country), " << bob.get_p_adress().get_town() << "(town), " << bob.get_p_adress().get_street() << "(street), " << bob.get_p_adress().get_street_number() << "(street number), " << bob.get_p_adress().get_house_number() << "(house number), " << bob.get_p_adress().get_postal_code() << "(postal code), " << endl;

	cout << "Date: " << bob.get_birthday().get_y() << "." << bob.get_birthday().get_m() << "." << bob.get_birthday().get_d() << endl;
	cout << "Celphone number: " << bob.get_cel_num() << endl;
	cout << "Email: " << bob.get_email() << endl;
	cout << "Sex: " << bob.get_sex() << endl;
	cout << "Workplace: " << bob.get_p_work().get_com_name() << "(company name), "
		<< bob.get_p_work().get_company_a().get_country() << ", " << bob.get_p_work().get_company_a().get_town() << ", " << bob.get_p_work().get_company_a().get_street() << ", " << bob.get_p_work().get_company_a().get_street_number() << ", " << bob.get_p_work().get_company_a().get_house_number() << ", " << bob.get_p_work().get_company_a().get_postal_code() << ", " << "(company adress), "
		<< bob.get_p_work().get_c_num() << "(company telephone number), " 
		<< bob.get_p_work().get_works_since().get_y() << "." << bob.get_p_work().get_works_since().get_m() << "." << bob.get_p_work().get_works_since().get_d() << "(works since), " << endl;

	adress adres;


	system("PAUSE");
	return 0;
}