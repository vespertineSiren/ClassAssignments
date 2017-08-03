/**
* Program Name:	TFraction.c
* Discussion:	Homework #2, Exercise #1
* Written By:	Patrick Martin
* Date:			2017/03/14
*/
#include <stdio.h>
#include <stdlib.h>
#include "PolyTermPatrickM.h"

//Function Implementation//

//Utility 
void menuPatrickM() {
	int option, length, nthNode, order;
	
	//Left, Right, Resulting Ptrs
	PolyListPatrick LeftPtr = 0;
	PolyListPatrick RightPtr = 0;
	PolyListPatrick ResultingPtr = 0;
	LeftPtr = (PolyNodePatrick*)malloc(sizeof(PolyNodePatrick));
	RightPtr = (PolyNodePatrick*)malloc(sizeof(PolyNodePatrick));
	ResultingPtr = (PolyNodePatrick*)malloc(sizeof(PolyNodePatrick));
	LeftPtr->next = 0;
	RightPtr->next = 0;
	ResultingPtr->next = 0;

	//Node to be added to list 
	PolyNodePtrPatrick NodeAddedtoList = 0;

	do {
		printf("\n******************************"
			"\n*    POLYNOMIAL OPERATIONS   *"
			"\n* 1. Creating polynomials    *"
			"\n* 2. Adding polynomials      *"
			"\n* 3. Multiplying polynomials *"
			"\n* 4. Displaying polynomials  *"
			"\n* 5. Clearing polynomials    *"
			"\n* 6. Quit                    *"
			"\n******************************"
			"\nSelect the option (1 through 6): ");
		scanf("%d", &option);
		switch (option) {
		case 1:
			do {
				printf("\n  ********************************"
					"\n  *       CREATING OPTIONS       *"
					"\n  * 1. Add to Left Poly Pointer  *"
					"\n  * 2. Add to Right Poly Pointer *"
					"\n  * 3. Quit                      *"
					"\n  ********************************"
					"\n  Select the option (1 through 3): ");
				scanf("%d", &option);
				switch (option) {
				case 1:
					NodeAddedtoList = createPolyNodePatrickM();
					insertPolyNodePatrickM(&LeftPtr, NodeAddedtoList);
					NodeAddedtoList = 0;
					break;
				case 2:
					NodeAddedtoList = createPolyNodePatrickM();
					insertPolyNodePatrickM(&RightPtr, NodeAddedtoList);
					NodeAddedtoList = 0;
					break;
				case 3:
					printf("\n    Returning to \"POLYNOMIAL OPERATIONS\"\n");
					break;
				default:
					printf("\n    Wrong Option\n");
				}
			} while (option != 3);
				break;
		case 2:
			
			while (ResultingPtr->next != 0) {
				removePolyNodePatrickM(&ResultingPtr, 1);
			}

			printf("\n  Adding Left Poly Pointer to Right Poly Pointer");
			ResultingPtr = addPolyPatrickM(&(*LeftPtr), &(*RightPtr));
			printf("\n  Resulting Poly Pointer: ");
			if (ResultingPtr->next == 0) {
				printf("0\n");
			}
			else {
				printf("\n    %d/%dx%d",
					ResultingPtr->next->ptPtr->coePtr->num,
					ResultingPtr->next->ptPtr->coePtr->denom,
					ResultingPtr->next->ptPtr->exp);
				displayPolynomialsPatrickM(&ResultingPtr);
			}
			break;
		case 3:

			while (ResultingPtr->next != 0) {
				removePolyNodePatrickM(&ResultingPtr, 1);
			}
			
			printf("\n  Multiplying Left Poly Pointer to Right Poly Pointer");
			ResultingPtr = multiplyPolyPatrickM(&(*LeftPtr), &(*RightPtr));
			printf("\n  Resulting Poly Pointer: ");
			if (ResultingPtr->next == 0) {
				printf("0\n");
			}
			else {
				printf("\n    %d/%dx%d",
					ResultingPtr->next->ptPtr->coePtr->num,
					ResultingPtr->next->ptPtr->coePtr->denom,
					ResultingPtr->next->ptPtr->exp);
				displayPolynomialsPatrickM(&ResultingPtr);
			}
			break;
		case 4:
			printf("\n  Left Poly Pointer: ");
			if (LeftPtr->next == 0) {
				printf("0");
			}
			else {
				printf("\n    %d/%dx%d ",
					LeftPtr->next->ptPtr->coePtr->num,
					LeftPtr->next->ptPtr->coePtr->denom,
					LeftPtr->next->ptPtr->exp);
				displayPolynomialsPatrickM(&LeftPtr);
			}

			printf("\n  Right Poly Pointer: ");
			if (RightPtr->next == 0) {
				printf("0");
			}
			else {
				printf("\n    %d/%dx%d",
					RightPtr->next->ptPtr->coePtr->num,
					RightPtr->next->ptPtr->coePtr->denom,
					RightPtr->next->ptPtr->exp);
				displayPolynomialsPatrickM(&RightPtr);
			}

			printf("\n  Resulting Poly Pointer: ");
			if (ResultingPtr->next == 0) {
				printf("0\n");
			}
			else {
				printf("\n    %d/%dx%d",
					ResultingPtr->next->ptPtr->coePtr->num,
					ResultingPtr->next->ptPtr->coePtr->denom,
					ResultingPtr->next->ptPtr->exp);
				displayPolynomialsPatrickM(&ResultingPtr);
			}
			break;
		case 5:
			do {
				printf("\n  **************************************"
					"\n  *        Clearing Polynomials        *"
					"\n  * 1. Clearing Left Poly Pointer      *"
					"\n  * 2. Clearing Right Poly Pointer     *"
					"\n  * 3. Clearing Resulting Poly Pointer *"
					"\n  * 4. Quit                            *"
					"\n  **************************************"
					"\n  Select the option (1 through 4): ");
				scanf("%d", &option);
				switch (option) {
				case 1:
					printf("\n  Left Poly Pointer: ");
					if (LeftPtr->next == 0) {
						printf("No polynomials to clear\n");
					}
					else {
						printf("\n    %d/%dx%d ",
							LeftPtr->next->ptPtr->coePtr->num,
							LeftPtr->next->ptPtr->coePtr->denom,
							LeftPtr->next->ptPtr->exp);
						displayPolynomialsPatrickM(&LeftPtr);
						printf("\n  Which node do you want to delete?: ");
							scanf("%d", &order);
							removePolyNodePatrickM(&LeftPtr, order);
					}

					printf("  Left Poly Pointer: ");
					if (LeftPtr->next == 0) {
						printf("0\n");
					}
					else {
						printf("\n    %d/%dx%d ",
							LeftPtr->next->ptPtr->coePtr->num,
							LeftPtr->next->ptPtr->coePtr->denom,
							LeftPtr->next->ptPtr->exp);
						displayPolynomialsPatrickM(&LeftPtr);
					}
					break;
				case 2:
					printf("\n  Right Poly Pointer: ");
					if (RightPtr->next == 0) {
						printf("No polynomials to clear\n");
					}
					else {
						printf("\n    %d/%dx%d ",
							RightPtr->next->ptPtr->coePtr->num,
							RightPtr->next->ptPtr->coePtr->denom,
							RightPtr->next->ptPtr->exp);
						displayPolynomialsPatrickM(&RightPtr);
						printf("\n  Which node do you want to delete?: ");
						scanf("%d", &order);
						removePolyNodePatrickM(&RightPtr, order);
					}
					
					printf("  Right Poly Pointer: ");
					if (RightPtr->next == 0) {
						printf("0\n");
					}
					else {
						printf("\n    %d/%dx%d",
							RightPtr->next->ptPtr->coePtr->num,
							RightPtr->next->ptPtr->coePtr->denom,
							RightPtr->next->ptPtr->exp);
						displayPolynomialsPatrickM(&RightPtr);
					}
					break;
				case 3:
					
					printf("\n  Resulting Poly Pointer: ");
					if (ResultingPtr->next == 0) {
						printf("No polynomials to clear\n");
					}
					else {
						printf("\n    %d/%dx%d ",
							ResultingPtr->next->ptPtr->coePtr->num,
							ResultingPtr->next->ptPtr->coePtr->denom,
							ResultingPtr->next->ptPtr->exp);
						displayPolynomialsPatrickM(&ResultingPtr);
						printf("\n  Which node do you want to delete?: ");
						scanf("%d", &order);
						removePolyNodePatrickM(&ResultingPtr, order);
					}

					printf("  Resulting Poly Pointer: ");
					if (ResultingPtr->next == 0) {
						printf("0\n");
					}
					else {
						printf("\n    %d/%dx%d",
							ResultingPtr->next->ptPtr->coePtr->num,
							ResultingPtr->next->ptPtr->coePtr->denom,
							ResultingPtr->next->ptPtr->exp);
						displayPolynomialsPatrickM(&ResultingPtr);
					}
					
					break;
				case 4:
					printf("\n    Returning to \"POLYNOMIAL OPERATIONS\"\n");
					break;
				default:
					printf("\n    Wrong Option\n");
				}
			} while (option != 4);
			break;
		case 6:

			//Clear Left
			while (LeftPtr->next != 0) {
				removePolyNodePatrickM(&LeftPtr, 1);
			}

			//Clear Right
			while (RightPtr->next != 0) {
				removePolyNodePatrickM(&RightPtr, 1);
			}

			//Clear Resulting
			while (ResultingPtr->next != 0) {
				removePolyNodePatrickM(&ResultingPtr, 1);
			}
			
			printf("\n  Having Fun!\n");
			break;
		default:
			printf("\n  You should not be in this class!\n");
		}
	} while (option != 6);
}


