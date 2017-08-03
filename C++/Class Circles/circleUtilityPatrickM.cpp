/**
*program name: circleUtilityPatrickM.cpp
*discussion:   Homework #7, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/12/08
*/

#include "circleUtilityPatrickM.h"
#include "circlePatrickM.h"
#include <iostream>
#include <ostream>
using namespace std;




void menuHW7() {

	int option;
	CirclePatrickM* circle1 = nullptr;
	CirclePatrickM* circle2 = nullptr;
	FractionPatrickM* moveByfr = nullptr;
	int moveByInput;
	int n, d;


	do {
		cout << "\n********************************"
			"\n*         MENU - Hw #7         *"
			"\n* 1. Initializing (2 Circles)  *"
			"\n* 2. Positioning               *"
			"\n* 3. Moving                    *"
			"\n* 4. Comparing                 *"
			"\n* 5. Displaying                *"
			"\n* 6. Quit                      *"
			"\n********************************"
			"\nSelect an option (use interger value only): ";
		cin >> option;
		switch (option) {
		case 1:
			do {
					cout << "\n    ********************************"
						"\n    *    Sub MENU -- Initializing  *"
						"\n    *  1. Creating New (2 Circles) *"
						"\n    *  2. Updating                 *"
						"\n    *  3. Displaying               *"
						"\n    *  4. Returning                *"
						"\n    ********************************"
						"\n    Select an option (use interger value only): ";
					cin >> option;
					switch (option) {
					case 1:
						initA(circle1, circle2);
						break;
					case 2:
						if (circle1 == nullptr) {
							cout << "\n    There are no existing circles!" << endl;
						}
						break;
					case 3:
						cout << "\n      Circle 1";
						circle1->displaycircles();
						cout << "\n      Circle 2";
						circle2->displaycircles();
						break;
					case 4:
						cout << "\n        Returning to previous menu!" << endl;
					    break;
					default:
						cout << "\n    WRONG OPTION ..." << endl;
					}
				} while (option != 4);

			break;
		case 2:
			if (circle1 != nullptr) {
				circle1->positioning(*circle2);
			} else {
				cout << "\n  Not a proper call as no circles are available!\n";
			}

			break;
		case 3:
			if (circle1 != nullptr) {
				do {
					cout << "\n    *****************************************"
						"\n    *  SubMenu - Moving                     *"
						"\n    *            (With respect to Circle 1) *"
						"\n    *  1. Horizontally                      *"
						"\n    *  2. Vertically                        *"
						"\n    *  3. Displaying                        *"
						"\n    *  4. Returning                         *"
						"\n    *****************************************"
						"\n    Select an option (use integer value only): ";
					cin >> option;
					switch (option) {
					case 1:
						do {
							cout << "\n        *****************************************"
								"\n        *  SubMenu - Moving Horizontally        *"
								"\n        *            (With respect to Circle 1) *"
								"\n        *  1. By an int                         *"
								"\n        *  2. By a Fraction                     *"
								"\n        *  3. Displaying                        *"
								"\n        *  4. Returning                         *"
								"\n        *****************************************"
								"\n        Select an option (use integer value only): ";
							cin >> option;
							switch (option) {
							case 1:
								cout << "\n          Provide an int to move horizontally: ";
								cin >> moveByInput;
								circle2->moveHorizontallyBy(moveByInput);
								break;
							case 2:
								cout << "\n          Provide the fraction to move horizontally: "
									"\n          num: ";
								cin >> n;
								cout << "\n          denom: ";
								cin >> d;
								moveByfr = new FractionPatrickM(n, d);

								circle2->moveHorizontallyBy(*moveByfr);

								delete moveByfr;
								moveByfr = nullptr;
								break;
							case 3:
								cout << "\n        Circle 1";
								circle1->displaycircles();
								cout << "\n        Circle 2";
								circle2->displaycircles();
								break;
							case 4:
								cout << "\n            Returning to previous menu!";
								break;
							default:
								cout << "\n        WRONG OPTION ..." << endl;
							}
						} while (option != 4);
						option = 0;
						break;
					case 2:
						do {
							cout << "\n        *****************************************"
								"\n        *  SubMenu - Moving Vertically          *"
								"\n        *            (With respect to Circle 1) *"
								"\n        *  1. To get a distance of an int       *"
								"\n        *  2. To get a distance of a Fraction   *"
								"\n        *  3. Displaying                        *"
								"\n        *  4. Returning                         *"
								"\n        *****************************************"
								"\n        Select an option (use integer value only): ";
							cin >> option;
							switch (option) {
							case 1:
								cout << "\n          Provide an int to move vertically: ";
								cin >> moveByInput;
								circle2->moveVerticallyBy(moveByInput);
								break;
							case 2:
								cout << "\n          Provide the fraction to move horizontally: "
									"\n          num: ";
								cin >> n;
								cout << "\n          denom: ";
								cin >> d;
								moveByfr = new FractionPatrickM(n, d);

								circle2->moveVerticallyBy(*moveByfr);

								delete moveByfr;
								moveByfr = nullptr;
								break;
							case 3:
								cout << "\n        Circle 1";
								circle1->displaycircles();
								cout << "\n        Circle 2";
								circle2->displaycircles();
								break;
							case 4:
								cout << "\n            Returning to previous menu!";
								break;
							default:
								cout << "\n        WRONG OPTION ..." << endl;
							}
						} while (option != 4);
						option = 0;
						break;
					case 3:
						cout << "\n      Circle 1";
						circle1->displaycircles();
						cout << "\n      Circle 2";
						circle2->displaycircles();
						break;
					case 4:
						cout << "\n        Returning to previous menu!" << endl;
						break;
					default:
						cout << "\n    WRONG OPTION ..." << endl;
					}
				} while (option != 4);
			} else {
				cout << "\n  Not a proper call as no circles are available!\n";
			}
			break;
		case 4:
			if (circle1 != nullptr) {
				do {
					cout << "\n    *****************************************"
						"\n    *  SubMenu - Comparing                  *"
						"\n    *            (With respect to Circle 1) *"
						"\n    *  1. Using area with PI of 157/50      *"
						"\n    *  2. Using perimeter with PI of 157/50 *"
						"\n    *  3. Displaying                        *"
						"\n    *  4. Returning                         *"
						"\n    *****************************************"
						"\n    Select an option (1, 2, 3, or 4): ";
					cin >> option;
					switch (option) {
					case 1:
						cout << "\n      Circle 1";
						circle1->displaycircles();
						cout << "\n          Area: " << circle1->computeArea();

						cout << "\n\n      Circle 2";
						circle1->displaycircles();
						cout << "\n          Area: " << circle2->computeArea();
						
						circle1->compareArea(*circle2);
						break;
					case 2:
						cout << "\n      Circle 1";
						circle1->displaycircles();
						cout << "\n          Perimiter: " << circle1->computePerimiter();

						cout << "\n\n      Circle 2";
						circle1->displaycircles();
						cout << "\n          Perimiter: " << circle2->computePerimiter();

						circle1->comparePerimiter(*circle2);
						break;
					case 3:
						cout << "\n      Circle 1";
						circle1->displaycircles();
						cout << "\n      Circle 2";
						circle2->displaycircles();
						break;
					case 4:
						cout << "\n        Returning to previous menu!" << endl;
						break;
					default:
						cout << "\n    WRONG OPTION ..." << endl;
					}
				} while (option != 4);
			} else {
				cout << "\n  Not a proper call as no circles are available!\n";
			}

			break;
		case 5:
			if (circle1 != nullptr) {
				cout << "\n      Circle 1";
				circle1->displaycircles();
				cout << "\n      Circle 2";
				circle2->displaycircles();
			} else {
				cout << "\n  Not a proper call as no circles are available!\n";
			}

			break;
		case 6:
			if (circle1 != nullptr) {
				delete circle1;
				circle1 = nullptr;
			}

			if (circle2 != nullptr) {
				delete circle2;
				circle2 = nullptr;
			}

			cout << "\n  Having fun ...!\n";
			break;
		default:
			cout << "\nWRONG OPTION ..." << endl;
		}
	} while (option != 6);
}


