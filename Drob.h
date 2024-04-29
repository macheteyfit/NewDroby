#pragma once
#include <iostream>

class Fraction {
private:
    int numerator;   // числитель
    int denominator; // знаменатель

public:
    // Конструкторы
    Fraction();
    Fraction(int num, int denom);

    // Функции для установки значения числителя и знаменателя
    void setFraction(int num, int denom);

    // Функции для ввода и вывода дроби
    void inputFraction();
    void printFraction() const;

    // Арифметические операции
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;
};
