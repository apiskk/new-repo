Третья лабораторная работа:
#include <iostream>

using namespace std;

int main() {
    int from, to;
    int evenCount = 0;
    int oddCount = 0;

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

    cout << "Количество четных: " << evenCount << endl;

    cout << "Четные: ";
    for (int i = from; i <= to; i++) {
        if (i % 2 == 0) {
            cout << i;

            if (i + 2 <= to) {
                cout << ",";
            }
        }
    }

    cout << endl;

    cout << "Количество нечетных: " << oddCount << endl;

    cout << "Нечетные: ";
    for (int i = from; i <= to; i++) {
        if (i % 2 != 0) {
            cout << i;

            if (i + 2 <= to) {
                cout << ",";
            }
        }
    }

    cout << endl;

    return 0;
}
