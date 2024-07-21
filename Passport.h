#pragma once
#include <string>
using namespace std;

class Passport
{
protected:
	static string country;
	string FIO;
	string birthday;
	string identity_number;
	string expiry_date;
	int given_by;
	char gender;
public:
	Passport() = default;
	Passport(string _FIO, string _birthday, string _identity_number, string _expiry_date, int _given_by, char _gender);
	void show();
};

