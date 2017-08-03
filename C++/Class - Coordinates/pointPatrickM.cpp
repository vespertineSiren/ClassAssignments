
/**
*program name: pointPatrickM.cpp
*discussion:   Homework #6, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/11/17
*/

#include <iostream>
#include "pointPatrickM.h"
using namespace std;


PointPatrickM::PointPatrickM(int nx, int dx, int ny, int dy) : fx(nx, ny), fy(dx, dy) {
	} // initialization list. 

PointPatrickM::PointPatrickM(const PointPatrickM& ref) : fx(ref.fx), fy(ref.fy) {

	}

int PointPatrickM::getQuadrant() {
		if (fx.getNum() > 0 && fy.getNum() > 0) {
			return 1;
		}
		else if (fx.getNum() < 0 && fy.getNum() > 0) {
			return 2;
		}
		else if (fx.getNum() < 0 && fy.getNum() < 0) {
			return 3;
		}
		else if (fx.getNum() > 0 && fy.getNum() < 0) {
			return 4;
		}
	}

int PointPatrickM::getQuadrant(const PointPatrickM& p) {
		if (p.fx.getNum() > 0 && p.fy.getNum() > 0) {
			return 1;
		}
		else if (p.fx.getNum() < 0 && p.fy.getNum() > 0) {
			return 2;
		}
		else if (p.fx.getNum() < 0 && p.fy.getNum() < 0) {
			return 3;
		}
		else if (p.fx.getNum() > 0 && p.fy.getNum() < 0) {
			return 4;
		}
	}



void PointPatrickM::moveBy(int iOld) {
		fx.update(iOld);
		fy.update(iOld);
	}

void PointPatrickM::moveBy(const FractionPatrickM& delX, const FractionPatrickM& delY) {
		fx = fx + delX;
		fy = fy + delY;
	}

void PointPatrickM::flipByX() {
		int newX = fx.getNum();
		fx.updateNum(-newX);
	}

void PointPatrickM::flipByY() {
		int newY = fy.getNum();
		fy.updateNum(-newY);
	}

void PointPatrickM::flipThroughOrigin() {
		int newX = fx.getNum();
		fx.updateNum(-newX);
		int newY = fy.getNum();
		fy.updateNum(-newY);
	}

void PointPatrickM::print() {
		cout << "\n        The x-coordinate is " << fx.getNum() << "/" << fx.getDenom() << ".";
		cout << "\n        The y-coordinate is " << fy.getNum() << "/" << fy.getDenom() << ".";
	}

PointPatrickM PointPatrickM::operator=(const PointPatrickM& p) {
		fx = p.fx;
		fy = p.fy;

		return p;
	}
