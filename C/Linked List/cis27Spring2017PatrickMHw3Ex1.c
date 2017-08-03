/**
* Program Name:	cis27Spring2017PatrickMHw3Ex1.c
* Discussion:	Homework #3, Exercise #1
* Written By:	Patrick Martin
* Date:			2017/04/03
*/
#include <stdio.h>
#include <stdlib.h>
#include "PolyTermPatrickM.h"

// Driver
int main() {

	printf("\nCIS 27 - Data Structures"
		"\nLaney College"
		"\nPatrick Martin"
		"\n\nAssignment Information --"
		"\n  Assignment Number:  Homework 03,"
		"\n                      Coding Assignment -- Exercise #1"
		"\n  Written By:         Patrick Martin"
		"\n  Submitted Date:     2017/04/03\n\n");
	menuPatrickM();

	return 0;
}


/*	Program Output 
	
  ********************************
  *       CREATING OPTIONS       *
  * 1. Add to Left Poly Pointer  *
  * 2. Add to Right Poly Pointer *
  * 3. Quit                      *
  ********************************
  Select the option (1 through 3): 1
          Enter a positive int for exponent: 1
          Enter an int for num: 3
          Enter an int (!= 0) for denom: 4

  ********************************
  *       CREATING OPTIONS       *
  * 1. Add to Left Poly Pointer  *
  * 2. Add to Right Poly Pointer *
  * 3. Quit                      *
  ********************************
  Select the option (1 through 3): 1
          Enter a positive int for exponent: 0
          Enter an int for num: 5
          Enter an int (!= 0) for denom: 12

  ********************************
  *       CREATING OPTIONS       *
  * 1. Add to Left Poly Pointer  *
  * 2. Add to Right Poly Pointer *
  * 3. Quit                      *
  ********************************
  Select the option (1 through 3): 2
          Enter a positive int for exponent: 4
          Enter an int for num: 1
          Enter an int (!= 0) for denom: 1

  ********************************
  *       CREATING OPTIONS       *
  * 1. Add to Left Poly Pointer  *
  * 2. Add to Right Poly Pointer *
  * 3. Quit                      *
  ********************************
  Select the option (1 through 3): 2
          Enter a positive int for exponent: 2
          Enter an int for num: 3
          Enter an int (!= 0) for denom: -7

  ********************************
  *       CREATING OPTIONS       *
  * 1. Add to Left Poly Pointer  *
  * 2. Add to Right Poly Pointer *
  * 3. Quit                      *
  ********************************
  Select the option (1 through 3): 2
          Enter a positive int for exponent: 1
          Enter an int for num: 4
          Enter an int (!= 0) for denom: 9

  ********************************
  *       CREATING OPTIONS       *
  * 1. Add to Left Poly Pointer  *
  * 2. Add to Right Poly Pointer *
  * 3. Quit                      *
  ********************************
  Select the option (1 through 3): 2
          Enter a positive int for exponent: 0
          Enter an int for num: 2
          Enter an int (!= 0) for denom: 11

  ********************************
  *       CREATING OPTIONS       *
  * 1. Add to Left Poly Pointer  *
  * 2. Add to Right Poly Pointer *
  * 3. Quit                      *
  ********************************
  Select the option (1 through 3): 3

    Returning to "POLYNOMIAL OPERATIONS"

******************************
*    POLYNOMIAL OPERATIONS   *
* 1. Creating polynomials    *
* 2. Adding polynomials      *
* 3. Multiplying polynomials *
* 4. Displaying polynomials  *
* 5. Clearing polynomials    *
* 6. Quit                    *
******************************
Select the option (1 through 6): 4

  Left Poly Pointer:
    1/1x2 + 3/4x1 + 5/12
  Right Poly Pointer:
    1/1x4- 3/7x2 + 4/9x1 + 2/11
  Resulting Poly Pointer: 0

******************************
*    POLYNOMIAL OPERATIONS   *
* 1. Creating polynomials    *
* 2. Adding polynomials      *
* 3. Multiplying polynomials *
* 4. Displaying polynomials  *
* 5. Clearing polynomials    *
* 6. Quit                    *
******************************
Select the option (1 through 6): 5

  **************************************
  *        Clearing Polynomials        *
  * 1. Clearing Left Poly Pointer      *
  * 2. Clearing Right Poly Pointer     *
  * 3. Clearing Resulting Poly Pointer *
  * 4. Quit                            *
  **************************************
  Select the option (1 through 4): 1

  Left Poly Pointer:
    1/1x2 + 3/4x1 + 5/12
  Which node do you want to delete?: 90
    Clearing the last node.

  Left Poly Pointer:
    1/1x2 + 3/4x1
  **************************************
  *        Clearing Polynomials        *
  * 1. Clearing Left Poly Pointer      *
  * 2. Clearing Right Poly Pointer     *
  * 3. Clearing Resulting Poly Pointer *
  * 4. Quit                            *
  **************************************
  Select the option (1 through 4): 1

  Left Poly Pointer:
    1/1x2 + 3/4x1
  Which node do you want to delete?: 2
    Clearing node at place 2.

  Left Poly Pointer:
    1/1x2
  **************************************
  *        Clearing Polynomials        *
  * 1. Clearing Left Poly Pointer      *
  * 2. Clearing Right Poly Pointer     *
  * 3. Clearing Resulting Poly Pointer *
  * 4. Quit                            *
  **************************************
  Select the option (1 through 4): 1

  Left Poly Pointer:
    1/1x2
  Which node do you want to delete?: 1
    Clearing the first node.

  Left Poly Pointer: 0
  **************************************
  *        Clearing Polynomials        *
  * 1. Clearing Left Poly Pointer      *
  * 2. Clearing Right Poly Pointer     *
  * 3. Clearing Resulting Poly Pointer *
  * 4. Quit                            *
  **************************************
  Select the option (1 through 4): 2

  Right Poly Pointer:
    1/1x4 - 3/7x2 + 4/9x1 + 2/11
  Which node do you want to delete?: 4
    Clearing node at place 4.

  Right Poly Pointer:
    1/1x4- 3/7x2 + 4/9x1
  **************************************
  *        Clearing Polynomials        *
  * 1. Clearing Left Poly Pointer      *
  * 2. Clearing Right Poly Pointer     *
  * 3. Clearing Resulting Poly Pointer *
  * 4. Quit                            *
  **************************************
  Select the option (1 through 4): 4

    Returning to "POLYNOMIAL OPERATIONS"

******************************
*    POLYNOMIAL OPERATIONS   *
* 1. Creating polynomials    *
* 2. Adding polynomials      *
* 3. Multiplying polynomials *
* 4. Displaying polynomials  *
* 5. Clearing polynomials    *
* 6. Quit                    *
******************************
Select the option (1 through 6): 5

  **************************************
  *        Clearing Polynomials        *
  * 1. Clearing Left Poly Pointer      *
  * 2. Clearing Right Poly Pointer     *
  * 3. Clearing Resulting Poly Pointer *
  * 4. Quit                            *
  **************************************
  Select the option (1 through 4): 3

  Resulting Poly Pointer: No polynomials to clear

  Resulting Poly Pointer: 0

  **************************************
  *        Clearing Polynomials        *
  * 1. Clearing Left Poly Pointer      *
  * 2. Clearing Right Poly Pointer     *
  * 3. Clearing Resulting Poly Pointer *
  * 4. Quit                            *
  **************************************
  Select the option (1 through 4): 2

  Right Poly Pointer:
    1/1x4 - 3/7x2 + 4/9x1
  Which node do you want to delete?: 1
    Clearing the first node.

  Right Poly Pointer:
    -3/7x2+ 4/9x1
  **************************************
  *        Clearing Polynomials        *
  * 1. Clearing Left Poly Pointer      *
  * 2. Clearing Right Poly Pointer     *
  * 3. Clearing Resulting Poly Pointer *
  * 4. Quit                            *
  **************************************
  Select the option (1 through 4): 2

  Right Poly Pointer:
    -3/7x2 + 4/9x1
  Which node do you want to delete?: 2
    Clearing node at place 2.

  Right Poly Pointer:
    -3/7x2
  **************************************
  *        Clearing Polynomials        *
  * 1. Clearing Left Poly Pointer      *
  * 2. Clearing Right Poly Pointer     *
  * 3. Clearing Resulting Poly Pointer *
  * 4. Quit                            *
  **************************************
  Select the option (1 through 4): 2

  Right Poly Pointer:
    -3/7x2
  Which node do you want to delete?: 1
    Clearing the first node.

  Right Poly Pointer: 0
  **************************************
  *        Clearing Polynomials        *
  * 1. Clearing Left Poly Pointer      *
  * 2. Clearing Right Poly Pointer     *
  * 3. Clearing Resulting Poly Pointer *
  * 4. Quit                            *
  **************************************
  Select the option (1 through 4): 4

    Returning to "POLYNOMIAL OPERATIONS"

******************************
*    POLYNOMIAL OPERATIONS   *
* 1. Creating polynomials    *
* 2. Adding polynomials      *
* 3. Multiplying polynomials *
* 4. Displaying polynomials  *
* 5. Clearing polynomials    *
* 6. Quit                    *
******************************
Select the option (1 through 6): 4

  Left Poly Pointer: 0
  Right Poly Pointer: 0
  Resulting Poly Pointer: 0

******************************
*    POLYNOMIAL OPERATIONS   *
* 1. Creating polynomials    *
* 2. Adding polynomials      *
* 3. Multiplying polynomials *
* 4. Displaying polynomials  *
* 5. Clearing polynomials    *
* 6. Quit                    *
******************************
Select the option (1 through 6): 90

  You should not be in this class!

******************************
*    POLYNOMIAL OPERATIONS   *
* 1. Creating polynomials    *
* 2. Adding polynomials      *
* 3. Multiplying polynomials *
* 4. Displaying polynomials  *
* 5. Clearing polynomials    *
* 6. Quit                    *
******************************
Select the option (1 through 6): 6

*/


