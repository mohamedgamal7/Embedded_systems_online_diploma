#include "uart.h"

void Uart_Send_string(unsigned char *P_Tx_string)
{
	while(*P_Tx_string!='\0')
	{
		UART0DR = (unsigned int )(*P_Tx_string); /*Transmit char*/
		P_Tx_string++ ; /* Next char */
	}
}