FractionPatrick* createFractionPatrickM() {
	int d, gcd;
	FractionPatrick* tmpPtr = (FractionPatrick*)malloc(sizeof(FractionPatrick));

	printf("          Enter an int for num: ");
	scanf("%d", &(tmpPtr->num));

	do {
		printf("          Enter an int (!= 0) for denom: ");
		scanf("%d", &d);
	} while (d == 0);

	tmpPtr->denom = d;

	if (tmpPtr->denom < 0) {
		tmpPtr->num = -(tmpPtr->num);
		tmpPtr->denom = -(tmpPtr->denom);
	}

	gcd = gcdBF(tmpPtr->num, tmpPtr->denom);

	tmpPtr->num /= gcd;
	tmpPtr->denom /= gcd;

	return tmpPtr;
}

PolyTermPtrPatrick createPatrickM() {
	int exponent;
	PolyTermPtrPatrick tmpPolyTermPtr = (PolyTermPatrick*)malloc(sizeof(PolyTermPatrick));

	do {
		printf("          Enter an int for the exponent: ");
		scanf("%d", &exponent);
	} while (exponent < -1);

	
		tmpPolyTermPtr->exp = exponent;
		tmpPolyTermPtr->coePtr = createFractionPatrickM();
	

	

	return tmpPolyTermPtr;
}

