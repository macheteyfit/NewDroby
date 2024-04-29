#include <iostream>
#include "Drob.h" // Подключаем Drob.h для использования Fraction
#include "Complex.h"

using namespace std;


int main() {
    setlocale(LC_ALL, ""); // Установка локали для корректного отображения текста

    Fraction fraction1, fraction2;
    Complex complex1, complex2;

    cout << "Введите дробь 1:" << endl;
    fraction1.inputFraction();

    cout << "Введите дробь 2:" << endl;
    fraction2.inputFraction();

    cout << "Введите комплексное число 1 (вещественная мнимая):" << endl;
    double real, imaginary;
    cin >> real >> imaginary;
    complex1.setComplex(real, imaginary);

    cout << "Введите комплексное число 2 (вещественная мнимая):" << endl;
    cin >> real >> imaginary;
    complex2.setComplex(real, imaginary);

    Fraction sum = fraction1.add(fraction2);
    Fraction difference = fraction1.subtract(fraction2);
    Fraction product = fraction1.multiply(fraction2);
    Fraction quotient = fraction1.divide(fraction2);

    Complex complexSum = complex1 + complex2;
    Complex complexDifference = complex1 - complex2;
    Complex complexProduct = complex1 * complex2;
    Complex complexQuotient = complex1 / complex2;

    cout << "Сумма дробей: ";
    sum.printFraction();
    cout << endl;

    cout << "Разность дробей: ";
    difference.printFraction();
    cout << endl;

    cout << "Произведение дробей: ";
    product.printFraction();
    cout << endl;

    cout << "Частное дробей: ";
    quotient.printFraction();
    cout << endl;

    cout << "Сумма комплексных чисел: ";
    complexSum.printComplex();
    cout << endl;

    cout << "Разность комплексных чисел: ";
    complexDifference.printComplex();
    cout << endl;

    cout << "Произведение комплексных чисел: ";
    complexProduct.printComplex();
    cout << endl;

    cout << "Частное комплексных чисел: ";
    complexQuotient.printComplex();
    cout << endl;

    return 0;
}