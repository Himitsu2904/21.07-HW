#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(string _FIO, string _birthday, string _identity_number, string _expiry_date, int _given_by, char _gender, string _doc_number) : Passport(_FIO, _birthday, _identity_number, _expiry_date, _given_by, _gender)
{
	doc_number = _doc_number;
}

void ForeignPassport::Add_visa(string visa)
{
	visas.push_front(visa);
}

void ForeignPassport::Del_visa()
{
	visas.pop_back();
}

void ForeignPassport::Show()
{
	Passport::show();
	cout << "Document number: " << doc_number;
	cout << "\nVISAS:" << endl;
	list<string>::iterator i;
	for (i = visas.begin(); i != visas.end(); i++)
	{
		cout << *i << endl;
	}
}