/*	PatrickM_Logic Issues_Code Issues
	I could not get the add or multiply function to work. 
	I could probably solve it on my own but I feel like
	I'm making a simple mistake that stress has caused me to overlook. 

*/

/*	Output Issues_COMMENTS
	
	Nothing wrong with the output. 

*/

//CODE I MIGHT USE


/*
PolyNodePtrPatrick tmpPolyListPtr = listOne;

printf("\n  Left Poly Pointer: ");
if (tmpPolyListPtr->next == 0) {
printf("0");
}
else {
printf("\n    %d/%dx%d ",
tmpPolyListPtr->next->ptPtr->coePtr->num,
tmpPolyListPtr->next->ptPtr->coePtr->denom,
tmpPolyListPtr->next->ptPtr->exp);
}
*/
//PolyNodePtrPatrick NodeAddition = 0;
//NodeAddition = (PolyNodePatrick*)malloc(sizeof(PolyNodePatrick));
//NodeAddition->ptPtr = (PolyTermPatrick*)malloc(sizeof(PolyTermPatrick));
//NodeAddition->ptPtr->coePtr = (FractionPatrick*)malloc(sizeof(FractionPatrick));
//NodeAddition->next = 0;

//NodeAddition->ptPtr->exp = 8008;
//NodeAddition->ptPtr->coePtr->num = 13;
//NodeAddition->ptPtr->coePtr->denom = 9;
//insertPolyNodePatrickM(&tmpPolyList, NodeAddition);

/* YOU WILL PROBABLY NEED THIS
PolyNodePtrPatrick NodeAddition1 = 0;
NodeAddition1 = (PolyNodePatrick*)malloc(sizeof(PolyNodePatrick));
NodeAddition1->ptPtr = (PolyTermPatrick*)malloc(sizeof(PolyTermPatrick));
NodeAddition1->ptPtr->coePtr = (FractionPatrick*)malloc(sizeof(FractionPatrick));
NodeAddition1->next = 0;

NodeAddition1->ptPtr->exp = 333;
NodeAddition1->ptPtr->coePtr->num = 9;
NodeAddition1->ptPtr->coePtr->denom = 3;

insertPolyNodePatrickM(&tmpPolyList, NodeAddition);
insertPolyNodePatrickM(&tmpPolyList, NodeAddition1);
*/

/////////