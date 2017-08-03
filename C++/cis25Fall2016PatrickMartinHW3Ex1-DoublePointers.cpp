/**
* Program Name:	cis25Fall2016PatrickMartinHW3Ex1.cpp
* Discussion:	Homework #3, Exercise #1
* Written By:	Patrick Martin
* Date:			2016/09/29
*/

#include <iostream>
using namespace std;

// Function Prototypes

int** setupUserInputAray(int);
int* digitintoSEParays(int*, int, int**, int*);


//Driver
int main() {
	int size = 0;
	int option;
	int** iPtrPtr = nullptr;
	int* dataAry = nullptr;
	int i;
	int* finalAray = nullptr;
	int uncommonDigitCount = 0;

	cout << "CIS 25 - C++ Programming\n"
			"Laney College\n"
			"Patrick Martin\n"
			"\nAssignment Information --\n"
			"  Assignment Number:    Homework 03,\n"
			"                        Coding Assignment -- Exercise #1\n"
			"  Written By:           Patrick Martin\n"
			"  Submitted Date:       2016/09/29\n \n";

	do {
		cout << "\n*********************************************\n"
				"*                     MENU                  *\n"
				"* 1. Calling extractUncommonDigitPatrickM() *\n"
				"* 2. Quit                                   *\n"
				"*********************************************\n"
			"Select an option (1 or 2): ";
	
		cin >> option;
		switch (option) {
		case 1:
			cout << "\n\n  How many integers? ";
			cin >> size;

			dataAry = new int[size];
			for (i = 0; i < size; i++) {
				cout << "    Enter integer #" << i + 1 << ": ";
				cin >> *(dataAry + i);
			}

			cout << "\n\n  The original array:";
			for (i = 0; i < size; i++) {
				cout << "\n    " << *(dataAry + i);
			}

			//Create double-pointer for amount of arays based on 'size'
			iPtrPtr = setupUserInputAray(size);

			//Creates aray to be displayed below 
			finalAray = digitintoSEParays(dataAry, size, iPtrPtr, finalAray);

			//Counter for Uncommon Digits
			for (i = 0; i < 10; i++) {
				if ((*(finalAray + i)) > 0) {
					uncommonDigitCount++;
				}
			}

			cout << "\n\n  Calling extractUncommonDigitPatrickM() -\n\n"
				    "  Displaying after returning the array -- The Uncommon Digits: \n"
					"    There is/are " << uncommonDigitCount << " uncommon digit(s)\n";
			
			//Sorted Even Uncommon Digits
			for (i = 0; i < 10; i += 2) {
				if ((*(finalAray + i)) > 0) {
					cout << "      {" << i << ", " << (*(finalAray + i)) << "}\n";
				}
			}

			//Sorted Odd Uncommon Digits
			for (i = 1; i < 10; i += 2) {
				if ((*(finalAray + i)) > 0) {
					cout << "      {" << i << ", " << (*(finalAray + i)) << "}\n";
				}
			}

			//Delete Arays 
			delete[] finalAray;
			finalAray = nullptr;
			delete[] dataAry;
			dataAry = nullptr;
			for (i = 0; i < size; i++) {
				delete[] *(iPtrPtr + i);
			}
			delete[] iPtrPtr;
			iPtrPtr = nullptr;

			//Reset Variables
			uncommonDigitCount = 0;

			break;
		case 2:
			cout << "\n \n  Fun Exercise ...\n \n";
			break;
		default:
			cout << "\n  \n  WRONG OPTION!\n\n";
		}
	} while (option != 2);

	return 0;
}

//Function Definitions

int** setupUserInputAray(int arg) {
	int** iPtrPtr = nullptr;
	int i;

	iPtrPtr = new int*[arg];

	for (i = 0; i < arg; i++) {
		*(iPtrPtr + i) = new int[10]();
	}

	return iPtrPtr;
}

