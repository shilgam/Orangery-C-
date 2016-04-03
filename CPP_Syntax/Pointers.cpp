// This is POINTERS.CPP file

#include "header.h"     // Подключение заголовочного файла
#include <cstdio>       // для работы оператора "printf"


char pointer_conversion_int_char(int i) {
    const int *ip = &i;
    const unsigned char *cp = (unsigned char *)ip+3;  // Задаем смещение: [0..3]
    return *cp;
}

//Указатели: Преобразование 4byte --> 1byte
void pointer_conversation() {
    const int i = 0xff20ada0;
    const unsigned char c = pointer_conversion_int_char(i);
    std::cout << "Code =        " << (int)c << std::endl;
    std::cout << "ASCII symbol: " << c << std::endl;
    printf ("HEX code for   (int)i = %x\n", i);
    printf ("HEX code for  (char)c = %x\n", c);
}
