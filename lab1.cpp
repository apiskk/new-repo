Первая лабораторная работа:
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, p, S;

    cout << "Введите сторону a: ";
    cin >> a;

    cout << "Введите сторону b: ";
    cin >> b;

    cout << "Введите сторону c: ";
    cin >> c;

    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Площадь треугольника S = " << S << endl;

    return 0;
}
