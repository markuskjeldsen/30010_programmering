#include "stm32f30x_conf.h" // STM32 config
#include "30010_io.h" // Input/output library for this course
#include "ansi.h"
#include "sin_lut.h"
#include "project4.h"
#include "project5.h"





int main(void)
{
	// Setup communication with the PC
	uart_init(115200);


	setup();

	ledsetup();


	char output;

	while (1) {



		output = readJoystick();
		printf("%4X \n", output);
		setLed(output);


	}
}
