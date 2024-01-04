#include "stm32f30x_conf.h" // STM32 config
#include "30010_io.h" // Input/output library for this course
#include "ansi.h"
#include "sin_lut.h"
#include "project4.h"
#include <time.h>




int main(void)
{



	// Setup communication with the PC
	uart_init(115200);




	drawWindow(20,13);

	ball p;

	ballInit(&p);





	int bounce = 0;

	while (1) {
		drawWindow(50,30);
		printf("%d",bounce);
		drawBall(&p);

		int wait = 0;

		if (wait < 20){
		bounce = bounce + collisionhandler(&p, 50, 30);
		ballUpdate(&p);
		}

		wait++;
		gotoxy(0,31);
		for(int i = 0; i < 500; i++){
		printf("%d",i);
		}


	}
}
