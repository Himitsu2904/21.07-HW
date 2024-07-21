#include <iostream>
#include "ForeignPassport.h"
using namespace std;

int main()
{
	ForeignPassport fpass("Federenko Oleg Vasiliyovich", "03.06.1987", "3476921955", "22.12.2027", 5115, 'M', "GE347194");
	fpass.Add_visa("USA (work)");
	fpass.Add_visa("Canada (tour)");
	fpass.Add_visa("Australia (tour)");
	fpass.Show();
	cout << endl;
	fpass.Del_visa();
	fpass.Show();
}