
#include "config.h"

//PORTS
#define SPI_PORTS \

#define USART_PORTS \
	USART1_PB15PB14 \
	USART2_PD5 \
	USART3_PD9PD8 \
	USART4_PD0PD1 \
	USART5_PB5PB13 \
	USART6_PC7PC6 \
	USART8_PE0PE1

//LEDS
#define LED_NUMBER 1
#define LED1PIN PIN_E3
#define LED1_INVERT

#define BUZZER_PIN PIN_D7

//GYRO
#define GYRO_SPI_PORT SPI_PORT2
#define GYRO_NSS PIN_B12
#define GYRO_INT PIN_E15
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW



// OSD
#define USE_MAX7456
#define MAX7456_SPI_PORT SPI_PORT4
#define MAX7456_NSS PIN_E11





//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C1
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C0
#define IBAT_SCALE 179

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PA2
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PA3
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PA0
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PA1
