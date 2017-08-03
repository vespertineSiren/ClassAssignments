
/**
* Program Name:	cis27Spring2017PatrickMHW4Ex1.c
* Discussion:	Homework 4, Exercise 1
* Written By:	Patrick M.
* Date:			2017/05/16
*/
#include <stdio.h>

// Data/ struct

// Function Prototypes

void printArray(int*, int);
void sortradixPatrickM(int*, int);
void menu01PatrickM(void);

// Driver

int main() {
	menu01PatrickM();

	return 0;
}

// Function Definitions 

void printArray(int* array, int size) {

	int i;

	printf("[ ");
	for (i = 0; i < size; i++) {
		if (i == (size - 1)) {
			printf("%d ", array[i]);
		} else {
			printf("%d, ", array[i]);
		}
	}
	printf("]\n");
}



void sortradixPatrickM(int * array, int size) {

	printf("\n\nRunning Radix Sort on Unsorted List!\n\n");

	int i, j;
	int* semiSorted = (int*)malloc(size * sizeof(int));
	int significantDigit = 1;
	int largestNum = -1;

	for (i = 0; i < size; i++) {
		if (array[i] > largestNum) {
			largestNum = array[i];
		}

	}


	j = 1;
	while (largestNum / significantDigit > 0) {

		printf("Pass %d: ", j);
		j++;
		printArray(array, size);

		int storeIndexSignificantDigits[10] = { 0 };

		for (i = 0; i < size; i++) {
			storeIndexSignificantDigits[(array[i] / significantDigit) % 10]++;
		}

		for (i = 1; i < 10; i++) {
			storeIndexSignificantDigits[i] += storeIndexSignificantDigits[i - 1];
		}

		for (i = size - 1; i >= 0; i--) {
			semiSorted[--storeIndexSignificantDigits[(array[i] / significantDigit) % 10]] = array[i];
		}

		for (i = 0; i < size; i++) {
			array[i] = semiSorted[i];
		}

		significantDigit *= 10;

	}
}

void menu01PatrickM() {
	int option;
	int* dataAry = 0;
	int size = 0;
	int* tmpAry;
	int tmpSize = 0;
	int element = 0;

	printf("CIS 27 - C Programming"
		"\nLaney College"
		"\nPatrick Martin"
		"\nAssignment Information --"
		"\n\n  Assignment Number:    Homework 04,"
		"\n                        Coding Assignment -- Exercise #1"
		"\n  Written By:           Patrick Martin"
		"\n  Submitted Date:       2017/05/16");

	do {
		printf("\n\n**********************************\n"
			"*         MENU - Radix Sort      *\n"
			"* 1. Creating/Updating series    *\n"
			"* 2. Calling sortRadixPatricM()  *\n"
			"* 3. Displaying Series           *\n"
			"* 4. Quit                        *\n"
			"**********************************\n"
			"Select an option (1 or 2): ");
		scanf("%d", &option);

		switch (option) {
		case 1:
			if (dataAry == 0) {
				printf("\n  How many integers? ");
				scanf("%d", &size);

				dataAry = (int*)malloc(size * sizeof(int));
				for (int i = 0; i < size; i++) {
					printf("    Enter integer #%d: ", i + 1);
					scanf("%d", &*(dataAry + i));
				}

				printf("\n\n  Unsorted List: ");
				printArray(&dataAry[0], size);
			} else {
				do {
					printf("\n\n    **********************************\n"
						"    *     MENU - Updating Series     *\n"
						"    * 1. Add Element                 *\n"
						"    * 2. Create New Array            *\n"
						"    * 3. Quit                        *\n"
						"    **********************************\n"
						"    Select an option (1, 2, or 3): ");
					scanf("%d", &option);
					
					switch (option) {
					case 1: 
						printf("\n    Adding an Element");
						printf("\n    Current List:");
						printArray(&dataAry[0], size);
						
						tmpSize = size + 1;
						tmpAry = (int*)malloc(tmpSize * sizeof(int));

						printf("    Enter an int to be added: ");
						scanf("%d", &element);

						for (int i = 0; i < size; i++) {
							tmpAry[i] = dataAry[i];
						}
						tmpAry[tmpSize - 1] = element;

						free(dataAry);
						size = tmpSize;
						dataAry = (int*)malloc(size * sizeof(int));

						for (int i = 0; i < size; i++) {
							dataAry[i] = tmpAry[i];
						}

						printf("    Displaying Current List:");
						printArray(&dataAry[0], size);

						free(tmpAry);
						tmpAry = 0;
						size = 0;
						element = 0;

						break;
					case 2: 
						printf("\n    Creating a new array");
						free(dataAry);
						size = 0;

						printf("\n    How many integers? ");
						scanf("%d", &size);

						dataAry = (int*)malloc(size * sizeof(int));
						for (int i = 0; i < size; i++) {
							printf("      Enter integer #%d: ", i + 1);
							scanf("%d", &*(dataAry + i));
						}

						printf("\n    Unsorted List: ");
						printArray(&dataAry[0], size);


						break;
					case 3: 
						printf("\n    Returning to Main Menu\n");
					}
				} while (option != 3);
			}
			break;
		case 2:
			if (dataAry == 0) {
				printf("\n  \n  Inappropriate Option!\n\n");
			} else {
				printf("\n\n  Calling sortradixPatrickM! ");
				sortradixPatrickM(&dataAry[0], size);
			}
			break;
			break;
		case 3:
			if (dataAry == 0) {
				printf("\n  \n  Inappropriate Option!\n\n");
			}
			else {
				printf("\n  Displaying Current List:");
				printArray(&dataAry[0], size);
			}
			break;
		case 4:
			printf("\n \n  Having Fun !\n \n");
			free(dataAry);
			break;
		default:
			printf("\n  \n  WRONG OPTION!\n\n");
		}
	} while (option != 4);

	return 0;
}


