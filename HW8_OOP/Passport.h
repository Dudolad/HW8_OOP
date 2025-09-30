#pragma once
#include <string>	
using namespace std;

class Passport
{
protected:
	string series;
	string number;
	string surname;
	string name;
	string birthDate;
	string birthPlace;
	string issueDate;
	string issuedBy;

private:
	string patronymic;  
	string residence;

public:
	Passport(const string& s, const string& n, const string& sur, const string& nm,
		const string& bDate, const string& bPlace, const string& iDate,
		const string& iBy, const string& pat, const string& res);

	Passport();

	void printInfo() const;

	void setPatronymic(const string& pat);
	string getPatronymic() const;

	void setResidence(const string& res);
	string getResidence() const;

};