PolyNodePtrPatrick createPolyNodePatrickM() {
	PolyNodePtrPatrick tmpPolyNodePtr = (PolyNodePatrick*)malloc(sizeof(PolyNodePatrick));

	tmpPolyNodePtr->ptPtr = createPatrickM();
	tmpPolyNodePtr->next = 0;

	return tmpPolyNodePtr;
}

int insertPolyNodePatrickM(PolyListPtrPatrick list, PolyNodePtrPatrick nodePtr) {
	PolyNodePtrPatrick tmpPolyListPtr;
	int gcd;

	//Null
	if ((*list)->next != 0) {
		tmpPolyListPtr = *list;
	} else {
		(*list)->next = nodePtr;
		return 1;
	}


	//Exponent greater or less than exp from nodePtr
	if (tmpPolyListPtr->next->ptPtr->exp > nodePtr->ptPtr->exp) {
		if (tmpPolyListPtr->next->next == 0) {
			tmpPolyListPtr->next->next = nodePtr;
			return 1;
		}
		else {
			tmpPolyListPtr = tmpPolyListPtr->next;
			insertPolyNodePatrickM(&tmpPolyListPtr, nodePtr);
		}
	}
	else if (tmpPolyListPtr->next->ptPtr->exp < nodePtr->ptPtr->exp) {
		nodePtr->next = tmpPolyListPtr->next;
		tmpPolyListPtr->next = nodePtr;
		return 1;
	} else {
		nodePtr->ptPtr->coePtr->denom = nodePtr->ptPtr->coePtr->denom * tmpPolyListPtr->next->ptPtr->coePtr->denom;
		nodePtr->ptPtr->coePtr->num = (nodePtr->ptPtr->coePtr->denom * tmpPolyListPtr->next->ptPtr->coePtr->num)
			+ (nodePtr->ptPtr->coePtr->denom * nodePtr->ptPtr->coePtr->num);

		gcd = gcdBF(nodePtr->ptPtr->coePtr->num, nodePtr->ptPtr->coePtr->denom);
		nodePtr->ptPtr->coePtr->num /= gcd;
		nodePtr->ptPtr->coePtr->denom /= gcd;

		tmpPolyListPtr->next->ptPtr->coePtr->num = nodePtr->ptPtr->coePtr->num;
		tmpPolyListPtr->next->ptPtr->coePtr->denom = nodePtr->ptPtr->coePtr->denom;
		return 1;
	}
}

