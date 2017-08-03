/*
*Program Name:	fractionPatrickM.h
* Discussion:	Homework #4, Exercise #1
* Written By:	Patrick Martin
* Date:			2016/10/20
*/

#ifndef _FRACTIONPATRICKM_H
#define _FRACTIONPATRICKM_H

class Fraction {
public:
	Fraction(int, int);

	//Operations
	void print(void) const;
	int* extractUncommonDigit(void);

private:
	int num;
	int denom;
};
#endif