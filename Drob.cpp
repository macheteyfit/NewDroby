#include "Drob.h"

// ������������
Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

// ������� ��� ��������� �������� ��������� � �����������
void Fraction::setFraction(int num, int denom) {
    numerator = num;
    denominator = (denom != 0) ? denom : 1;
    if (denominator == 0) {
        std::cerr << "������: ����������� �� ����� ���� �������. ���������� ����������� � 1." << std::endl;
    }
}

// ������� ��� ����� ������ � ����������-�����
void Fraction::inputFraction() {
    std::cout << "������� ���������: ";
    std::cin >> numerator;
    std::cout << "������� �����������: ";
    std::cin >> denominator;
    denominator = (denominator != 0) ? denominator : 1;
    if (denominator == 0) {
        std::cerr << "������: ����������� �� ����� ���� �������. ���������� ����������� � 1." << std::endl;
    }
}

// ������� ��� ������ ����� � ���� "a/b"
void Fraction::printFraction() const {
    std::cout << numerator << "/" << denominator;
}

// ������� ��� �������� ������
Fraction Fraction::add(const Fraction& other) const {
    int resultNumerator = numerator * other.denominator + other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

// ������� ��� ��������� ������
Fraction Fraction::subtract(const Fraction& other) const {
    int resultNumerator = numerator * other.denominator - other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

// ������� ��� ��������� ������
Fraction Fraction::multiply(const Fraction& other) const {
    int resultNumerator = numerator * other.numerator;
    int resultDenominator = denominator * other.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

// ������� ��� ������� ������
Fraction Fraction::divide(const Fraction& other) const {
    if (other.numerator != 0) {
        int resultNumerator = numerator * other.denominator;
        int resultDenominator = denominator * other.numerator;
        return Fraction(resultNumerator, resultDenominator);
    }
    else {
        std::cerr << "������: ������� �� ����." << std::endl;
        return Fraction();
    }
}
