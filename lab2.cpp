Вторая лабораторная работа:
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double amount, years, percent;
    double percentPerMonth, monthPayments, fullAmount, overpayment;

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

    cout << "Ежемесячный платеж: " << monthPayments << endl;
    cout << "Итоговая сумма выплат: " << fullAmount << endl;
    cout << "Переплата по кредиту: " << overpayment << endl;

    return 0;
}
