
#include "config.h"

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7 \
  SPI3_PB3PB4PD6 \
  SPI4_PE12PE13PE14

#define USART_PORTS \
	USART2_PA3PA2 \
	USART3_PB11PB10 \
	USART7_PE8 \
	USART8_PE0PE1 \
	USART1_PB7 \
	USART5_PD2

//LEDS
#define LED_NUMBER 1
#define LED1PIN PIN_C0
#define LED1_INVERT

#define BUZZER_PIN PIN_D13

//GYRO
#define GYRO_SPI_PORT SPI_PORT4
#define GYRO_NSS PIN_E11
#define GYRO_INT PIN_B1
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW



// OSD
#define USE_MAX7456
#define MAX7456_SPI_PORT SPI_PORT3
#define MAX7456_NSS PIN_A15

#define USE_M25P16
#define M25P16_SPI_PORT SPI_PORT1
#define M25P16_NSS_PIN PIN_B0



//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C1
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C2
#define IBAT_SCALE 230

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PC8
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PC9
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PC6
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PC7
