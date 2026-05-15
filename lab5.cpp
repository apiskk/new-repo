Пятая лабораторная работа:
#include <iostream>
#include <string>

using namespace std;

struct Student {
    string Fio;
    int Age;
    string Group;
};

template <typename T>
void PrintToConsole(T value) {
    cout << value << endl;
}

template <typename T, int N>
void PrintToConsole(T (&arr)[N]) {
    for (int i = 0; i < N; i++) {
        cout << arr[i];

        if (i != N - 1) {
            cout << "\t";
        }
    }

    cout << endl;
}

template <typename T, int N, int M>
void PrintToConsole(T (&arr)[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j];

            if (j != M - 1) {
                cout << "\t";
            }
        }

        cout << endl;
    }
}

void PrintToConsole(Student student) {
    cout << "ФИО: " << student.Fio << endl;
    cout << "Возраст: " << student.Age << endl;
    cout << "Группа: " << student.Group << endl;
}

template <int N, int M>
void PrintToConsole(Student (&students)[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "Студент [" << i << "][" << j << "]:" << endl;
            PrintToConsole(students[i][j]);
            cout << endl;
        }
    }
}

int main() {
    int number = 1;
    double d = 3.14;
    char ch = 'A';
    string text = "Hello";

    int arr[3] = {1, 2, 3};

    int arr2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Student student = {"Иванов Иван Иванович", 18, "ИО-2020"};

    Student students[2][2] = {
        {
            {"Иванов Иван Иванович", 18, "ИО-2020"},
            {"Петров Петр Петрович", 19, "ИО-2021"}
        },
        {
            {"Сидоров Сидор Сидорович", 20, "ИО-2022"},
            {"Алексеев Алексей Алексеевич", 21, "ИО-2023"}
        }
    };

    PrintToConsole(number);
    PrintToConsole(d);
    PrintToConsole(ch);
    PrintToConsole(text);

    PrintToConsole(arr);
    PrintToConsole(arr2D);
    PrintToConsole(student);
    PrintToConsole(students);

    return 0;
}
