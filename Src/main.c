#include "stm32f30x_conf.h" // STM32 config
#include "30010_io.h" // Input/output library for this course
#include "ansi.h"
#include "sin_lut.h"
#include "project4.h"
#include "project5.h"
#include <string.h>
#include "charset.h"


int counting_time = 0;


void TIM1_BRK_TIM15_IRQHandler(void){
	TIM15->SR &= ~(0x0001);
	counting_time++;
}






int main(void)
{

	// Setup communication with the PC
	uart_init(115200);
	lcd_init();
	lcd_reset();
	setup();


	uint8_t arr[512];
	memset(arr,0,512);
	lcd_push_buffer(arr);
	uint8_t array[512];

	memset(array,0,512);


	char i[] = "HEJiMEDiDIGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";

	for(int p = 0; p < strlen(i); p++){

		arr[p] = (int) i[p];
	}


	displayString(arr,0,0);



	while (1) {

	}
}