void initA(CirclePatrickM*& c1, CirclePatrickM*& c2) {
	int radiusX, radiusY, centerNx, centerDx, centerNy, centerDy;

	if (c1 == nullptr) {
		cout << "\n    Provide X and Y coordinates for the Center of Circle 1."
			"\n      X-Coordinate Numerator : ";
		cin >> centerNx;
		do {
			cout << "      X-Coordinate Denominator : ";
			cin >> centerNy;
			if (centerNy == 0) {
				cout << "        The denominator can not be 0. Try again.\n";
			}
		} while (centerNy == 0);

		cout << "\n      Y-Coordinate Numerator : ";
		cin >> centerDx;
		do {
			cout << "      Y-Coordinate Denominator : ";
			cin >> centerDy;
			if (centerDy == 0) {
				cout << "        The denominator can not be 0. Try again.\n";
			}
		} while (centerDy == 0);

		cout << "\n    Provide the numerator and denominator for the Radius";
		do {
			cout << "\n      Radius Numerator : ";
			cin >> radiusX;
			if (radiusX <= 0) {
				cout << "        The Radius can not have any negative values. Try again.";
			} 
		} while (radiusX <= 0);
		do {
			cout << "      Radius Denominator : ";
			cin >> radiusY;
			if (radiusY <= 0) {
				cout << "        The Radius can not have any negative values. Try again\n";
			}
		} while (radiusY <= 0);
	}
	
	if (centerNy < 0) {
		centerNy = -centerNy;
		centerNx = -centerNx;
	}

	if (centerDy < 0) {
		centerDy = -centerDy;
		centerDx = -centerDx;
	}

	c1 = new CirclePatrickM(radiusX, radiusY, centerNx, centerDx, centerNy, centerDy);


	if (c2 == nullptr) {
		cout << "\n    Provide X and Y coordinates for the Center of Circle 1."
			"\n      X-Coordinate Numerator : ";
		cin >> centerNx;
		do {
			cout << "      X-Coordinate Denominator : ";
			cin >> centerNy;
			if (centerNy == 0) {
				cout << "        The denominator can not be 0. Try again.\n";
			}
		} while (centerNy == 0);

		cout << "\n      Y-Coordinate Numerator : ";
		cin >> centerDx;
		do {
			cout << "      Y-Coordinate Denominator : ";
			cin >> centerDy;
			if (centerDy == 0) {
				cout << "        The denominator can not be 0. Try again.\n";
			}
		} while (centerDy == 0);

		cout << "\n    Provide the numerator and denominator for the Radius";
		do {
			cout << "\n      Radius Numerator : ";
			cin >> radiusX;
			if (radiusX <= 0) {
				cout << "        The Radius can not have any negative values. Try again.";
			}
		} while (radiusX <= 0);
		do {
			cout << "      Radius Denominator : ";
			cin >> radiusY;
			if (radiusY <= 0) {
				cout << "        The Radius can not have any negative values. Try again\n";
			}
		} while (radiusY <= 0);
	}

	if (centerNy < 0) {
		centerNy = -centerNy;
		centerNx = -centerNx;
	}

	if (centerDy < 0) {
		centerDy = -centerDy;
		centerDx = -centerDx;
	}

	c2 = new CirclePatrickM(radiusX, radiusY, centerNx, centerDx, centerNy, centerDy);
}

double sqrtDouble(double num) {
	double tmp;
	double sqrt = num / 2;

	do {
		tmp = sqrt;
		sqrt = (tmp + (num / tmp)) / 2;
	} while ((tmp - sqrt) != 0);

	return sqrt;
}