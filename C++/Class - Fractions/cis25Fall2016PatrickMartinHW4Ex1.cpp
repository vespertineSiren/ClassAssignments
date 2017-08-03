/**
* Program Name:	cis25Fall2016PatrickMartinHW4Ex1.cpp
* Discussion:	Homework #4, Exercise #1
* Written By:	Patrick Martin
* Date:			2016/10/20
*/

#include <iostream>
#include "fractionPatrickM.h"
using namespace std;

//Function Prototypes


//Driver
int main() {
	int option, INPUTnum, INPUTdenom;
	Fraction* fractionPtr = nullptr;
	int* uncommonARAY = nullptr;
	int UCDcounter = 0;


	cout << "CIS 25 - C++ Programming\n"
		"Laney College\n"
		"Patrick Martin\n"
		"\nAssignment Information --\n"
		"  Assignment Number:    Homework 04,\n"
		"                        Coding Assignment -- Exercise #1\n"
		"  Written By:           Patrick Martin\n"
		"  Submitted Date:       2016/10/20\n \n";

	do {
		cout << "\n************************************\n"
			"*             MENU HW#4            *\n"
			"* (1) Creating/Updating Fraction   *\n"
			"* (2) Displaying the Fraction      *\n"
			"* (3) Displaying Uncommon Digit(s) *\n"
			"* (4) Quit                         *\n"
			"************************************\n"

			"Enter your option (1 through 4): ";
		cin >> option;
		switch (option) {
		case 1:
			cout << "\nEnter an int for numerator: ";
			cin >> INPUTnum;
			cout << "Enter an int for denominator: ";
			cin >> INPUTdenom;

			do {				
				if (INPUTdenom == 0) {
					cout << "\n  0 is not an acceptable denominator!";
					cout << "\nEnter an int for denominator: ";
					cin >> INPUTdenom;
				}
			} while (INPUTdenom == 0);
			
			fractionPtr = new Fraction(INPUTnum, INPUTdenom);
			break;
		case 2:
			if (fractionPtr != nullptr) {
				fractionPtr->print();
			}
			else {
				cout << "\nNo Fraction available!\n\n";
			}

			break;
		case 3:
			if (fractionPtr != nullptr) {
				uncommonARAY = fractionPtr->extractUncommonDigit();
				
				for (int i = 0; i < 10; i++) {
					if ((*(uncommonARAY + i)) > 0) {
						UCDcounter++;
					}
				}

				cout << "\nUsing the result returned from extractUncommonDigit() - "
					<< "\n  The uncommon digit array has " << UCDcounter
					<< " uncommon digit(s) of";

					for (int i = 0; i < 10; i++) {
						if ((*(uncommonARAY + i)) > 0) {
							cout << "\n    " << i;
						}
					}
				UCDcounter = 0;
				delete[] uncommonARAY;
				uncommonARAY = nullptr;
			}
			else {
				cout << "\nNo Fraction available!\n\n";
			}
			break;
		case 4:
			cout << "\nHaving fun!\n";
		
			break;
		default:
			cout << "\n  \n  WRONG OPTION!\n\n";
		}
	} while (option != 4);

	return 0;
}

//Function Definitions


/* PROGRAM_OUTPUT

CIS 25 - C++ Programming
Laney College
Patrick Martin

Assignment Information --
  Assignment Number:    Homework 04,
                        Coding Assignment -- Exercise #1
  Written By:           Patrick Martin
  Submitted Date:       2016/10/20


************************************
*             MENU HW#4            *
* (1) Creating/Updating Fraction   *
* (2) Displaying the Fraction      *
* (3) Displaying Uncommon Digit(s) *
* (4) Quit                         *
************************************
Enter your option (1 through 4): 2

No Fraction available!


************************************
*             MENU HW#4            *
* (1) Creating/Updating Fraction   *
* (2) Displaying the Fraction      *
* (3) Displaying Uncommon Digit(s) *
* (4) Quit                         *
************************************
Enter your option (1 through 4): 3

No Fraction available!


************************************
*             MENU HW#4            *
* (1) Creating/Updating Fraction   *
* (2) Displaying the Fraction      *
* (3) Displaying Uncommon Digit(s) *
* (4) Quit                         *
************************************
Enter your option (1 through 4): 1

Enter an int for numerator: 1237
Enter an int for denominator: 11035

A call to Fraction(int, int) was made to build a Fraction!
  num : 1237
  denom : 11035


************************************
*             MENU HW#4            *
* (1) Creating/Updating Fraction   *
* (2) Displaying the Fraction      *
* (3) Displaying Uncommon Digit(s) *
* (4) Quit                         *
************************************
Enter your option (1 through 4): 2

The current Fraction object has
  num : 1237
  denom : 11035


************************************
*             MENU HW#4            *
* (1) Creating/Updating Fraction   *
* (2) Displaying the Fraction      *
* (3) Displaying Uncommon Digit(s) *
* (4) Quit                         *
************************************
Enter your option (1 through 4): 3

Using the result returned from extractUncommonDigit() -
  The uncommon digit array has 4 uncommon digit(s) of
    0
    2
    5
    7
************************************
*             MENU HW#4            *
* (1) Creating/Updating Fraction   *
* (2) Displaying the Fraction      *
* (3) Displaying Uncommon Digit(s) *
* (4) Quit                         *
************************************
Enter your option (1 through 4): 1

Enter an int for numerator: 1237
Enter an int for denominator: 0

  0 is not an acceptable denominator!
Enter an int for denominator: -11035

A call to Fraction(int, int) was made to build a Fraction!
  num : 1237
  denom : -11035


************************************
*             MENU HW#4            *
* (1) Creating/Updating Fraction   *
* (2) Displaying the Fraction      *
* (3) Displaying Uncommon Digit(s) *
* (4) Quit                         *
************************************
Enter your option (1 through 4): 3

Using the result returned from extractUncommonDigit() -
  The uncommon digit array has 4 uncommon digit(s) of
    0
    2
    5
    7
************************************
*             MENU HW#4            *
* (1) Creating/Updating Fraction   *
* (2) Displaying the Fraction      *
* (3) Displaying Uncommon Digit(s) *
* (4) Quit                         *
************************************
Enter your option (1 through 4): 4

Having fun!
Press any key to continue . . .

*/

/* PROGRAM_COMMENTS

I feel like the code could be a little tighter
but I am overall proud of my ability to finish
this HW while being away for a whole week. 

*/

