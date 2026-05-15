#include <iostream>
#include <fstream>
#include "labs.h"

using namespace std;

void lab3(ofstream& file) {
    int from, to;
    int evenCount = 0;
    int oddCount = 0;

    cout << "Лабораторная работа 3" << endl;

    cout << "Введите начало диапазона: ";
    cin >> from;

    cout << "Введите конец диапазона: ";
    cin >> to;

    for (int i = from; i <= to; i++) {
        if (i % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    file << "Лабораторная работа 3" << endl << endl;
    file << "Входные данные:" << endl << endl;
    file << "Начало диапазона = " << from << endl;
    file << "Конец диапазона = " << to << endl << endl;
    file << "Результат:" << endl << endl;

    file << "Количество четных = " << evenCount << endl;

    file << "Четные: ";
    for (int i = from; i <= to; i++) {
        if (i % 2 == 0) {
            file << i;

            if (i + 2 <= to) {
                file << ",";
            }
        }
    }

    file << endl;

    file << "Количество нечетных = " << oddCount << endl;

    file << "Нечетные: ";
    for (int i = from; i <= to; i++) {
        if (i % 2 != 0) {
            file << i;

            if (i + 2 <= to) {
                file << ",";
            }
        }
    }

    file << endl << endl;
    file << "----------------------------------------" << endl << endl;
}