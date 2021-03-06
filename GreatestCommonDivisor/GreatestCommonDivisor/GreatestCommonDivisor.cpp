// GreatestCommonDivisor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
int gcd(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}

int lcm(int a, int b)
{
	return (a*b) / gcd(a, b);
}

int gcdRecursive(int a, int b)
{
	if (b == 0)
		return a;
	else {
		return gcdRecursive(b, a%b);
	}
}




int main()
{
	std::cout<<gcd(100, 16)<<std::endl;
	std::cout<<gcdRecursive(100, 16)<<std::endl;
    return 0;
}

