#include "stm32f30x_conf.h" // STM32 config
#include "30010_io.h" // Input/output library for this course
#include "ansi.h"
#include "sin_lut.h"




int main(void)
{



	// Setup communication with the PC
	uart_init(9600);

	printf("\n");


	vector_t myvector;

	initVector(&myvector);

	printf("%ld , %ld\n", myvector.x, myvector.y);

	rotateVector(&myvector,900);

	printf("%ld , %ld\n", myvector.x, myvector.y);







	while (1) { }
}
