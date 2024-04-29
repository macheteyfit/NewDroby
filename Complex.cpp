#include "Complex.h"
#include <iostream>
// Конструкторы
Complex::Complex() : real(0.0), imaginary(0.0) {}

Complex::Complex(double re, double im) : real(re), imaginary(im) {}

// Функция для установки значений вещественной и мнимой частей
void Complex::setComplex(double re, double im) {
    real = re;
    imaginary = im;
}

// Перегруженные операторы
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex(real * other.real - imaginary * other.imaginary, real * other.imaginary + imaginary * other.real);
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real * other.real + other.imaginary * other.imaginary;
    return Complex((real * other.real + imaginary * other.imaginary) / denominator,
        (imaginary * other.real - real * other.imaginary) / denominator);
}

// Функция для вывода комплексного числа
void Complex::printComplex() const {
    std::cout << "(" << real << " + " << imaginary << "i)";
}
