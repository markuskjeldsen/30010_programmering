// =====================================================================
//
//	Exported by Cearn's excellut v1.0
//	(comments, kudos, flames to daytshen@hotmail.com)
//
// =====================================================================

#ifndef SIN_LUT_H
#define SIN_LUT_H

#include <stdint.h>
#include <stdio.h>


// === LUT SIZES ===
#define SIN_SIZE 512
#define COS_SIZE 512

// === LUT DECLARATIONS ===
extern const signed short SIN[512];
extern const signed short COS[512];


typedef struct {
	int32_t x, y;
} vector_t;


void initVector(vector_t* v);
void rotateVector(vector_t* v,int angle);


int32_t expand(int32_t i);
void printFix(int32_t i);
int32_t Fix(int32_t);
float sine(int angle);
float cosine(int angle);



#endif	// SIN_LUT_H
