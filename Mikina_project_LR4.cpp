#include <iostream>
using namespace std;

function<void()> EnterNum(int& varLink, string label) 
{
    //разрабатывается Сидоровым С. - ветка branch_fun_1
    return [&varLink,label]() {
        cout << label << " = ";
        cin >> varLink;
    };
}
double EnterA() {
    //разрабатывается Ивановым П. - ветка branch_fun_2
}
double EnterB() {
    //разрабатывается Ивановым П. - ветка branch_fun_3
}
double EnterC() {
    //разрабатывается Ивановым П. - ветка branch_fun_4
}
double CalcOstatok(int num_a)
{
    //разрабатывается Петровым П. - ветка branch_fun_2
}
double CalcCelayaPart(int num_a) 
{
    //разрабатывается Василенко А. - ветка branch_fun_3
}

