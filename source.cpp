#include "stdafx.h"
#include <iostream>
#include <string>
#include "Fraction.h"
int main()
{
	Fraction a, d;
	Fraction c;
	a.numerator = 2;
	a.denominator = 3;
	d.numerator = 1;
	d.denominator = 2;
	c.numerator = (a.numerator * d.denominator + d.numerator * a.denominator);
	c.denominator = (a.denominator * d.denominator);

	
}

void printFraction(Fraction b)
{
	std::cout << b.numerator << "/" << b.denominator << std::endl;
}

int main()
{
	Fraction b;
	b.numerator = 1;
	b.denominator = 2;
	printFraction(b);
		return 0;
}

