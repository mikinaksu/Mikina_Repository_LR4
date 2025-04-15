#include <iostream>
#include <map>
#include <string>
#include <functional>

using namespace std;

// Функция для ввода числа A
int EnterA() {
    //разрабатывается Ивановым П. - ветка branch_fun_1
    int A;
    cout << "Введите целое число A: ";
    cin >> A;
    return A;
}

// Функция для ввода числа B
int EnterB() {
    //разрабатывается Ивановым П. - ветка branch_fun_2
    int B;
    cout << "Введите целое число B: ";
    cin >> B;
    return B;
}

// Функция для ввода числа C
int EnterC() {
    //разрабатывается Ивановым П. - ветка branch_fun_3
    int C;
    cout << "Введите целое число C: ";
    cin >> C;
    return C;
}

// Функция для нахождения остатка от деления разности A и B на C
int CalcOstatok(int A, int B, int C) {
    //разрабатывается Ивановым A. - ветка branch_fun_4
    return (A - B) % C;
}

// Функция для нахождения целой части от деления A на сумму B и C
int CalcCelayaPart(int A, int B, int C) {
    //разрабатывается Сидоровым П. - ветка branch_fun_5
    return A / (B + C);
}

int main() {
    map<string, function<int()>> menu;

    // Заполнение меню функциями
    menu["EnterA"] = EnterA;
    menu["EnterB"] = EnterB;
    menu["EnterC"] = EnterC;

    int A = menu["EnterA"]();
    int B = menu["EnterB"]();
    int C = menu["EnterC"]();

    // Вычисление остатка
    int ostatok = CalcOstatok(A, B, C);
    cout << "Остаток от деления (A - B) % C = " << ostatok << endl;

    // Вычисление целой части
    int celayaPart = CalcCelayaPart(A, B, C);
    cout << "Целая часть от деления A / (B + C) = " << celayaPart << endl;

    return 0;
}

