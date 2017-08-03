/**
*program name: circlePatrickM.cpp
*discussion:   Homework #7, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/12/08
*/


#include <iostream>
#include "circlePatrickM.h"
#include "circleUtilityPatrickM.h"
using namespace std;



CirclePatrickM::CirclePatrickM(int rx, int ry, int cnx, int cdx, int cny, int cdy) :
	r(new FractionPatrickM(rx, ry)), c(new PointPatrickM(cnx, cdx, cny, cdy)) {
} //Initialization 

CirclePatrickM::CirclePatrickM(const CirclePatrickM& ref) : r(ref.r), c(ref.c) {
}

CirclePatrickM::~CirclePatrickM() {
}

FractionPatrickM CirclePatrickM::computePerimiter() {
	return ((FractionPatrickM(2, 1)) * (FractionPatrickM(157, 50)) * (*r));
}

FractionPatrickM CirclePatrickM::computeArea() {
	return (FractionPatrickM(((*r) * (*r))) * (FractionPatrickM(157, 50)));
}

void CirclePatrickM::displaycircles() {
	cout << "\n          Center: " << *c
		<< "\n          Radius: " << *r; 
}

void CirclePatrickM::positioning(CirclePatrickM c2) {
	double radius1, radius2, absRadius, deltaX, deltaY, distance, tmp;

	radius1 = double(r->getNum()) / double(r->getDenom());
	radius2 = double(c2.r->getNum()) / double(c2.r->getDenom());

	deltaX = (double(c2.c->getFXnum()) / double(c2.c->getFXdenom())) - 
		(double(c->getFXnum()) / double(c->getFXdenom()));
	
	deltaY = (double(c2.c->getFYnum()) / double(c2.c->getFYdenom())) -
		(double(c->getFYnum()) / double(c->getFYdenom()));
	
	tmp = (deltaX * deltaX) + (deltaY * deltaY);
	distance = sqrt(tmp);

	absRadius = radius1 - radius2;
	absRadius = (absRadius < 0) ? -absRadius : absRadius;

	if (distance > (radius1 + radius2)) {
		cout << "\n      Circle 1 and Circle 2 are completely disjoiunted." << endl;
	} else if (distance <= absRadius) {
		cout << "\n      Circle 2 is inside Circle 1." << endl;
	} else {
		cout << "\n      Circle 1 and Circle 2 are overlapping." << endl;
	}

}

void CirclePatrickM::moveHorizontallyBy(int n) {
	c->updateFX(n);
}

void CirclePatrickM::moveVerticallyBy(int n) {
	c->updateFY(n);
}

void CirclePatrickM::moveHorizontallyBy(const FractionPatrickM& userFraction) {
	c->updateFX(userFraction);
}

void CirclePatrickM::moveVerticallyBy(const FractionPatrickM& userFraction) {
	c->updateFY(userFraction);
}

void CirclePatrickM::compareArea(CirclePatrickM c2) {
	FractionPatrickM circ1Area = computeArea();
	FractionPatrickM circ2Area = c2.computeArea();

	if (circ1Area.getNum() < circ2Area.getNum()) {
		cout << "\n\n      Circle 2 has a larger area than Circle 1." << endl;
	} else {
		cout << "\n\n      Circle 1 has a larger area than Circle 2." << endl;
	}
}

void CirclePatrickM::comparePerimiter(CirclePatrickM c2) {
	FractionPatrickM circ1Peri = computePerimiter();
	FractionPatrickM circ2Peri = c2.computePerimiter();

	if (circ1Peri.getNum() < circ2Peri.getNum()) {
		cout << "\n\n      Circle 2 has a larger perimeter than Circle 1." << endl;
	}
	else {
		cout << "\n\n      Circle 1 has a larger perimiter than Circle 2." << endl;
	}
}