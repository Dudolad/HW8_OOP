#include "Passport.h"
#include <iostream>
using namespace std;

Passport::Passport(const string& s, const string& n, const string& sur, const string& nm, const string& bDate, const string& bPlace, const string& iDate, const string& iBy, const string& pat, const string& res)
{
	series = s;
	number = n;
	surname = sur;
	name = nm;
	birthDate = bDate;
	birthPlace = bPlace;
	issueDate = iDate;
	issuedBy = iBy;
	patronymic = pat;
	residence = res;
}

Passport::Passport()
{
	series = "";
	number = "";
	surname = "";
	name = "";
	birthDate = "";
	birthPlace = "";
	issueDate = "";
	issuedBy = "";
	patronymic = "";
	residence = "";
}

void Passport::printInfo() const
{
	cout << "-----Паспорт-----" << endl;
	cout << "Серія: " << series << endl;
	cout << "Номер: " << number << endl;
	cout << "Прізвище: " << surname << endl;
	cout << "Ім'я: " << name << endl;
	cout << "По-батькові: " << patronymic << endl;
	cout << "Дата народження: " << birthDate << endl;
	cout << "Місце народження: " << birthPlace << endl;
	cout << "Дата видачі: " << issueDate << endl;
	cout << "Видано: " << issuedBy << endl;
	cout << "Прописка: " << residence << endl;

}

void Passport::setPatronymic(const string& pat)
{
	patronymic = pat;
}

string Passport::getPatronymic() const
{
	return patronymic;
}

void Passport::setResidence(const string& res)
{
	residence = res;
}

string Passport::getResidence() const
{
	return residence;
}