/* Program Output

CIS 27 - C Programming
Laney College
Patrick Martin
Assignment Information --

  Assignment Number:    Homework 04,
                        Coding Assignment -- Exercise #1
  Written By:           Patrick Martin
  Submitted Date:       2017/05/16

**********************************
*         MENU - Radix Sort      *
* 1. Creating/Updating series    *
* 2. Calling sortRadixPatricM()  *
* 3. Displaying Series           *
* 4. Quit                        *
**********************************
Select an option (1 or 2): 1

  How many integers? 10
    Enter integer #1: 7
    Enter integer #2: 2017
    Enter integer #3: 36
    Enter integer #4: 4033
    Enter integer #5: 552337
    Enter integer #6: 50160
    Enter integer #7: 24
    Enter integer #8: 45
    Enter integer #9: 802
    Enter integer #10: 552233


  Unsorted List: [ 7, 2017, 36, 4033, 552337, 50160, 24, 45, 802, 552233 ]


**********************************
*         MENU - Radix Sort      *
* 1. Creating/Updating series    *
* 2. Calling sortRadixPatricM()  *
* 3. Displaying Series           *
* 4. Quit                        *
**********************************
Select an option (1 or 2): 3

  Displaying Current List:[ 7, 2017, 36, 4033, 552337, 50160, 24, 45, 802, 552233 ]


**********************************
*         MENU - Radix Sort      *
* 1. Creating/Updating series    *
* 2. Calling sortRadixPatricM()  *
* 3. Displaying Series           *
* 4. Quit                        *
**********************************
Select an option (1 or 2): 2


  Calling sortradixPatrickM!

Running Radix Sort on Unsorted List!

Pass 1: [ 7, 2017, 36, 4033, 552337, 50160, 24, 45, 802, 552233 ]
Pass 2: [ 50160, 802, 4033, 552233, 24, 45, 36, 7, 2017, 552337 ]
Pass 3: [ 802, 7, 2017, 24, 4033, 552233, 36, 552337, 45, 50160 ]
Pass 4: [ 7, 2017, 24, 4033, 36, 45, 50160, 552233, 552337, 802 ]
Pass 5: [ 7, 24, 36, 45, 50160, 802, 2017, 552233, 552337, 4033 ]
Pass 6: [ 7, 24, 36, 45, 802, 2017, 4033, 50160, 552233, 552337 ]


**********************************
*         MENU - Radix Sort      *
* 1. Creating/Updating series    *
* 2. Calling sortRadixPatricM()  *
* 3. Displaying Series           *
* 4. Quit                        *
**********************************
Select an option (1 or 2): 3

  Displaying Current List:[ 7, 24, 36, 45, 802, 2017, 4033, 50160, 552233, 552337 ]


**********************************
*         MENU - Radix Sort      *
* 1. Creating/Updating series    *
* 2. Calling sortRadixPatricM()  *
* 3. Displaying Series           *
* 4. Quit                        *
**********************************
Select an option (1 or 2): 1


    **********************************
    *     MENU - Updating Series     *
    * 1. Add Element                 *
    * 2. Create New Array            *
    * 3. Quit                        *
    **********************************
    Select an option (1, 2, or 3): 1

    Adding an Element
    Current List:[ 7, 24, 36, 45, 802, 2017, 4033, 50160, 552233, 552337 ]
    Enter an int to be added: 552277
    Displaying Current List:[ 7, 24, 36, 45, 802, 2017, 4033, 50160, 552233, 552337, 552277 ]


    **********************************
    *     MENU - Updating Series     *
    * 1. Add Element                 *
    * 2. Create New Array            *
    * 3. Quit                        *
    **********************************
    Select an option (1, 2, or 3): 3

    Returning to Main Menu


**********************************
*         MENU - Radix Sort      *
* 1. Creating/Updating series    *
* 2. Calling sortRadixPatricM()  *
* 3. Displaying Series           *
* 4. Quit                        *
**********************************
Select an option (1 or 2): 4


  Having Fun !

Press any key to continue . . .

*/

/* Program Comments
I wasn't sure if you wanted to delete elements with option 1
so I just went with my gut and added New Array and Adding Element. 

*/



///////////////////////////////
