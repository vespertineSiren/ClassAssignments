/**
* Program Name:	PolyTermPatrickM.h
* Discussion:	Homework #3, Exercise #1 
* Written By:	Patrick Martin
* Date:			2017/04/03
*/
#include <stdio.h>

#ifndef POLYTERMPATRICKM_H
#define POLYTERMPATRICKM_H

struct FractionPatrickM {
	int num;
	int denom;
};

struct PolyTermPatrickM {
	int exp;
	struct FractionPatrickM* coePtr;
};

struct PolyNodePatrickM {
	struct PolyTermPatrickM* ptPtr;
	struct PolyNodePatrickM* next;
};

typedef struct FractionPatrickM FractionPatrick;
typedef struct PolyTermPatrickM PolyTermPatrick;
typedef struct PolyNodePatrickM PolyNodePatrick;

typedef FractionPatrick* FractionPtrPatrick;
typedef PolyTermPatrick* PolyTermPtrPatrick;
typedef PolyNodePatrick* PolyNodePtrPatrick;

typedef PolyNodePtrPatrick PolyListPatrick;
typedef PolyListPatrick* PolyListPtrPatrick;

//Function Definitions
PolyTermPtrPatrick createPatrickM(void); 
PolyNodePtrPatrick createPolyNodePatrickM(void); 
int insertPolyNodePatrickM(PolyListPtrPatrick, PolyNodePtrPatrick);
int removePolyNodePatrickM(PolyListPtrPatrick, int); 
void displayPolynomialsPatrickM(PolyListPtrPatrick);

PolyListPtrPatrick addPolyPatrickM(PolyListPatrick, PolyListPatrick); 
PolyListPtrPatrick multiplyPolyPatrickM(PolyListPatrick, PolyListPatrick);

int gcdBF(int, int);


#endif


