/*
 * project4.h
 *
 *  Created on: Jan 4, 2024
 *      Author: markus
 */

#ifndef PROJECT4_H_
#define PROJECT4_H_


typedef struct {
	int x;
	int y;
	float xspeed;
	float yspeed;
} ball;





void delay(int);
void ballUpdate(ball * p);
int drawWindow(int w, int h);
void ballInit(ball * p);
void drawBall(ball * p);
int collisionhandler(ball * p, int w, int h);






#endif /* PROJECT4_H_ */
