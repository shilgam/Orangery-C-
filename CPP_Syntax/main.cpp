//This is MAIN.CPP file

#include "header.h"     // Подключение заголовочного файла

int main()
{

    //Вывод текста
    //echo();

    //Вывод символов типа char
    //print_char();

    //Вывод чисел
    //print_numbers();

    //Арифметические операции
    //print_arithmetic_operations();

    //int i = 0;
    //Пример неопределенного поведения
    //print_indefined_bihavior(i++, ++i); //Порядок внутри инструкций не определен

    //Работа с циклами (FOR, WHILE) и условными операторами (IF)
    //loops();

    //Преобразование типа указателя от 4-байтного в 1-байтный
    //pointer_conversation();



    //standart_out();             //Потоки ввода-вывода (см. 1.7 ч.1 - step 14)
    //formatting_example_sin();   // Форматирование чисел на примере SIN
    //get_method();


    // Рекурсивное вычисление факториала      (1, 1, 2, 6, 24, 120, 720, 5040)
    int num = 6;
    std::cout << "Factorial of  " << num << " = ";
    std::cout << factorial(num) << std::endl;
    // Рекурсивное вычисление числа Фибоначчи (0, 1, 1, 2, 3,  5,   8,   13  )
    std::cout << "Fibbonacci of " << num << " = ";
    std::cout << fibonacci(num) << std::endl;
    return 0;
}
