// This is a HEADER-file

#ifndef HEADER_H
#define HEADER_H


#include <iostream>           // Библиотека ввода-вывода

//SEE DEFINITIONS IN FILE:  "helloworld.cpp"
void print_char();                             //Вывод символов типа char
void echo();                                   //Вывод текста
void print_numbers();                          //Вывод чисел
void print_arithmetic_operations();            //Арифметические операции
void print_indefined_bihavior(int i1, int i2); //Пример неопределенного поведения
void loops();                 //Работа с циклами (FOR, WHILE) и условными операторами (IF)



//SEE DEFINITIONS IN FILE:   "pointers.cpp"
void pointer_conversation();               //Преобразование типа указателя от 4-байтного в 1-байтный
char pointer_conversion_int_char(int i);   //Преобразование типа указателя (вспом. ф-я)


//SEE DEFINITIONS IN FILE:   "standard_streams.cpp"
int standart_out();
void formatting_example_sin();             // Форматирование чисел на примере SIN
void get_method();                         // Организация посимвольного ввода


//SEE DEFINITIONS IN FILE:   "recursive_functions.cpp"
int factorial(int n);                      // Рекурсивное вычисление факториала
int fibonacci(int n);                      // Рекурсивное вычисление числа Фибоначчи

#endif // HEADER_H
