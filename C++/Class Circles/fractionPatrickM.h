/**
*program name: fractionPatrickM.h
*discussion:   Homework #7, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/12/08
*/

#ifndef FRACTIONPATRICKM_H
#define FRACTIONPATRICKM_H
#include <iostream>
using namespace std;

class FractionPatrickM {
public:

	FractionPatrickM();
	FractionPatrickM(int, int); 
	FractionPatrickM(const FractionPatrickM&);

	~FractionPatrickM();

	// Opereations
	int getNum(void) const;


	int getDenom(void) const;

	void updateNum(int n);
	void updateDenom(int d);

	void update(int del);
	void print(void) const;
										   
	FractionPatrickM add(const FractionPatrickM& f) const;

	FractionPatrickM add(int) const;
	

	// Operator Functions
	FractionPatrickM operator+(const FractionPatrickM&) const;
	FractionPatrickM operator*(const FractionPatrickM&) const;
	FractionPatrickM operator=(const FractionPatrickM&);

	friend ostream& operator<<(ostream&, const FractionPatrickM&);

private:
	int num;    
	int denom;  
};
#endif