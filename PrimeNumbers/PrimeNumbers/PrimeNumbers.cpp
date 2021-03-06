// PrimeNumbers.cpp : Defines the entry point for the console application.
//
// PrimeNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<chrono>


bool isPrimeUpToNr(int nr)
{
	int counter{ 0 };
	if (nr > 1)
	{
		for (int i = 1; i <= nr; i++)
		{
			if (nr%i == 0)
			{
				++counter;
			}
		}
		if (2 == counter)
		{
			//std::cout << nr << " is prime" << std::endl;
			return 0;
		}
	}
	//std::cout << nr << " is not prime" << std::endl;
	return -1;

}

bool isPrimeUpToHalf(int nr)
{
	int counter{ 0 };
	if (nr > 1)
	{
		for (int i = 1; i <= nr / 2; i++)
		{
			if (nr%i == 0)
			{
				++counter;
			}
		}
		if (1 == counter)
		{
			//std::cout << nr << " is prime" << std::endl;
			return 0;
		}
	}
	//std::cout << nr << " is not prime" << std::endl;
	return -1;

}

bool isPrimeUpToSqrt(int nr)
{
	int counter{ 0 };
	if (nr > 1)
	{
		for (int i = 2; i*i <= nr; i++)
		{
			if (nr%i == 0)
			{
				++counter;
			}
		}
		if (0 == counter)
		{
			//std::cout << nr << " is prime" << std::endl;
			return 0;
		}
	}
	//std::cout << nr << " is not prime" << std::endl;
	return -1;

}



void printPrimes(int nr)
{
	int counter{ 0 };
	for (int i = 0; i <= nr; i++) {
		if (isPrimeUpToSqrt(i) == 0) {
			counter++;
		}
	}
	std::cout << "Nr of primes: " << counter << std::endl;
}







int main()
{
	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
	isPrimeUpToNr(100000); //10^5
	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
	auto durationUpToNr = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count(); //nanoseconds, microseconds, miliseconds, seconds, minutes, hours
	std::cout << durationUpToNr << " nanoseconds" << std::endl;
	std::cout << durationUpToNr / 1000 << " microseconds" << std::endl;
	std::cout << durationUpToNr / 1000000 << " miliseconds" << std::endl;
	std::cout << durationUpToNr / 1000000000 << " seconds" << std::endl;

	std::chrono::high_resolution_clock::time_point t3 = std::chrono::high_resolution_clock::now();
	isPrimeUpToHalf(100000); //10^5
	std::chrono::high_resolution_clock::time_point t4 = std::chrono::high_resolution_clock::now();
	auto durationUpToHalf = std::chrono::duration_cast<std::chrono::nanoseconds>(t3 - t4).count(); //nanoseconds, microseconds, miliseconds, seconds, minutes, hours
	std::cout << durationUpToHalf << " nanoseconds" << std::endl;
	std::cout << durationUpToHalf / 1000 << " microseconds" << std::endl;
	std::cout << durationUpToHalf / 1000000 << " miliseconds" << std::endl;
	std::cout << durationUpToHalf / 1000000000 << " seconds" << std::endl;

	std::chrono::high_resolution_clock::time_point t5 = std::chrono::high_resolution_clock::now();
	isPrimeUpToSqrt(100000); //10^5
	std::chrono::high_resolution_clock::time_point t6 = std::chrono::high_resolution_clock::now();
	auto durationUpToSqrt = std::chrono::duration_cast<std::chrono::nanoseconds>(t5 - t6).count(); //nanoseconds, microseconds, miliseconds, seconds, minutes, hours
	std::cout << durationUpToSqrt << " nanoseconds" << std::endl;
	std::cout << durationUpToSqrt / 1000 << " microseconds" << std::endl;
	std::cout << durationUpToSqrt / 1000000 << " miliseconds" << std::endl;
	std::cout << durationUpToSqrt / 1000000000 << " seconds" << std::endl;


	return 0;
}

