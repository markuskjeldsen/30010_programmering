/*
 * project8.c
 *
 *  Created on: Jan 5, 2024
 *      Author: markus
 */


#include "project8.h"
#include "stm32f30x.h"




void ADCsetup(){

RCC->AHBENR |= RCC_AHBPeriph_GPIOA; // Enable clock for GPIO Port A


// Set pin PA0 to input
GPIOA->MODER &= ~(0x00000003 << (0 * 2)); // Clear mode register
GPIOA->MODER |= (0x00000002 << (0 * 2)); // Set mode register (0x00 –Input, 0x01 - Output, 0x02 -Alternate Function, 0x03 - Analog in/out)
GPIOA->PUPDR &= ~(0x00000003 << (0 * 2)); // Clear push/pull register
GPIOA->PUPDR |= (0x00000000 << (0 * 2)); // Set push/pull register (0x00 - No pull, 0x01 - Pull-up, 0x02 - Pull-down)

// Set pin PA1 to input
GPIOA->MODER &= ~(0x00000003 << (1 * 2)); // Clear mode register
GPIOA->MODER |=  (0x00000002 << (1 * 2)); // Set mode register (0x00 –Input, 0x01 - Output, 0x02 - Alternate Function, 0x03 - Analog in/out)
GPIOA->PUPDR &= ~(0x00000003 << (1 * 2)); // Clear push/pull register
GPIOA->PUPDR |=  (0x00000000 << (1 * 2)); // Set push/pull register (0x00 - No pull, 0x01 - Pull-up, 0x02 - Pull-down)

// fix time
RCC->CFGR2 &= ~RCC_CFGR2_ADCPRE12; // Clear ADC12 prescaler bits
RCC->CFGR2 |= RCC_CFGR2_ADCPRE12_DIV6; // Set ADC12 prescaler to 6
RCC->AHBENR |= RCC_AHBPeriph_ADC12; // Enable clock for ADC12


//reset ADC
ADC1->CR = 0x00000000; // Clear CR register
ADC1->CFGR &= 0xFDFFC007; // Clear ADC1 config register
ADC1->SQR1 &= ~ADC_SQR1_L; // Clear regular sequence register 1

ADC1->CR |= 0x10000000; // Enable internal ADC voltage regulator
for (int i = 0 ; i < 1000 ; i++) {} // Wait for about 16 microseconds

ADC1->CR |= 0x80000000; // Start ADC1 calibration
while (!(ADC1->CR & 0x80000000)); // Wait for calibration to finish
for (int i = 0 ; i < 100 ; i++) {} // Wait for a little while

ADC1->CR |= 0x00000001; // Enable ADC1 (0x01 - Enable, 0x02 - Disable)
while (!(ADC1->ISR & 0x00000001)); // Wait until ready



ADC_StartConversion(ADC1); // Start ADC read

}



uint16_t read_ADC1_1(){

ADC_StartConversion(ADC1); // Start ADC read
ADC_RegularChannelConfig(ADC1, ADC_Channel_1, 1, ADC_SampleTime_1Cycles5);
uint16_t x = ADC_GetConversionValue(ADC1); // Read the ADC value

return x;

}

uint16_t read_ADC1_2(){

ADC_StartConversion(ADC1); // Start ADC read
ADC_RegularChannelConfig(ADC1, ADC_Channel_2, 1, ADC_SampleTime_1Cycles5);
for (int i = 0 ; i < 100 ; i++) {} // Wait for about 16 microseconds
uint16_t x = ADC_GetConversionValue(ADC1); // Read the ADC value

return x;

}







