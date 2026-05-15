#include <iostream>
#include <fstream>
#include <cmath>
#include "labs.h"

using namespace std;

void lab2(ofstream& file) {
    double amount, years, percent;
    double percentPerMonth, monthPayments, fullAmount, overpayment;

    cout << "Лабораторная работа 2" << endl;

    cout << "Введите сумму кредита: ";
    cin >> amount;

    cout << "Введите количество лет: ";
    cin >> years;

    cout << "Введите процент: ";
    cin >> percent;

    percentPerMonth = percent / 100 / 12;

    monthPayments = amount * percentPerMonth /
        (1 - pow(1 + percentPerMonth, years * -12));

    fullAmount = monthPayments * years * 12;
    overpayment = fullAmount - amount;

    file << "Лабораторная работа 2" << endl << endl;
    file << "Входные данные:" << endl << endl;
    file << "Сумма кредита = " << amount << endl;
    file << "Количество лет = " << years << endl;
    file << "Процент = " << percent << endl << endl;
    file << "Результат:" << endl << endl;
    file << "Ежемесячный платеж = " << monthPayments << endl;
    file << "Итоговая сумма выплат = " << fullAmount << endl;
    file << "Переплата по кредиту = " << overpayment << endl << endl;
    file << "----------------------------------------" << endl << endl;
}