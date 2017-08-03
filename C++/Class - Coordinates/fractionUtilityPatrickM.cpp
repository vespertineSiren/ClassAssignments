/**
*program name: fractionUtilityPatrickM.cpp
*discussion:   Homework #6, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/11/17
*/

#include "fractionUtilityPatrickM.h"
#include "pointPatrickM.h"
#include <iostream>
#include <ostream>
using namespace std;


void menuHW6() {

	int option;
	PointPatrickM* point = nullptr;
	FractionPatrickM* moveByfrX = nullptr;
	FractionPatrickM* moveByfrY = nullptr;

	int n, d;
	int quadrant;
	int moveByInput;


	do {
		cout << "\n*******************************"
			"\n*      MENU - Hw #6           *"
			"\n* 1. Initializing (2 Points)  *"
			"\n* 2. Placement                *"
			"\n* 3. Moving                   *"
			"\n* 4. Flipping                 *"
			"\n* 5. Displaying               *"
			"\n* 6. Quit                     *"
			"\n*******************************"
			"\nSelect an option (use interger value only): ";
		cin >> option;
		switch (option) {
		case 1:
			cout << "\n\n  Initializing Option -- ";

			initA(point);

			break;
		case 2:
			if (point != nullptr) {
				cout << "\n  Placement Option -\n";
				do {
					cout << "\n    ****************************** "
						"\n    *    Sub MENU -- Placement   *"
						"\n    *  1. getQuadrant()          *"
						"\n    *  2. getQuadrant(Point Ref) *"
						"\n    *  3. Returning              *"
						"\n    ******************************"
						"\n    Select an option (1, 2, or 3): ";
					cin >> option;
					switch (option) {
					case 1:
						cout << "\n      Calling getQuadrant()";
						quadrant = point->getQuadrant();
						cout << "\n        The point is in quadrant " << quadrant << ".";
						break;
					case 2:
						cout << "\n      Calling getQuadrant(Point Ref)";
						quadrant = point->getQuadrant(*point);
						cout << "\n        The point is in quadrant " << quadrant << ".";
						break;
					case 3:
						cout << "\n    Returning to \"Menu - Hw#6\"" << endl;
						break;
					default:
						cout << "\n    WRONG OPTION ..." << endl;
					}
				} while (option != 3);
			}
			else {
				cout << "\n  Not a proper call as no Points are available!\n";
			}

			break;
		case 3:
			if (point != nullptr) {
				cout << "\n  Moving Option -\n";
				do {
					cout << "\n    ****************************** "
						"\n    *    Sub MENU -- MovingPoint *"
						"\n    *  1. By (frX, frY)          *"
						"\n    *  2. By fr                  *"
						"\n    *  3. Printing               *"
						"\n    *  4. Returning              *"
						"\n    ******************************"
						"\n    Select an option (1, 2, 3, or 4): ";
					cin >> option;
					switch (option) {
					case 1:
						cout << "\n      Calling moveBy(Fraction, Fraction)"
							<< "\n        Move the x-coordinate by"
							<< "\n        num: ";
						cin >> n;
						cout << "        denom: ";
						cin >> d;
						moveByfrX = new FractionPatrickM(n, d);

						cout << "\n        Move the y-coordinate by"
							<< "\n        num: ";
						cin >> n;
						cout << "        denom: ";
						cin >> d;
						moveByfrY = new FractionPatrickM(n, d);

						point->moveBy(*moveByfrX, *moveByfrY);

						delete moveByfrX;
						delete moveByfrY;
						moveByfrX = nullptr;
						moveByfrY = nullptr;
						break;
					case 2:
						cout << "\n      Calling moveBy(Int)"
							<< "\n        Provide an int to move the x and y coordinates: ";
						cin >> moveByInput;
						point->moveBy(moveByInput);
						break;
					case 3:
						point->print();
						break;
					case 4:
						cout << "\n    Returning to \"Menu - Hw#6\"" << endl;
						break;
					default:
						cout << "\n    WRONG OPTION ..." << endl;
					}
				} while (option != 4);
			}
			else {
				cout << "\n  Not a proper call as no Points are available!\n";
			}

			break;
		case 4:
			if (point != nullptr) {
				cout << "\n  Flipping Option -\n";
				do {
					cout << "\n    ****************************"
						"\n    * Sub Menu - FlippingPoint *"
						"\n    *  1. By Y                 *"
						"\n    *  2. By X                 *"
						"\n    *  3. By Origin            *"
						"\n    *  4. Printing             *"
						"\n    *  5. Returning            *"
						"\n    ****************************"
						"\n    Select an option (1, 2, 3, or 4): ";
					cin >> option;
					switch (option) {
					case 1:
						cout << "\n      Calling flipByY()";
						point->flipByY();
						break;
					case 2:
						cout << "\n      Calling flipByX()";
						point->flipByX();
						break;
					case 3:
						cout << "\n      Calling flipThroughOrigin()";
						point->flipThroughOrigin();
						break;
					case 4:
						cout << "\n      Calling print()";
						point->print();
						break;
					case 5:
						cout << "\n    Returning to \"Menu - Hw#6\"" << endl;
						break;
					default:
						cout << "\n    WRONG OPTION ..." << endl;
					}
				} while (option != 5);
			}
			else {
				cout << "\n  Not a proper call as no Points are available!\n";
			}

			break;
		case 5:
			if (point != nullptr) {
				cout << "\n  Displaying Option -\n";
				do {
					cout << "\n    ********************************"
						"\n    * Sub Menu - Displaying        *"
						"\n    *  1. print() - Member         *"
						"\n    *  2. Returning                *"
						"\n    ********************************"
						"\n    Select an option (1, 2, 3, or 4): ";
					cin >> option;
					switch (option) {
					case 1:
						cout << "\n      Calling print() - Member";
						point->print();
						break;
					case 2:
						cout << "\n    Returning to \"Menu - Hw#6\"" << endl;
						break;
					default:
						cout << "\n    WRONG OPTION ..." << endl;
					}
				} while (option != 2);
			}
			else {
				cout << "\n  Not a proper call as no Points are available!\n";
			}

			break;
		case 6:
			if (point != nullptr) {
				delete point;
			}

			cout << "\n  Having fun ...!\n";
			break;
		default:
			cout << "\nWRONG OPTION ..." << endl;
		}
	} while (option != 6);
}


void initA(PointPatrickM*& p) {
	int x1, y1, x2, y2;

	if (p == nullptr) {
		cout << "\n    Enter num for X Coordinate : ";
		cin >> x1;
		do {
			cout << "    Enter den for X Coordinate : ";
			cin >> y1;
			if (y1 == 0) {
				cout << "    The denominator can not be 0. Try again.\n";
			}
		} while (y1 == 0);

		cout << "\n    Enter num for Y Coordinate : ";
		cin >> x2;
		do {
			cout << "    Enter den for Y Coordinate : ";
			cin >> y2;
			if (y2 == 0) {
				cout << "    The denominator can not be 0. Try again.\n";
			}
		} while (y2 == 0);

	}

	if (y1 < 0) {
		y1 = -y1;
		x1 = -x1;
	}

	if (y2 < 0) {
		y2 = -y2;
		x2 = -x2;
	}

	p = new PointPatrickM(x1, x2, y1, y2);

}