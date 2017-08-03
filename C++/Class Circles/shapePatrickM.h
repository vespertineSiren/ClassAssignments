/**
*program name: shapePatrickM.h
*discussion:   Homework #7, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/12/08
*/

#ifndef SHAPEPATRICKM_H
#define SHAPEPATRICKM_H
#include "fractionPatrickM.h"

#include <iostream>
class ShapePatrickM {
public:
	virtual FractionPatrickM computeArea(void) = 0;
	virtual FractionPatrickM computePerimiter(void) = 0;

};


#endif