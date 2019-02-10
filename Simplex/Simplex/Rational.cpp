#include "stdafx.h"
#include "Rational.h"


Rational::Rational()
{
	this->numerator = 0;
	this->denominator = 1;
}

Rational::Rational(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}


Rational::~Rational()
{
}

static int gcd(int a, int b)
{
	a = std::abs(a);
	b = std::abs(b);
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else 
		{
			b = b - a;
		}
	}
	return a;
}

Rational Rational::irreducible(Rational &a)
{
	int gcdNr = gcd(a.getNumerator(), a.getDenominator());
	a.setNumerator(a.getNumerator() / gcdNr);
	a.setDenominator(a.getDenominator() / gcdNr);
	return a;
}


Rational Rational::add(Rational a, Rational b)
{
	Rational c = Rational();
	c.setNumerator((a.getNumerator() * b.getDenominator())+( b.getNumerator() * a.getDenominator()));
	c.setDenominator(a.getDenominator() * b.getDenominator());
	irreducible(c);
	return c;
}

Rational Rational::substract(Rational a, Rational b)
{
	Rational c = Rational();
	c.setNumerator((a.getNumerator() * b.getDenominator())-(b.getNumerator() * a.getDenominator()));
	c.setDenominator(a.getDenominator() * b.getDenominator());
	irreducible(c);
	return c;
}
