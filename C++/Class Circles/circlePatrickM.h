/**
*program name: circlePatrickM.h
*discussion:   Homework #7, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/12/08
*/

#ifndef CIRCLEPATRICKM_H
#define CIRCLEPATRICKM_H
#include <iostream>
#include "shapePatrickM.h"
#include "fractionPatrickM.h"
#include "pointPatrickM.h"
using namespace std;

class CirclePatrickM : public ShapePatrickM {
public:

	CirclePatrickM(int, int, int, int, int, int);
	CirclePatrickM(const CirclePatrickM&);

	~CirclePatrickM();

	FractionPatrickM computeArea(void);
	FractionPatrickM computePerimiter(void);

	void displaycircles(void);

	void positioning(CirclePatrickM);

	void moveHorizontallyBy(int);
	void moveVerticallyBy(int);

	void moveHorizontallyBy(const FractionPatrickM&);
	void moveVerticallyBy(const FractionPatrickM&);

	void compareArea(CirclePatrickM);
	void comparePerimiter(CirclePatrickM);
	


private:
	FractionPatrickM* r; //radius with no negative values
	PointPatrickM* c; //center

};

#endif