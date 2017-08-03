/**
*program name: fractionPatrickM.cpp
*discussion:   Homework #6, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/11/17
*/

#include "fractionPatrickM.h"
#include <iostream>
using namespace std;

FractionPatrickM::FractionPatrickM() {
	num = 0;
	num = 1;
}

FractionPatrickM::FractionPatrickM(int n, int d) {
	num = n;
	denom = d;
}

//This is the copy constructor
FractionPatrickM::FractionPatrickM(const FractionPatrickM& that) {
	num = that.num;
	denom = that.denom;
}

FractionPatrickM::~FractionPatrickM() {
}

int FractionPatrickM::getNum() const {
	return num;
}

void FractionPatrickM::setNum(int n) {
	//TODO
}

void FractionPatrickM::print() const {
	cout << "\n num: " << num
		<< "\n denom: " << denom << endl;
}


int FractionPatrickM::getDenom() const {
	return denom;
}

int FractionPatrickM::setDenom(int d) {
	//TODO
	return denom;
}

void FractionPatrickM::updateNum(int n) {
	num = n;
}

void FractionPatrickM::updateDenom(int d) {
	denom = d;
}

void FractionPatrickM::update(int del) {
	num += denom * del;

}

void FractionPatrickM::update(int n, int d) {

}



FractionPatrickM FractionPatrickM::add(const FractionPatrickM& f) const {
	return FractionPatrickM(num * f.denom + denom * f.num,
		denom * f.denom);

}

FractionPatrickM FractionPatrickM::operator+(const FractionPatrickM& f) const {
	return FractionPatrickM(num * f.denom + denom * f.num,
		denom * f.denom);

}

FractionPatrickM FractionPatrickM::operator=(const FractionPatrickM& f) {
	num = f.num;
	denom = f.denom;

	//return f; // This f is an object. A copy of f must be made. 
	return FractionPatrickM(f); // return an anonymous FractionPatrickM. You are calling the copy constructor. 
}


/*FractionPatrickM operator (const FractionPatrickM& f1, const FractionPatrickM& f2) {
//DO this later
}
*/

//ostream& operator<<(ostream& o, const FractionPatrickM& f) {
//
//	o << ""
//
//	return o;
//}