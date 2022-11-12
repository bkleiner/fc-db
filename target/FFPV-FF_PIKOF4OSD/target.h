
#include "config.h"

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7 \
  SPI3_PC10PC11PC12

#define USART_PORTS \
	USART1_PA10PA9 \
	USART3_PB11PB10 \
	USART4_PA1PA0 \
	USART6_PC7PC6

//LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_B5
#define LED1_INVERT
#define LED2PIN PIN_B4
#define LED2_INVERT

#define BUZZER_PIN PIN_A14

//GYRO
#define GYRO_SPI_PORT SPI_PORT3
#define GYRO_NSS PIN_A15
#define GYRO_INT PIN_C4
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW



// OSD
#define USE_MAX7456
#define MAX7456_SPI_PORT SPI_PORT1
#define MAX7456_NSS PIN_A4





//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C2
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C1
#define IBAT_SCALE 250

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PA2
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PB1
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PA3
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PB0
