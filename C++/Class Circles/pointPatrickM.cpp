
/**
*program name: pointPatrickM.cpp
*discussion:   Homework #7, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/12/08
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

int PointPatrickM::getFXnum() const {
	return fx.getNum();
}

int PointPatrickM::getFXdenom() const {
	return fx.getDenom();
}

int PointPatrickM::getFYnum() const {
	return fy.getNum();
}

int PointPatrickM::getFYdenom() const {
	return fy.getDenom();
}

void PointPatrickM::updateFX(int del) {
	fx.update(del);
}

void PointPatrickM::updateFY(int del) {
	fy.update(del);
}

void PointPatrickM::updateFX(const FractionPatrickM& delX) {
	fx = fx + delX;
}

void PointPatrickM::updateFY(const FractionPatrickM& delY) {
	fy = fy + delY;
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

ostream& operator<<(ostream& os, const PointPatrickM& ptPM) {
	os << ptPM.fx.getNum() << "/" << ptPM.fx.getDenom()
		<< ", " << ptPM.fy.getNum() << "/" << ptPM.fy.getDenom();
	return os;
}

PointPatrickM PointPatrickM::operator=(const PointPatrickM& p) {
		fx = p.fx;
		fy = p.fy;

		return p;
	}
