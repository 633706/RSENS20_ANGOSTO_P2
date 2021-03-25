#ifndef __MAIN_H__
#define __MAIN_H__
//Librerarías estandar de  C
#include <stdio.h>
#include <string.h>
//drivers propios ESP32

#include "UART.h"
#include "I2C.h"
#include "GPIO.h"
//librerías FREERTOS
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

//otras librearías
#include "MPU9250.h"

const char * msgTx_PC = "hola mundo\r\n";

#endif /* __MAIN_H__ */
