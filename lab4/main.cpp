#include <iostream>
#include <fstream>
#include "labs.h"

using namespace std;

int main() {
    ofstream file("lab4.txt");

    lab1(file);
    lab2(file);
    lab3(file);

    file.close();

    cout << "Результаты записаны в файл lab4.txt" << endl;

    return 0;
}
