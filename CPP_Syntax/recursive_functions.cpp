// This is RECURSIVE_FUNCTIONS.CPP file

#include "header.h"     // Подключение заголовочного файла

// Рекурсивное вычисление факториала
int factorial(int n) {
    if (n == 0)
        return 1;
    return factorial(n - 1) * n;
}

// Рекурсивное вычисление числа Фибоначчи
int fibonacci(int n) {
    if (n < 2)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


