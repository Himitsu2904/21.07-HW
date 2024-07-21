#include "Passport.h"
#include <iostream>
using namespace std;

string Passport::country = "Ukraine";

Passport::Passport(string _FIO, string _birthday, string _identity_number, string _expiry_date, int _given_by, char _gender)
{
	FIO = _FIO;
	birthday = _birthday;
	identity_number = _identity_number;
	expiry_date = _expiry_date;
	given_by = _given_by;
	gender = _gender;
}

void Passport::show()
{
	cout << "\t---Data about a citizen---";
	cout << "\nFIO: " << FIO;
	cout << "\nDate of birth: " << birthday;
	cout << "\nGender: " << gender;
	cout << "\nCountry: " << country;
	cout << "\nIdentity number: " << identity_number;
	cout << "\nDate of expiry: " << expiry_date;
	cout << "\nAuthority: " << given_by << endl;
}
