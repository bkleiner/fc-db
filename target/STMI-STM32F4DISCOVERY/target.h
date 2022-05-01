
#include "config.h"
#include "config_helper.h"

#define STM32F4DISCOVERY

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7 \
  SPI2_PB13PB14PB15

#define USART_PORTS \
	USART1_PB7PB6 \
	USART2_PA3PA2 \
	USART3_PB11PB10 \
	USART4_PA1PA0 \
	USART6_PC7PC6

//LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_D12
#define LED1_INVERT
#define LED2PIN PIN_D13
#define LED2_INVERT



//GYRO
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_C4
#define GYRO_INT PIN_C4
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW

//RADIO


#ifdef SERIAL_RX
#define RX_USART USART_PORT2
#endif





#define USE_SDCARD
#define SDCARD_SPI_PORT SPI_PORT2
#define SDCARD_NSS_PIN PIN_D8

//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C1
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C2
#define IBAT_SCALE 179

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PA2
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PA3
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PB1
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PB0
