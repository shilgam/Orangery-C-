// This is STANDART_STREAMS.CPP file

#include "header.h"     // Подключение заголовочного файла
using namespace std;
//#include <iomanip>      // Для форматирования вывода
#include <cmath>        // Для работы с тригонометрией

standart_out()
{
  int i = 65535;
  cout << "int (dec) " << dec << i << "\n";    // десятичное представление
  cout << "int (oct) " << oct << i << "\n";    // восьмеричное представление
  cout << "int (hex) " << hex << i << "\n\n";    // 16-ричное



  bool b = !true;
  cout << "bool (number): " << noboolalpha << b << "\n";  //Числовое представление
  cout << "bool (string): " << boolalpha << b << "\n\n";  //Строковое представление

  double d = 3.14;
  cout << "double " << d << "\n";
  cout << "double "  << d << "\n";

  const char *s = "C-style string";
  cout << "This is a \"" << s << "\"\n";





  cout << "\n\n";
  return 0;
}

//Форматирование выводимых чисел на примере
//вычисления значения y=sin(t) для t∈[0;1] с шагом 0,1
void formatting_example_sin() {
cout << fixed;
for (double t = 0; t<=1; t+=0.1) {
    cout.width(3);
    cout.precision(1);
    cout << t;
    cout.width(8);
    cout.precision(3);
    cout << sin(t) << endl;
}
}

//Организация посимвольного ввода
void get_method() {
    char c = '\0';       // Это просто инициализация переменной
    while (cin.get(c)) { // на каждой итерации считываем один символ в переменную c
        /* здесь можно пользоваться значением прочитанным в переменную c */
        if (c != 'a')
        cout << c; // выводим символ, если он не равен 'a'
    }
}
