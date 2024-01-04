#include "stm32f30x_conf.h" // STM32 config
#include "30010_io.h" // Input/output library for this course
#include "ansi.h"
#include "sin_lut.h"
#include "project4.h"
#include "project5.h"


uint32_t counting_time = 0;


void TIM1_BRK_TIM15_IRQHandler(void){
	TIM15->SR &= ~(0x0001);
	counting_time++;
}




int main(void)
{
	// Setup communication with the PC
	uart_init(115200);


	setup();


	timesetup();


	char output = 0;
	char temp = 1;

	int time = counting_time;
	int time_saved;


	while (1) {

		char output = readJoystick();


		if(output && output != temp){
		int time = counting_time - time_saved;

		printf("current time %ld . %2d\n", counting_time/100 , counting_time%100 );

		printf("time saved %ld . %2d\n", time_saved/100 , time_saved%100 );

		printf("difference is %ld . %2d\n",time/100, time%100  );
		temp = output;
		time_saved = counting_time;


		}




	}

	}
