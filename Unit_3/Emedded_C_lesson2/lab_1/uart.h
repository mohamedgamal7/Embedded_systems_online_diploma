#ifndef _UART_H
#define _UART_H

#define UART0DR   *((volatile unsigned int* )(0x101f1000))

void Uart_Send_string(unsigned char *P_Tx_string);


#endif