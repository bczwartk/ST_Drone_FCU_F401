#include <stdio.h>
#include <stdarg.h>
#include "debug.h"

#include "stm32f4xx_hal.h"

extern UART_HandleTypeDef huart1;

#ifdef DEBUG
int32_t myprintf(const char *format, ...)
{
    va_list arg;
    va_start(arg, format);
    char temp[255];
    int32_t len;
    // Limit the length of string to 254
    len = vsnprintf(temp, 254, format, arg);
    (void)usart_puts(temp, len);
    return len;
}
    
static int usart_puts(const char *str, int32_t len)
{
    //putc(*str ++);
    //while (huart1.Lock == HAL_LOCKED);
	(void)HAL_UART_Transmit(&huart1, (uint8_t *)str, len, 1000);
    return 0;
}

#endif
