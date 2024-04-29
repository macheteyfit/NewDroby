#include "Drob.h"

// Конструкторы
Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

// Функция для установки значения числителя и знаменателя
void Fraction::setFraction(int num, int denom) {
    numerator = num;
    denominator = (denom != 0) ? denom : 1;
    if (denominator == 0) {
        std::cerr << "Ошибка: Знаменатель не может быть нулевым. Установлен знаменатель в 1." << std::endl;
    }
}

// Функция для ввода данных в переменные-члены
void Fraction::inputFraction() {
    std::cout << "Введите числитель: ";
    std::cin >> numerator;
    std::cout << "Введите знаменатель: ";
    std::cin >> denominator;
    denominator = (denominator != 0) ? denominator : 1;
    if (denominator == 0) {
        std::cerr << "Ошибка: Знаменатель не может быть нулевым. Установлен знаменатель в 1." << std::endl;
    }
}

// Функция для вывода дроби в виде "a/b"
void Fraction::printFraction() const {
    std::cout << numerator << "/" << denominator;
}

// Функция для сложения дробей
Fraction Fraction::add(const Fraction& other) const {
    int resultNumerator = numerator * other.denominator + other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

// Функция для вычитания дробей
Fraction Fraction::subtract(const Fraction& other) const {
    int resultNumerator = numerator * other.denominator - other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

// Функция для умножения дробей
Fraction Fraction::multiply(const Fraction& other) const {
    int resultNumerator = numerator * other.numerator;
    int resultDenominator = denominator * other.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

// Функция для деления дробей
Fraction Fraction::divide(const Fraction& other) const {
    if (other.numerator != 0) {
        int resultNumerator = numerator * other.denominator;
        int resultDenominator = denominator * other.numerator;
        return Fraction(resultNumerator, resultDenominator);
    }
    else {
        std::cerr << "Ошибка: Деление на ноль." << std::endl;
        return Fraction();
    }
}
