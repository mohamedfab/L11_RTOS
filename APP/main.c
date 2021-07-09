/*
 * L11_RTOS.c
 *
 * Created: 7/9/2021 8:27:19 AM
 *  Author: Eng_Fawzi
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include "FreeRTOS.h"
#include "task.h"
#include "Uart_Interface.h"
#include "STD_TYPES.h"
#include "util/delay.h"
static const u8 *pcTextForTask1 = "\x1B[32m Task 1 is running\r\n";
static const u8 *pcTextForTask2 = "\x1B[33m Task 2 is running\t\n";	

void Task_1(void *pvParameters)
{
	u8 *taskStr = 	(u8*)pvParameters;
		while (1)
		{
			UART_TransmitStr(taskStr);
			_delay_ms(500);
		}
}

int main(void)
{
	TaskHandle_t xHandle = NULL;
	UART_Init(UART_BAUDRATE_9600);
	UART_TransmitStr("Hello UART....");
	_delay_ms(2000);
	
	/*	Create Task 1	*/
	xTaskCreate(Task_1, "Task1",100,(u8*) pcTextForTask1,1,NULL);
	/*	Create Task 2	*/
	xTaskCreate(Task_1, "Task2",100,(u8*) pcTextForTask2,1,NULL);
	
	/*our tasks start executing. */
	vTaskStartScheduler();
    while(1)
    {
        //TODO:: Please write your application code 
    }
}