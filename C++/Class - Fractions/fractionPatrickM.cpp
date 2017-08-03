/**
* Program name: fractionPatrickM.cpp
* Discussion:	Homework #4, Exercise #1
* Written By:	Patrick Martin
* Date:			2016/10/20
*/


#include "fractionPatrickM.h"
#include <iostream>
using namespace std;



Fraction::Fraction(int n, int d) {
	
	cout << "\nA call to Fraction(int, int) was made to build a Fraction!";
	num = n;
	denom = d;

	cout << "\n  num : " << num
		<< "\n  denom : " << denom << "\n\n";
}

void Fraction::print() const {
	cout << "\nThe current Fraction object has"
		<< "\n  num : " << num 
		<< "\n  denom : " << denom << "\n\n";
}

int* Fraction::extractUncommonDigit() {
	int tmpN, tmpD;
	int* finalARAY = new int[10]();

	tmpN = (num < 0) ? -num : num;
	tmpD = (denom < 0) ? -denom : denom;

	do {
		*(finalARAY + (tmpN % 10)) = 1;
		tmpN /= 10;
	} while (tmpN != 0);

	do {
		if (*(finalARAY + (tmpD % 10)) == 0) {
			*(finalARAY + (tmpD % 10)) = 2;
			tmpD /= 10;
		}
		else if (*(finalARAY + (tmpD % 10)) == 1) {
			*(finalARAY + (tmpD % 10)) = -1;
			tmpD /= 10;
		}
		else {
			tmpD /= 10;
		}
	} while (tmpD != 0);

	for (int i = 0; i < 10; i++) {
		if ((*(finalARAY + i)) == -1) {
			(*(finalARAY + i)) = 0;
		}
	}

	return finalARAY;
}
