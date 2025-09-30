#include <string>
using namespace std;
#pragma once
class Visa
{
protected:
    string country;
    string openDate;
    string closeDate;
public:
    Visa(const string& c, const string& o, const string& cl);
    void printVisa() const;

    void setCountry(const string& c);
    string getCountry() const;

    void setOpenDate(const string& o);
    string getOpenDate() const;

    void setCloseDate(const string& cl);
    string getCloseDate() const;
};

