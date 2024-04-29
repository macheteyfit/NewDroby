#pragma once
#include <iostream>
class Complex {
private:
    double real;    // ������������ �����
    double imaginary;  // ������ �����

public:
    // ������������
    Complex();
    Complex(double re, double im);

    // ������� ��� ��������� �������� ������������ � ������ ������
    void setComplex(double re, double im);

    // ������������� ���������
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    // ������� ��� ������ ������������ �����
    void printComplex() const;
};
