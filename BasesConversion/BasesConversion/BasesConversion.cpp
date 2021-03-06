// BasesConversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <stack>
#include <iostream>


std::string fromBase10toBaseB(int nr, int B)
{
	std::stack<std::string> s;
	std::string result;

	while (nr != 0)
	{
		switch(nr%B)
		{
			case 10:
				s.push("A");
				break;
			case 11:
				s.push("B");
				break;
			case 12:
				s.push("C");
				break;
			case 13:
				s.push("D");
				break;
			case 14:
				s.push("E");
				break;
			case 15:
				s.push("F");
				break;
			default:
				s.push(std::to_string(nr%B));
				break;
		}
		nr /= B;

	}
	while (!s.empty())
	{
		result.append(s.top());
		s.pop();
	}
	return result;
}


int fromBaseBtoBase10(std::string nr, int B)
{
	int result{ 0 };
	int j = 0;
	for (int i = nr.length()-1; i >= 0; i--)
	{
		switch (nr[i])
		{
		case 'A':
			result += 10 * pow(B, j);
			break;
		case 'B':
			result += 11 * pow(B, j);
			break;
		case 'C':
			result += 12 * pow(B, j);
			break;
		case 'D':
			result += 13 * pow(B, j);
			break;
		case 'E':
			result += 14 * pow(B, j);
			break;
		case 'F':
			result += 15 * pow(B, j);
			break;
		default:
			//std::cout << nr[i] - '0' << std::endl;
			result += (nr[i] - '0') * pow(B, j);
			break;
		}
		++j;
	}

	return result;
}


int main()
{
	std::cout<<fromBase10toBaseB(156, 16)<<std::endl;
	std::cout <<fromBaseBtoBase10("9C",16) << std::endl;
    return 0;
}

