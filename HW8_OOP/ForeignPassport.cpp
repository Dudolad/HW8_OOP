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
    cout << "����: " << series << endl;
    cout << "�����: " << number << endl;
    cout << "�������: " << surname << endl;
    cout << "��'�: " << name << endl;
    cout << "���� ����������: " << birthDate << endl;
    cout << "̳��� ����������: " << birthPlace << endl;
    cout << "���� ������: " << issueDate << endl;
    cout << "������: " << issuedBy << endl;
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
