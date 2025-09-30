#include "Passport.h"
#include "ForeignPassport.h"
#include "Visa.h"
#include <windows.h>
#include <iostream>
using namespace std;

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    //----------------�������----------------------
    Passport p("��", "123456", "��������", "�����",
        "11.2009", "�. ������", "01.01.1835", "���������� �� ����",
        "����������", "�. ���");
    p.printInfo();

    cout << endl;

    //----------------����������� �������----------------------
    ForeignPassport fp("��", "654321", "�������", "�������",
        "11.07.2009", "�. �����", "01.01.1840", "��� ������");

    fp.addVisa(Visa("�������", "01.01.2020", "07.01.2021"));
    fp.addVisa(Visa("ͳ�������", "15.05.2021", "25.05.2022"));

    fp.printForeignPassport();

    return 0;
}