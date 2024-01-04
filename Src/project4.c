/*
 * project4.c
 *
 *  Created on: Jan 4, 2024
 *      Author: markus
 */
#include "project4.h"
#include "ansi.h"




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

        gotoxy(0,2);
        printf("%c", 186);
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


}




