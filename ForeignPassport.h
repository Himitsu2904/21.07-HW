#pragma once
#include "Passport.h"
#include <list>
#include <iostream>
using namespace std;

class ForeignPassport: public Passport
{
	string doc_number;
	list<string> visas;
public:
	ForeignPassport(string _FIO, string _birthday, string _identity_number, string _expiry_date, int _given_by, char _gender, string _doc_number);
	void Add_visa(string visa);
	void Del_visa();
	void Show();
};

