/*
 * project4.c
 *
 *  Created on: Jan 4, 2024
 *      Author: markus
 */
#include "project4.h"
#include "ansi.h"
#include <time.h>

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}



void ballUpdate(ball * p){
	p->x += p->xspeed;
	p->y +=	p->yspeed;
}

void ballInit(ball * p){
	p->x = 3;
	p->y = 3;
	p->xspeed = 2;
	p->yspeed = 3;
}



void drawBall(ball *p){
	gotoxy( (*p).x,(*p).y);
	printf("o");

}

int collisionhandler(ball * p, int w, int h){
	int xpos = p->x + p->xspeed;
	int ypos = p->y + p->yspeed;
	int bounce = 0;

	if (xpos > w || xpos < 1){
		p->xspeed = p->xspeed * (-1);
		bounce++;
	}

	if (ypos > h || ypos < 1){
		p->yspeed = p->yspeed * (-1);
		bounce++;
	}

	return bounce;

}



int drawWindow(int w, int h) {

    //style of window
    int hline = 205;
    int vline = 186;
    int topleft = 201;
    int topright = 187;
    int bottomleft = 200;
    int bottomright = 188;

    clrscr();

for (int i = 0; i < h; i++) {
    if (i == 0) {
        for (int j = 0; j < w; j++) {
            if (j == 0) {
                printf("%c", topleft);
            } else if (j == w-1) {
                printf("%c", topright);
            } else {
                printf("%c", hline);
            }
            }


        for(int k = 1; k < h-2; k++){
        gotoxy(1,k+1);
        printf("%c", vline);
        gotoxy(w,k+1);
        printf("%c", vline);
        }

        printf("\n");




    } else if (i == h-1) {
        for (int j = 0; j < w; j++) {
            if (j == 0) {
                printf("%c", bottomleft);
            } else if (j == w-1) {
                printf("%c", bottomright);
            } else {
                printf("%c", hline);
            }
        }
    } else {
        continue;
    }
}


return 0;

}




