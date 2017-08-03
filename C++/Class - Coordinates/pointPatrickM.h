/**
*program name: pointPatrickM.h
*discussion:   Homework #6, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/11/17
*/

#ifndef POINTPATRICKM_H
#define POINTPATRICKM_H
#include <iostream>
#include "fractionPatrickM.h"

using namespace std;

class PointPatrickM {
public:
	PointPatrickM(int, int, int, int);
	PointPatrickM(const PointPatrickM&);

	int getQuadrant(void);
	int getQuadrant(const PointPatrickM&);

	void moveBy(int);
	void moveBy(const FractionPatrickM&, const FractionPatrickM&);

	void flipByX(void);
	void flipByY(void);
	void flipThroughOrigin(void);

	void print(void);

	PointPatrickM operator=(const PointPatrickM&);

private:
	FractionPatrickM fx;
	FractionPatrickM fy;
};

#endif


