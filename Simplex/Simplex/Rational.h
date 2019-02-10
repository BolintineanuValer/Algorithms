#pragma once

#include<iostream>
#include<math.h>

class Rational
{
private:
	int numerator;
	int denominator;
public:
	Rational();
	Rational(int numerator, int denominator);
	~Rational();
	Rational add(Rational a, Rational b);
	Rational substract(Rational a, Rational b);
	//Rational multiply(Rational a, Rational b);
	//Rational divide(Rational a, Rational b);
	Rational irreducible(Rational &a);
	static void print(Rational a) {
		std::cout << a.numerator << "/" << a.denominator<<std::endl;
	};
	int getNumerator() { return this->numerator; };
	int getDenominator() { return this->denominator; };
	void setNumerator(int numerator) { this->numerator = numerator; };
	void setDenominator(int denominator) { this->denominator = denominator; };
	//static int gcd(int a, int b);

};

