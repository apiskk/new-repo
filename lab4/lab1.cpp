#include <iostream>
#include <fstream>
#include <cmath>
#include "labs.h"

using namespace std;

void lab1(ofstream& file) {
    double a, b, c, p, S;

    cout << "Лабораторная работа 1" << endl;

    cout << "Введите сторону a: ";
    cin >> a;

    cout << "Введите сторону b: ";
    cin >> b;

    cout << "Введите сторону c: ";
    cin >> c;

    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));

    file << "Лабораторная работа 1" << endl << endl;
    file << "Входные данные:" << endl << endl;
    file << "Сторона a = " << a << endl;
    file << "Сторона b = " << b << endl;
    file << "Сторона c = " << c << endl << endl;
    file << "Результат:" << endl << endl;
    file << "Площадь треугольника = " << S << endl << endl;
    file << "----------------------------------------" << endl << endl;
}