int removePolyNodePatrickM(PolyListPtrPatrick list, int order) {
	PolyNodePtrPatrick tmpPolyListPtr;
	PolyNodePtrPatrick tmpNodePtr;
	PolyNodePtrPatrick freeNode;
	int count = 0;

	tmpPolyListPtr = *list;

	//Delete Nothing
	if (order == 0 || order < 0) {
		printf("\n    No nodes to be cleared.");
		return 1;
	}

	//Remove first node
	if (order == 1) {
		if (tmpPolyListPtr->next->next == 0) {
			freeNode = tmpPolyListPtr->next;
			free(freeNode->ptPtr->coePtr);
			free(freeNode->ptPtr);
			free(freeNode);
			tmpPolyListPtr->next = 0;
			return 1;
		} else {
			freeNode = tmpPolyListPtr->next;
			tmpNodePtr = tmpPolyListPtr->next->next;
			free(freeNode->ptPtr->coePtr);
			free(freeNode->ptPtr);
			free(freeNode);
			tmpPolyListPtr->next = tmpNodePtr;
			return 1;
		}
	}

	while (tmpPolyListPtr != 0) {
		count++;
		tmpPolyListPtr = tmpPolyListPtr->next;
	}
	tmpPolyListPtr = *list;

	if (count < order) {
		printf("    Clearing the last node.\n");
		order = count;
		while (tmpPolyListPtr->next->next != 0) {
			tmpPolyListPtr = tmpPolyListPtr->next;
		}
		freeNode = tmpPolyListPtr->next;
		tmpPolyListPtr->next = 0;
		free(freeNode->ptPtr->coePtr);
		free(freeNode->ptPtr);
		free(freeNode);
		return 1;
	} else {
		printf("    Clearing node at place %d.\n", order);
		while (order != 1) {
			tmpPolyListPtr = tmpPolyListPtr->next;
			order--;
		}
		freeNode = tmpPolyListPtr->next;
		tmpPolyListPtr->next = tmpPolyListPtr->next->next;
		free(freeNode->ptPtr->coePtr);
		free(freeNode->ptPtr);
		free(freeNode);
		return 1;
	}
}

void displayPolynomialsPatrickM(PolyListPtrPatrick list) {
	PolyNodePtrPatrick tmpPolyListPtr;
	tmpPolyListPtr = (*list)->next->next;


	if (tmpPolyListPtr == 0) {
		return;
	}
	else {
		if (tmpPolyListPtr->ptPtr->exp == 0) {
			if (tmpPolyListPtr->ptPtr->coePtr->num < 0) {
				printf("- %d/%d ", -(tmpPolyListPtr->ptPtr->coePtr->num), tmpPolyListPtr->ptPtr->coePtr->denom);
				tmpPolyListPtr = (*list)->next;
				return displayPolynomialsPatrickM(&tmpPolyListPtr);
			} else {
				printf("+ %d/%d ", tmpPolyListPtr->ptPtr->coePtr->num, tmpPolyListPtr->ptPtr->coePtr->denom);
				tmpPolyListPtr = (*list)->next;
				return displayPolynomialsPatrickM(&tmpPolyListPtr);
			}
		}

		if (tmpPolyListPtr->ptPtr->coePtr->num > 0) {
			printf("+ %d/%dx%d ", tmpPolyListPtr->ptPtr->coePtr->num,
				tmpPolyListPtr->ptPtr->coePtr->denom,
				tmpPolyListPtr->ptPtr->exp);
			tmpPolyListPtr = (*list)->next;
			return displayPolynomialsPatrickM(&tmpPolyListPtr);
		}
		else {
			printf("- %d/%dx%d ", -(tmpPolyListPtr->ptPtr->coePtr->num),
				tmpPolyListPtr->ptPtr->coePtr->denom,
				tmpPolyListPtr->ptPtr->exp);
			tmpPolyListPtr = (*list)->next;
			return displayPolynomialsPatrickM(&tmpPolyListPtr);
		}
	}
}


