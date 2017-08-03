/**
*program name: cis25Fall2016PatrickMHw6Ex1.cpp
*discussion:   Homework #6, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/11/17
*/

#include <iostream>
#include "fractionPatrickM.h"
#include "fractionUtilityPatrickM.h"
#include "pointPatrickM.h"
using namespace std;

//Driver

int main() {


	cout << "\nCIS 25 - C++ Programming"
		"\nLaney College"
		"\nPatrick Martin"
		"\n\nAssignement Information --"
		"\n  Assignmet Number:      Homework 06,"
		"\n                         Exercise #1"
		"\n  Written By:            Patrick Martin"
		"\n  Due Date:              2016/11/15\n";

	menuHW6();

	return 0;
}
/*
// PROGRAM OUTPUT

Using Point #4: (2/1, -2/1)


CIS 25 - C++ Programming
Laney College
Patrick Martin

Assignement Information --
  Assignmet Number:      Homework 06,
                         Exercise #1
  Written By:            Patrick Martin
  Due Date:              2016/11/15

*******************************
*      MENU - Hw #6           *
* 1. Initializing (2 Points)  *
* 2. Placement                *
* 3. Moving                   *
* 4. Flipping                 *
* 5. Displaying               *
* 6. Quit                     *
*******************************
Select an option (use interger value only): 1


  Initializing Option --
    Enter num for X Coordinate : 2
    Enter den for X Coordinate : 1

    Enter num for Y Coordinate : -2
    Enter den for Y Coordinate : 1

*******************************
*      MENU - Hw #6           *
* 1. Initializing (2 Points)  *
* 2. Placement                *
* 3. Moving                   *
* 4. Flipping                 *
* 5. Displaying               *
* 6. Quit                     *
*******************************
Select an option (use interger value only): 2

  Placement Option -

    ******************************
    *    Sub MENU -- Placement   *
    *  1. getQuadrant()          *
    *  2. getQuadrant(Point Ref) *
    *  3. Returning              *
    ******************************
    Select an option (1, 2, or 3): 1

      Calling getQuadrant()
        The point is in quadrant 4.
    ******************************
    *    Sub MENU -- Placement   *
    *  1. getQuadrant()          *
    *  2. getQuadrant(Point Ref) *
    *  3. Returning              *
    ******************************
    Select an option (1, 2, or 3): 2

      Calling getQuadrant(Point Ref)
        The point is in quadrant 4.
    ******************************
    *    Sub MENU -- Placement   *
    *  1. getQuadrant()          *
    *  2. getQuadrant(Point Ref) *
    *  3. Returning              *
    ******************************
    Select an option (1, 2, or 3): 3

    Returning to "Menu - Hw#6"

*******************************
*      MENU - Hw #6           *
* 1. Initializing (2 Points)  *
* 2. Placement                *
* 3. Moving                   *
* 4. Flipping                 *
* 5. Displaying               *
* 6. Quit                     *
*******************************
Select an option (use interger value only): 3

  Moving Option -

    ******************************
    *    Sub MENU -- MovingPoint *
    *  1. By (frX, frY)          *
    *  2. By fr                  *
    *  3. Printing               *
    *  4. Returning              *
    ******************************
    Select an option (1, 2, 3, or 4): 1

      Calling moveBy(Fraction, Fraction)
        Move the x-coordinate by
        num: 4
        denom: 1

        Move the y-coordinate by
        num: -4
        denom: 1

    ******************************
    *    Sub MENU -- MovingPoint *
    *  1. By (frX, frY)          *
    *  2. By fr                  *
    *  3. Printing               *
    *  4. Returning              *
    ******************************
    Select an option (1, 2, 3, or 4): 3

        The x-coordinate is 6/1.
        The y-coordinate is -6/1.
    ******************************
    *    Sub MENU -- MovingPoint *
    *  1. By (frX, frY)          *
    *  2. By fr                  *
    *  3. Printing               *
    *  4. Returning              *
    ******************************
    Select an option (1, 2, 3, or 4): 2

      Calling moveBy(Int)
        Provide an int to move the x and y coordinates: 8

    ******************************
    *    Sub MENU -- MovingPoint *
    *  1. By (frX, frY)          *
    *  2. By fr                  *
    *  3. Printing               *
    *  4. Returning              *
    ******************************
    Select an option (1, 2, 3, or 4): 3

        The x-coordinate is 14/1.
        The y-coordinate is 2/1.
    ******************************
    *    Sub MENU -- MovingPoint *
    *  1. By (frX, frY)          *
    *  2. By fr                  *
    *  3. Printing               *
    *  4. Returning              *
    ******************************
    Select an option (1, 2, 3, or 4): 4

    Returning to "Menu - Hw#6"

*******************************
*      MENU - Hw #6           *
* 1. Initializing (2 Points)  *
* 2. Placement                *
* 3. Moving                   *
* 4. Flipping                 *
* 5. Displaying               *
* 6. Quit                     *
*******************************
Select an option (use interger value only): 4

  Flipping Option -

    ****************************
    * Sub Menu - FlippingPoint *
    *  1. By Y                 *
    *  2. By X                 *
    *  3. By Origin            *
    *  4. Printing             *
    *  5. Returning            *
    ****************************
    Select an option (1, 2, 3, or 4): 1

      Calling flipByY()
    ****************************
    * Sub Menu - FlippingPoint *
    *  1. By Y                 *
    *  2. By X                 *
    *  3. By Origin            *
    *  4. Printing             *
    *  5. Returning            *
    ****************************
    Select an option (1, 2, 3, or 4): 4

      Calling print()
        The x-coordinate is 14/1.
        The y-coordinate is -2/1.
    ****************************
    * Sub Menu - FlippingPoint *
    *  1. By Y                 *
    *  2. By X                 *
    *  3. By Origin            *
    *  4. Printing             *
    *  5. Returning            *
    ****************************
    Select an option (1, 2, 3, or 4): 2

      Calling flipByX()
    ****************************
    * Sub Menu - FlippingPoint *
    *  1. By Y                 *
    *  2. By X                 *
    *  3. By Origin            *
    *  4. Printing             *
    *  5. Returning            *
    ****************************
    Select an option (1, 2, 3, or 4): 4

      Calling print()
        The x-coordinate is -14/1.
        The y-coordinate is -2/1.
    ****************************
    * Sub Menu - FlippingPoint *
    *  1. By Y                 *
    *  2. By X                 *
    *  3. By Origin            *
    *  4. Printing             *
    *  5. Returning            *
    ****************************
    Select an option (1, 2, 3, or 4): 3

      Calling flipThroughOrigin()
    ****************************
    * Sub Menu - FlippingPoint *
    *  1. By Y                 *
    *  2. By X                 *
    *  3. By Origin            *
    *  4. Printing             *
    *  5. Returning            *
    ****************************
    Select an option (1, 2, 3, or 4): 4

      Calling print()
        The x-coordinate is 14/1.
        The y-coordinate is 2/1.
    ****************************
    * Sub Menu - FlippingPoint *
    *  1. By Y                 *
    *  2. By X                 *
    *  3. By Origin            *
    *  4. Printing             *
    *  5. Returning            *
    ****************************
    Select an option (1, 2, 3, or 4): 5

    Returning to "Menu - Hw#6"

*******************************
*      MENU - Hw #6           *
* 1. Initializing (2 Points)  *
* 2. Placement                *
* 3. Moving                   *
* 4. Flipping                 *
* 5. Displaying               *
* 6. Quit                     *
*******************************
Select an option (use interger value only): 5

  Displaying Option -

    ********************************
    * Sub Menu - Displaying        *
    *  1. print() - Member         *
    *  2. Returning                *
    ********************************
    Select an option (1, 2, 3, or 4): 1

      Calling print() - Member
        The x-coordinate is 14/1.
        The y-coordinate is 2/1.
    ********************************
    * Sub Menu - Displaying        *
    *  1. print() - Member         *
    *  2. Returning                *
    ********************************
    Select an option (1, 2, 3, or 4): 2

    Returning to "Menu - Hw#6"

*******************************
*      MENU - Hw #6           *
* 1. Initializing (2 Points)  *
* 2. Placement                *
* 3. Moving                   *
* 4. Flipping                 *
* 5. Displaying               *
* 6. Quit                     *
*******************************
Select an option (use interger value only): 6

  Having fun ...!

// PROGRAM COMMENTS

I wasn't sure what else I needed for option 5. 
I also wasn't sure of what utilities I needed for 
pointUtilityPatrickM(.cpp and .h) so I skipped over those files. 
I hope I organized all the files properly. 

*/