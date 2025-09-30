#include "ForeignPassport.h"
#include <iostream>
using namespace std;

ForeignPassport::ForeignPassport(const string& s, const string& n, const string& sur, const string& nm, const string& bDate, const string& bPlace, const string& iDate, const string& iBy)
{
    series = s;
    number = n;
    surname = sur;
    name = nm;
    birthDate = bDate;
    birthPlace = bPlace;
    issueDate = iDate;
    issuedBy = iBy;
}

void ForeignPassport::addVisa(const Visa& v)
{
    visas.push_back(v);
}

void ForeignPassport::printForeignPassport()
{
    cout << "=== Foreign passport ===" << endl;
    cout << "Серія: " << series << endl;
    cout << "Номер: " << number << endl;
    cout << "Прізвище: " << surname << endl;
    cout << "Ім'я: " << name << endl;
    cout << "Дата народження: " << birthDate << endl;
    cout << "Місце народження: " << birthPlace << endl;
    cout << "Дата видачі: " << issueDate << endl;
    cout << "Видано: " << issuedBy << endl;
    cout << "--- Visa ---" << endl;
    if (visas.empty()) {
        cout << "No Visa" << endl;
    }
    else {
        for (auto& v : visas) {
            v.printVisa();
        }
    }
}
