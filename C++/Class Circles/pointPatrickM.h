/**
*program name: pointPatrickM.h
*discussion:   Homework #7, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/12/08
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

	int getFXnum(void) const;
	int getFXdenom(void) const;
	int getFYnum(void) const;
	int getFYdenom(void) const;

	void updateFX(int);
	void updateFY(int);
	void updateFX(const FractionPatrickM&);
	void updateFY(const FractionPatrickM&);

	void moveBy(int);
	void moveBy(const FractionPatrickM&, const FractionPatrickM&);

	void flipByX(void);
	void flipByY(void);
	void flipThroughOrigin(void);

	friend ostream& operator<<(ostream&, const PointPatrickM&);

	PointPatrickM operator=(const PointPatrickM&);

private:
	FractionPatrickM fx;
	FractionPatrickM fy;
};

#endif


