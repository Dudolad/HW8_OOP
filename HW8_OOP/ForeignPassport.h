#pragma once
#include "Passport.h"
#include "Visa.h"
#include <vector>
using namespace std;
class ForeignPassport : public Passport
{
private:
	vector<Visa> visas;
public:
	ForeignPassport(const string& s, const string& n, const string& sur, const string& nm,const string& bDate,
		const string& bPlace, const string& iDate, const string& iBy);

	void addVisa(const Visa& v);
	void printForeignPassport();
};

