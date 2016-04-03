//This is HelloWorld.CPP file
#include "header.h"     // Подключение заголовочного файла
#include <string>
using namespace std;    // Указание пространства имен

void print_char()
{
    char doctor_id = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Code: " << (int) doctor_id << "     " << doctor_id << endl;
        doctor_id++;
    }
    cout << endl;
}
void echo()
{
    string patient_name;
    cout << "Please Enter Your Name: " << endl;
    cin >> patient_name;
    cout << "Hello, " << patient_name << endl;
}
void print_numbers()
{
    bool boolean = true;
    boolean = ! boolean;
    cout << "Boolean:           " << boolean << endl;

    short int max_short_int = -32768;
    cout << "Max_short_int:     " << max_short_int << endl;

    int max_int = -2147483648;
    cout << "Max_int:           " << max_int << endl;

    long int max_long_int = -2147483648;
    cout << "Max_long_int:      " << max_long_int << endl;

    //double max_double =
}
void print_arithmetic_operations()
{
    int i;
    i = 13 % 7;         // Взятие остатка от деления
    cout << "Modulo operation:  " << i << endl;

    i = 0;
    int k = i++;        // Постфиксный инкремент возвращает старое значение
    cout << "i++     i = " << i << "   k = " << k << endl;

    i = 2;
    k = 3;
    double d = (double)i/k;    // Приведение типов
    cout << "Division of integers:  " << d << endl;
}
void print_indefined_bihavior(int i1, int i2)
{
    cout << i1 << i2 << endl;
}
void loops()
{
    int k = 0;

    //Условный оператор IF
    if (true) {
            cout << "Is Done, decause True." << endl;
            }

    //  Циклический оператор FOR
    for (k = 0; k < 3; k++) {
        cout << "   " << k << endl;
    }


    // Циклический оператор WHILE
    k = 0;
    while (k < 3) {
        cout << k << endl;
        k++;
    }

    // Циклический оператор DO - WHILE
    // Условие проверяется ПОСЛЕ итерации
    k = 0;
    do {
        cout << " " << k << endl;
        ++k;
    } while (k < 3);

}
