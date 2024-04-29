#pragma once
#include <iostream>

class Fraction {
private:
    int numerator;   // ���������
    int denominator; // �����������

public:
    // ������������
    Fraction();
    Fraction(int num, int denom);

    // ������� ��� ��������� �������� ��������� � �����������
    void setFraction(int num, int denom);

    // ������� ��� ����� � ������ �����
    void inputFraction();
    void printFraction() const;

    // �������������� ��������
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;
};