PolyListPtrPatrick addPolyPatrickM(PolyListPatrick listLeft, PolyListPatrick listRight) {
	PolyNodePtrPatrick NodeAddition = 0;
	PolyNodePtrPatrick tmpPolyListPtrLeft = listLeft->next;
	PolyNodePtrPatrick tmpPolyListPtrRight = listRight->next;
	PolyListPatrick tmpPolyList = 0; 
	tmpPolyList = (PolyNodePatrick*)malloc(sizeof(PolyNodePatrick));
	tmpPolyList->next = 0; 

	while (tmpPolyListPtrLeft != 0) {
		NodeAddition = (PolyNodePatrick*)malloc(sizeof(PolyNodePatrick));
		NodeAddition->ptPtr = (PolyTermPatrick*)malloc(sizeof(PolyTermPatrick));
		NodeAddition->ptPtr->coePtr = (FractionPatrick*)malloc(sizeof(FractionPatrick));
		NodeAddition->next = 0;
		
		NodeAddition->ptPtr->exp = tmpPolyListPtrLeft->ptPtr->exp;
		NodeAddition->ptPtr->coePtr->num = tmpPolyListPtrLeft->ptPtr->coePtr->num;
		NodeAddition->ptPtr->coePtr->denom = tmpPolyListPtrLeft->ptPtr->coePtr->denom;
		insertPolyNodePatrickM(&tmpPolyList, NodeAddition);
		NodeAddition = 0;

		tmpPolyListPtrLeft = tmpPolyListPtrLeft->next;
	}

	while (tmpPolyListPtrRight != 0) {
		NodeAddition = (PolyNodePatrick*)malloc(sizeof(PolyNodePatrick));
		NodeAddition->ptPtr = (PolyTermPatrick*)malloc(sizeof(PolyTermPatrick));
		NodeAddition->ptPtr->coePtr = (FractionPatrick*)malloc(sizeof(FractionPatrick));
		NodeAddition->next = 0;

		NodeAddition->ptPtr->exp = tmpPolyListPtrRight->ptPtr->exp;
		NodeAddition->ptPtr->coePtr->num = tmpPolyListPtrRight->ptPtr->coePtr->num;
		NodeAddition->ptPtr->coePtr->denom = tmpPolyListPtrRight->ptPtr->coePtr->denom;
		insertPolyNodePatrickM(&tmpPolyList, NodeAddition);
		NodeAddition = 0;

		tmpPolyListPtrRight = tmpPolyListPtrRight->next;
	}

	return tmpPolyList;
}

PolyListPtrPatrick multiplyPolyPatrickM(PolyListPatrick listLeft, PolyListPatrick listRight) {
	int gcd;
	PolyNodePtrPatrick NodeMultiplication = 0;
	PolyNodePtrPatrick NodeMultiplicationL = 0; 
	PolyNodePtrPatrick NodeMultiplicationR = 0;
	PolyNodePtrPatrick tmpPolyListPtrLeft = listLeft->next;
	PolyNodePtrPatrick tmpPolyListPtrRight = listRight->next;
	PolyListPatrick tmpPolyList = 0;
	tmpPolyList = (PolyNodePatrick*)malloc(sizeof(PolyNodePatrick));
	tmpPolyList->next = 0;



	while (tmpPolyListPtrLeft != 0) {

		

		while (tmpPolyListPtrRight != 0) {
			NodeMultiplication = (PolyNodePatrick*)malloc(sizeof(PolyNodePatrick));
			NodeMultiplication->ptPtr = (PolyTermPatrick*)malloc(sizeof(PolyTermPatrick));
			NodeMultiplication->ptPtr->coePtr = (FractionPatrick*)malloc(sizeof(FractionPatrick));
			NodeMultiplication->next = 0;

			NodeMultiplication->ptPtr->exp =
				(tmpPolyListPtrLeft->ptPtr->exp + tmpPolyListPtrRight->ptPtr->exp);
			NodeMultiplication->ptPtr->coePtr->num =
				((tmpPolyListPtrLeft->ptPtr->coePtr->num *  tmpPolyListPtrRight->ptPtr->coePtr->denom)
				+ (tmpPolyListPtrLeft->ptPtr->coePtr->denom *  tmpPolyListPtrRight->ptPtr->coePtr->num));
			NodeMultiplication->ptPtr->coePtr->denom = 
				(tmpPolyListPtrLeft->ptPtr->coePtr->denom  * tmpPolyListPtrRight->ptPtr->coePtr->denom);
			gcd = gcdBF(NodeMultiplication->ptPtr->coePtr->num, NodeMultiplication->ptPtr->coePtr->denom);

			NodeMultiplication->ptPtr->coePtr->num /= gcd;
			NodeMultiplication->ptPtr->coePtr->denom /= gcd;
			insertPolyNodePatrickM(&tmpPolyList, NodeMultiplication);
			NodeMultiplication = 0;

			tmpPolyListPtrRight = tmpPolyListPtrRight->next;
		}

		tmpPolyListPtrLeft = tmpPolyListPtrLeft->next;
	}
	return tmpPolyList;
}


int gcdBF(int arg1, int arg2) {
	int gcd = 1;
	arg1 = (arg1 < 0) ? -arg1 : arg1;
	arg2 = (arg2 < 0) ? -arg2 : arg2;

	if (arg2 != 0) {
		return gcdBF(arg2, arg1 % arg2);
	}
	else {
		return arg1;
	}
}