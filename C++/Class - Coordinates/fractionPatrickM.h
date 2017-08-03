/**
*program name: fractionPatrickM.h
*discussion:   Homework #6, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/11/17
*/

#ifndef FRACTIONPATRICKM_H
#define FRACTIONPATRICKM_H

class FractionPatrickM {
public:

	FractionPatrickM();
	FractionPatrickM(int, int); 
	FractionPatrickM(const FractionPatrickM&);

	~FractionPatrickM();

	// Opereations
	int getNum(void) const;
	void setNum(int);


	int getDenom(void) const;
	int setDenom(int);

	void updateNum(int n);
	void updateDenom(int d);

	void update(int del);
	void update(int n, int d);

	void print(void) const; // for homework 4
										   
	FractionPatrickM add(const FractionPatrickM& f) const;

	FractionPatrickM add(int) const;
	//FractionPatrickM add(int&) const;


	// Operator Functions
	FractionPatrickM operator+(const FractionPatrickM&) const;
	FractionPatrickM operator+(int) const;

	FractionPatrickM operator-(const FractionPatrickM&) const; //Rule of three

	FractionPatrickM operator=(const FractionPatrickM&);

private:
	int num;    
	int denom;  
};
#endif