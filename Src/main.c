#include "stm32f30x_conf.h" // STM32 config
#include "30010_io.h" // Input/output library for this course
#include "ansi.h"
#include "sin_lut.h"
#include "project4.h"
#include "project5.h"
#include <string.h>
#include "timer.h"
#include "charset.h"
#include "project8.h"
#include "project9.h"

int counter = 0;


void TIM1_BRK_TIM15_IRQHandler(void){
	TIM15->SR &= ~(0x0001);
	counter++;

}






int main(void)
{

	// Setup communication with the PC
	uart_init(115200);

	timesetup();
	uint16_t data;
	uint16_t data1;
	ADCsetup();
	speakerSetup();



	setFreq(50);



	setFreq(30);
	int diff = 15;




	while (1) {


/*
		data = read_ADC1_1();//*3300) >> 12;

		data1 = read_ADC1_2();//*3300) >> 12;
		diff = data >> 6;

		uint16_t previous;
		if (data1 > (previous + diff) || data1 < (previous - diff)){

			printf("Value = %ld   %ld   \n", data1 , diff );



			setFreq(data1);
			previous = data1;
		}
*/
		setFreq(293);
		wait(50);
		setFreq(440);
		wait(50);
		setFreq(587);
		wait(100);
		setFreq(293);
		wait(50);
		setFreq(440);
		wait(50);
		setFreq(587);
		wait(100);


		setFreq(659);
		wait(30);
		setFreq(698);
		wait(20);
		setFreq(659);
		wait(20);
		setFreq(698);
		wait(20);
		setFreq(659);
		wait(20);
		setFreq(523);
		wait(40);
		setFreq(440);
		wait(60);

		setFreq(0);
		wait(1000);






	}
}
