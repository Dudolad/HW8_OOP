#include "Visa.h"
#include <iostream>
using namespace std;

Visa::Visa(const string& c, const string& o, const string& cl)
{
    country = c;
    openDate = o;
    closeDate = cl;
}

void Visa::printVisa() const
{
    cout << "Visa: " << country<< " | Open: " << openDate<< " | Close: " << closeDate << endl;
}

void Visa::setCountry(const string& c)
{
    country = c;
}

string Visa::getCountry() const
{
    return country; 
}

void Visa::setOpenDate(const string& o)
{
    openDate = o;
}

string Visa::getOpenDate() const
{
    return openDate;
}

void Visa::setCloseDate(const string& cl)
{
    closeDate = cl;
}

string Visa::getCloseDate() const
{
    return closeDate;
}
