/**
*program name: cis25Fall2016PatrickMHw7Ex1.cpp
*discussion:   Homework #7, Exercise #1
*Written by:   Patrick Martin
*Date:         2016/12/08
*/

#include <iostream>
#include "fractionPatrickM.h"
#include "circleUtilityPatrickM.h"
#include "pointPatrickM.h"
using namespace std;





//Application Driver

int main() {


	cout << "\nCIS 25 - C++ Programming"
		"\nLaney College"
		"\nPatrick Martin"
		"\n\nAssignement Information --"
		"\n  Assignmet Number:      Homework 7,"
		"\n                         Exercise #1"
		"\n  Written By:            Patrick Martin"
		"\n  Due Date:              2016/12/8\n";

	menuHW7();

	return 0;
}



/*
// PROGRAM OUTPUT


  Not a proper call as no circles are available!

********************************
*         MENU - Hw #7         *
* 1. Initializing (2 Circles)  *
* 2. Positioning               *
* 3. Moving                    *
* 4. Comparing                 *
* 5. Displaying                *
* 6. Quit                      *
********************************
Select an option (use interger value only): 1

    ********************************
    *    Sub MENU -- Initializing  *
    *  1. Creating New (2 Circles) *
    *  2. Updating                 *
    *  3. Displaying               *
    *  4. Returning                *
    ********************************
    Select an option (use interger value only): 2

    There are no existing circles!

    ********************************
    *    Sub MENU -- Initializing  *
    *  1. Creating New (2 Circles) *
    *  2. Updating                 *
    *  3. Displaying               *
    *  4. Returning                *
    ********************************
    Select an option (use interger value only): 1

    Provide X and Y coordinates for the Center of Circle 1.
      X-Coordinate Numerator : 1
      X-Coordinate Denominator : 1

      Y-Coordinate Numerator : 2
      Y-Coordinate Denominator : 1

    Provide the numerator and denominator for the Radius
      Radius Numerator : 3
      Radius Denominator : 1

    Provide X and Y coordinates for the Center of Circle 1.
      X-Coordinate Numerator : 4
      X-Coordinate Denominator : 1

      Y-Coordinate Numerator : 5
      Y-Coordinate Denominator : 1

    Provide the numerator and denominator for the Radius
      Radius Numerator : 6
      Radius Denominator : 1

    ********************************
    *    Sub MENU -- Initializing  *
    *  1. Creating New (2 Circles) *
    *  2. Updating                 *
    *  3. Displaying               *
    *  4. Returning                *
    ********************************
    Select an option (use interger value only): 3

      Circle 1
          Center: 1/1, 2/1
          Radius: 3/1
      Circle 2
          Center: 4/1, 5/1
          Radius: 6/1
    ********************************
    *    Sub MENU -- Initializing  *
    *  1. Creating New (2 Circles) *
    *  2. Updating                 *
    *  3. Displaying               *
    *  4. Returning                *
    ********************************
    Select an option (use interger value only): 4

        Returning to previous menu!

********************************
*         MENU - Hw #7         *
* 1. Initializing (2 Circles)  *
* 2. Positioning               *
* 3. Moving                    *
* 4. Comparing                 *
* 5. Displaying                *
* 6. Quit                      *
********************************
Select an option (use interger value only): 2

      Circle 1 and Circle 2 are overlapping.

********************************
*         MENU - Hw #7         *
* 1. Initializing (2 Circles)  *
* 2. Positioning               *
* 3. Moving                    *
* 4. Comparing                 *
* 5. Displaying                *
* 6. Quit                      *
********************************
Select an option (use interger value only): 3

    *****************************************
    *  SubMenu - Moving                     *
    *            (With respect to Circle 1) *
    *  1. Horizontally                      *
    *  2. Vertically                        *
    *  3. Displaying                        *
    *  4. Returning                         *
    *****************************************
    Select an option (use integer value only): 1

        *****************************************
        *  SubMenu - Moving Horizontally        *
        *            (With respect to Circle 1) *
        *  1. By an int                         *
        *  2. By a Fraction                     *
        *  3. Displaying                        *
        *  4. Returning                         *
        *****************************************
        Select an option (use integer value only): 1

          Provide an int to move horizontally: 10

        *****************************************
        *  SubMenu - Moving Horizontally        *
        *            (With respect to Circle 1) *
        *  1. By an int                         *
        *  2. By a Fraction                     *
        *  3. Displaying                        *
        *  4. Returning                         *
        *****************************************
        Select an option (use integer value only): 4

            Returning to previous menu!
    *****************************************
    *  SubMenu - Moving                     *
    *            (With respect to Circle 1) *
    *  1. Horizontally                      *
    *  2. Vertically                        *
    *  3. Displaying                        *
    *  4. Returning                         *
    *****************************************
    Select an option (use integer value only): 2

        *****************************************
        *  SubMenu - Moving Vertically          *
        *            (With respect to Circle 1) *
        *  1. To get a distance of an int       *
        *  2. To get a distance of a Fraction   *
        *  3. Displaying                        *
        *  4. Returning                         *
        *****************************************
        Select an option (use integer value only): 2

          Provide the fraction to move horizontally:
          num: 20

          denom: 1

        *****************************************
        *  SubMenu - Moving Vertically          *
        *            (With respect to Circle 1) *
        *  1. To get a distance of an int       *
        *  2. To get a distance of a Fraction   *
        *  3. Displaying                        *
        *  4. Returning                         *
        *****************************************
        Select an option (use integer value only): 4

            Returning to previous menu!
    *****************************************
    *  SubMenu - Moving                     *
    *            (With respect to Circle 1) *
    *  1. Horizontally                      *
    *  2. Vertically                        *
    *  3. Displaying                        *
    *  4. Returning                         *
    *****************************************
    Select an option (use integer value only): 3

      Circle 1
          Center: 1/1, 2/1
          Radius: 3/1
      Circle 2
          Center: 14/1, 25/1
          Radius: 6/1
    *****************************************
    *  SubMenu - Moving                     *
    *            (With respect to Circle 1) *
    *  1. Horizontally                      *
    *  2. Vertically                        *
    *  3. Displaying                        *
    *  4. Returning                         *
    *****************************************
    Select an option (use integer value only): 4

        Returning to previous menu!

********************************
*         MENU - Hw #7         *
* 1. Initializing (2 Circles)  *
* 2. Positioning               *
* 3. Moving                    *
* 4. Comparing                 *
* 5. Displaying                *
* 6. Quit                      *
********************************
Select an option (use interger value only): 4

    *****************************************
    *  SubMenu - Comparing                  *
    *            (With respect to Circle 1) *
    *  1. Using area with PI of 157/50      *
    *  2. Using perimeter with PI of 157/50 *
    *  3. Displaying                        *
    *  4. Returning                         *
    *****************************************
    Select an option (1, 2, 3, or 4): 1

      Circle 1
          Center: 1/1, 2/1
          Radius: 3/1
          Area: 1413/50

      Circle 2
          Center: 1/1, 2/1
          Radius: 3/1
          Area: 5652/50

      Circle 2 has a larger area than Circle 1.

    *****************************************
    *  SubMenu - Comparing                  *
    *            (With respect to Circle 1) *
    *  1. Using area with PI of 157/50      *
    *  2. Using perimeter with PI of 157/50 *
    *  3. Displaying                        *
    *  4. Returning                         *
    *****************************************
    Select an option (1, 2, 3, or 4): 2

      Circle 1
          Center: 1/1, 2/1
          Radius: 3/1
          Perimiter: 942/50

      Circle 2
          Center: 1/1, 2/1
          Radius: 3/1
          Perimiter: 1884/50

      Circle 2 has a larger perimeter than Circle 1.

    *****************************************
    *  SubMenu - Comparing                  *
    *            (With respect to Circle 1) *
    *  1. Using area with PI of 157/50      *
    *  2. Using perimeter with PI of 157/50 *
    *  3. Displaying                        *
    *  4. Returning                         *
    *****************************************
    Select an option (1, 2, 3, or 4): 4

        Returning to previous menu!

********************************
*         MENU - Hw #7         *
* 1. Initializing (2 Circles)  *
* 2. Positioning               *
* 3. Moving                    *
* 4. Comparing                 *
* 5. Displaying                *
* 6. Quit                      *
********************************
Select an option (use interger value only): 5

      Circle 1
          Center: 1/1, 2/1
          Radius: 3/1
      Circle 2
          Center: 14/1, 25/1
          Radius: 6/1
********************************
*         MENU - Hw #7         *
* 1. Initializing (2 Circles)  *
* 2. Positioning               *
* 3. Moving                    *
* 4. Comparing                 *
* 5. Displaying                *
* 6. Quit                      *
********************************
Select an option (use interger value only): 6

  Having fun ...!

// PROGRAM COMMENTS


The only bumps that I really encountered were the
Positioning and Comparing. I'm not sure if the equations
are quite correct for positioning. Comparing had a few bumps 
since I thought that would be simple but I did the best I could
do. 

*/