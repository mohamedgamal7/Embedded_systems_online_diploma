#include "uart.h"

unsigned char string_buffer[100] = "Jimmy is learning in depth :)";
unsigned char const string_buffer2[100] = "Jimmy is learning in depth :)";

void main (void)
{
	Uart_Send_string(string_buffer);
}