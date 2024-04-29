#pragma once
#include <iostream>
class Complex {
private:
    double real;    // вещественная часть
    double imaginary;  // мнимая часть

public:
    // Конструкторы
    Complex();
    Complex(double re, double im);

    // Функции для установки значений вещественной и мнимой частей
    void setComplex(double re, double im);

    // Перегруженные операторы
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    // Функция для вывода комплексного числа
    void printComplex() const;
};