int* digitintoSEParays(int* dataAry, int size, int** digitInfoAry, int* finalAray) {
	int tmp;
	int i, j, k;
	int araycounter = 1;
	finalAray = new int[10]();

	for (i = 0; i < size; i++) {
		tmp = (*(dataAry + i) < 0) ? -(*(dataAry + i)) : *(dataAry + i);

		do {
			*(*(digitInfoAry + i) + tmp % 10) = araycounter;
			tmp /= 10;
		} while (tmp != 0);
		
		araycounter++;
	}

	
	for (i = 0; i < size; i++) {
		for (j = 0; j < 10; j++) {
			if ((*(*(digitInfoAry + i) + j)) > 0) {
				if ((*(finalAray + j)) == 0) {
					(*(finalAray + j)) = (*(*(digitInfoAry + i) + j));
				}
				else if ((*(finalAray + j)) > 0) {
					(*(finalAray + j)) = -1;
				}
					
			}
		}
	}

	//Zero contents of final Aray
	for (i = 0; i < 10; i++) {
		if ((*(finalAray + i)) == -1) {
			(*(finalAray + i)) = 0;
		}
	}

	return finalAray;
}

/* PROGRAM_OUTPUT


CIS 25 - C++ Programming
Laney College
Patrick Martin

Assignment Information --
  Assignment Number:    Homework 03,
                        Coding Assignment -- Exercise #1
  Written By:           Patrick Martin
  Submitted Date:       2016/09/29


*********************************************
*                     MENU                  *
* 1. Calling extractUncommonDigitPatrickM() *
* 2. Quit                                   *
*********************************************
Select an option (1 or 2): 4


  WRONG OPTION!


*********************************************
*                     MENU                  *
* 1. Calling extractUncommonDigitPatrickM() *
* 2. Quit                                   *
*********************************************
Select an option (1 or 2): 1


  How many integers? 3
    Enter integer #1: 32965
    Enter integer #2: -275721
    Enter integer #3: 3028063


  The original array:
    32965
    -275721
    3028063

  Calling extractUncommonDigitPatrickM() -

  Displaying after returning the array -- The Uncommon Digits:
    There is/are 5 uncommon digit(s)
      {0, 3}
      {8, 3}
      {1, 2}
      {7, 2}
      {9, 1}

*********************************************
*                     MENU                  *
* 1. Calling extractUncommonDigitPatrickM() *
* 2. Quit                                   *
*********************************************
Select an option (1 or 2): 1


  How many integers? 4
    Enter integer #1: 32965
    Enter integer #2: -275721
    Enter integer #3: 3028063
    Enter integer #4: 10789


  The original array:
    32965
    -275721
    3028063
    10789

  Calling extractUncommonDigitPatrickM() -

  Displaying after returning the array -- The Uncommon Digits:
    There is/are 0 uncommon digit(s)

*********************************************
*                     MENU                  *
* 1. Calling extractUncommonDigitPatrickM() *
* 2. Quit                                   *
*********************************************
Select an option (1 or 2): 2


  Fun Exercise ...

Press any key to continue . . .


*/

/* PROGRAM_COMMENTS

I was not able to figure out how to properly 
use Element 0 as a means to hold the uncommon digit size.
Instead, I created a loop that went through the finalAray 
to see if there was a value and then to increment the varible 
uncommonDigitCount. 


I used an assortment of loops to test accordingly. 
Loops below:

for (i = 0; i < 10; i++) {
cout << "\n" << (*(finalAray + i)) ;
}
*/

/* Use this to check the contents of the arays.
for (i = 0; i < size; i++) {
for (j = 0; j < 10; j++) {
cout << "\nElement of index " << j << " : "
<< *(*(digitInfoAry + i) + j);
}
}

----
//TEST// Delete until --->
cout << "\nTest out of Method";
//for (i = 0; i < 10; i++) {
//cout << "\n" << (*(finalAray + i));
//}
//cout << "\n" << (*(finalAray + 0));
// Hard stop for deleting --|
-----


//Check contents of finalAray
for (i = 0; i < 10; i++) {
cout << "\n" << (*(finalAray + i));
}
// End code to check final contents. Can Delete

---

uncommonDigitCount = 2 * (*(finalAray + 0)) - 1;
if (uncommonDigitCount < 0) {
uncommonDigitCount = 0;
}
----

*/