#include "Passport.h"
#include "ForeignPassport.h"
#include "Visa.h"
#include <windows.h>
#include <iostream>
using namespace std;

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    //----------------Паспорт----------------------
    Passport p("КА", "123456", "Шевченко", "Тарас",
        "11.2009", "м. Харкків", "01.01.1835", "Харківським РВ УМВС",
        "Григорович", "м. Київ");
    p.printInfo();

    cout << endl;

    //----------------Закордонний паспорт----------------------
    ForeignPassport fp("КВ", "654321", "Дудолад", "Ярослав",
        "11.07.2009", "м. Харків", "01.01.1840", "МЗС України");

    fp.addVisa(Visa("Франція", "01.01.2020", "07.01.2021"));
    fp.addVisa(Visa("Німеччина", "15.05.2021", "25.05.2022"));

    fp.printForeignPassport();

    return 0;
}