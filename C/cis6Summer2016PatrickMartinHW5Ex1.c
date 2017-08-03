/**
* Program Name:		cis6Summer2016PatrickMartinHW5Ex1.c
* Discussion:		Homework #5 Exercise #1
* Written By:		Patrick Martin
* Date:				2016/07/28
*/

#include <stdio.h>

	// Function Prototypes
	void displayClassInfoPatrickM(void);
	void menuHW5PatrickM(void);
	int displayPosNegEvenOdd(int);
	void displayIntStatisticPatrickM(int);


	//Driver
int main() {
	displayClassInfoPatrickM();
	menuHW5PatrickM();

	return 0;
}

	//Function Definitions
void displayClassInfoPatrickM() { 
	printf("CIS 6 - Introduction to Programming in (C)"
	"\nLaney College"
	"\nPatrick Martin"
	"\n \nAssignment Information --"
	"\n  Assignment Number:  Homework #5"
		"\n                      Coding Assignment -- Exercise #1"
	"\n  Written by:	      Patrick Martin"
	"\n  Submitted Date:     2016/07/28\n");
}

void menuHW5PatrickM() {
	int option;
	int integer;

	do {
		printf("\n****************************************************"
		"\n*                  MENU - HW #5		           *"
		"\n* (1) Calling displayUpdatedIntStatisticPatrickM() *"
		"\n* (2) Quit				           *"
		"\n****************************************************"
		"\nEnter your option (1 or 2): ");
		scanf("%d", &option);

		switch (option) {
		case 1:
			printf("\nEnter an integer: ");
			scanf("%d", &integer);
			
			printf("\nCalling displayIntStatisticPatrickM() --\n");
			
			displayPosNegEvenOdd(integer); 
			
			displayIntStatisticPatrickM(integer);

			break;
		case 2:
			printf("\n  Have fun!\n");
			break;
		default:
			printf("\n \nWRONG OPTION!\n");
		} 
	} while (option != 2);
}

int displayPosNegEvenOdd(int arg) {

	if (arg == 0) {
		printf("\n  Zero (0) is the provided number.\n");
	} else if ( arg < 0 && arg % 2 == 0 ) {
		printf("\n  %d is a negative and even number.\n", arg);
	} else if (arg > 0 && arg % 2 == 0) {
		printf("\n  %d is a positive and even number.\n", arg);
	} else if (arg < 0 && arg % 2 != 0) {
		printf("\n  %d is a negative and odd number.\n", arg);
	} else {
		printf("\n  %d is a positive and odd number.\n", arg);
	}
}

void displayIntStatisticPatrickM(int arg) {
	int intTOaray[10];
	int evenARAY[10];
	int oddARAY[10];
	int size = 0; 
	int evenSIZE = 0;
	int oddSIZE = 0;
	int i = 0;
	int j = 0; 
	int k = 0;
	int tmp;
	int parity;

	if (arg < 0) {
		arg = -arg;
	}

	if (arg % 2 == 0) {
		parity = 0;
	} else {
		parity = 1;
	}

	do {
		intTOaray[i] = arg % 10;
		arg /= 10;
		size++;
		i++;
	} while (arg != 0);

	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size;) {
			if (intTOaray[j] == intTOaray[i]) {
				for (k = j; k < size; k++) {
					intTOaray[k] = intTOaray[k + 1];
				}
				size--;
			} else 
				j++;
		}
	}


	for (i = 0; i < (size - 1); i++) {
		for (j = i + 1; j < size; j++) {
			if (intTOaray[i] > intTOaray[j]) {
				tmp = intTOaray[i];
				intTOaray[i] = intTOaray[j];
				intTOaray[j] = tmp;
			}
		}
	}
	
	

	printf("\n  It has the following unique digit(s):");
	for (i = 0; i < size; i++) {
		printf("\n    %d", intTOaray[i]);
	}

	j = 0;
	k = 0;
	for (i = 0; i < size; i++) {
		if (intTOaray[i] % 2 == 0) {
			evenARAY[j] = intTOaray[i];
			evenSIZE++;
			j++;
		} else {
			oddARAY[k] = intTOaray[i];
			oddSIZE++;
			k++;
		}
	}


	/*for (i = 0; i < evenSIZE; i++) {
		printf("%d ", evenARAY[i]);
	}
	

	if (parity = 0) {
		printf("\n  The least significant digit: %d"
			   "\n  The most significant digit: %d",
			    evenARAY[0], evenARAY[(sizeof(evenARAY) / 4)]);
	}
	*/
}



/** PROGRAM OUTPUT
CIS 6 - Introduction to Programming in (C)
Laney College
Patrick Martin

Assignment Information --
Assignment Number:  Homework #5
Coding Assignment -- Exercise #1
Written by:         Patrick Martin
Submitted Date:     2016/07/28

****************************************************
*                  MENU - HW #5                    *
* (1) Calling displayUpdatedIntStatisticPatrickM() *
* (2) Quit                                         *
****************************************************
Enter your option (1 or 2): 1

Enter an integer: -1237903

Calling displayIntStatisticPatrickM() --

-1237903 is a negative and odd number.

It has the following unique digit(s):
0
1
2
3
7
9
****************************************************
*                  MENU - HW #5                    *
* (1) Calling displayUpdatedIntStatisticPatrickM() *
* (2) Quit                                         *
****************************************************
Enter your option (1 or 2): 1

Enter an integer: 0

Calling displayIntStatisticPatrickM() --

Zero (0) is the provided number.

It has the following unique digit(s):
0
****************************************************
*                  MENU - HW #5                    *
* (1) Calling displayUpdatedIntStatisticPatrickM() *
* (2) Quit                                         *
****************************************************
Enter your option (1 or 2): 1

Enter an integer: 9879803

Calling displayIntStatisticPatrickM() --

9879803 is a positive and odd number.

It has the following unique digit(s):
0
3
7
8
9
****************************************************
*                  MENU - HW #5                    *
* (1) Calling displayUpdatedIntStatisticPatrickM() *
* (2) Quit                                         *
****************************************************
Enter your option (1 or 2): 1

Enter an integer: 8

Calling displayIntStatisticPatrickM() --

8 is a positive and even number.

It has the following unique digit(s):
8
****************************************************
*                  MENU - HW #5                    *
* (1) Calling displayUpdatedIntStatisticPatrickM() *
* (2) Quit                                         *
****************************************************
Enter your option (1 or 2): -212448940


WRONG OPTION!

****************************************************
*                  MENU - HW #5                    *
* (1) Calling displayUpdatedIntStatisticPatrickM() *
* (2) Quit                                         *
****************************************************
Enter your option (1 or 2): 1

Enter an integer: -212448940

Calling displayIntStatisticPatrickM() --

-212448940 is a negative and even number.

It has the following unique digit(s):
0
1
2
4
8
9
****************************************************
*                  MENU - HW #5                    *
* (1) Calling displayUpdatedIntStatisticPatrickM() *
* (2) Quit                                         *
****************************************************
Enter your option (1 or 2): 2

Have fun!
Press any key to continue . . .
*/

/** PROGRAM_COMMENTS
I had to press CONTROl+Z to get 
the proper formatting when pasting
the output. 
I didn't complete this one time. 
*/