// PascalTriangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

double factorial(double nr)
{
	double rez{1};
	for (int i = 1; i <= nr; i++) {
		rez *= i;
	}
	return rez;
}

double combinari(double n, double k)
{
	return factorial(n) / (factorial(k)*(factorial(n - k))); //Vezi formula cu coeficienti combinari (a+b)^n
}
int main()
{
	for (int j = 0; j < 20; j++) {
		for (int i = 0; i <= j; i++) {
			std::cout << combinari(j, i) << " ";
		}
		std::cout << std::endl;
	}


    return 0;
}

