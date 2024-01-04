#include "stm32f30x_conf.h" // STM32 config
#include "30010_io.h" // Input/output library for this course
#include "ansi.h"
#include "sin_lut.h"
#include "project4.h"




int main(void)
{



	// Setup communication with the PC
	uart_init(9600);



	drawWindow(20,13);





	while (1) { }
}
