
#include "config.h"

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7 \
  SPI2_PB13PC2PC3 \
  SPI3_PB3PB4PB5

#define USART_PORTS \
	USART1_PA10PA9 \
	USART3_PC11PC10 \
	USART5_PD2PC12 \
	USART6_PC7PC6 \
	USART4_PA1

//LEDS
#define LED_NUMBER 1
#define LED1PIN PIN_C13
#define LED1_INVERT



//GYRO
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_0
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW



// OSD
#define USE_MAX7456
#define MAX7456_SPI_PORT SPI_PORT3
#define MAX7456_NSS PIN_A15

#define USE_M25P16
#define M25P16_SPI_PORT SPI_PORT2
#define M25P16_NSS_PIN PIN_B12



//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C0
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C1
#define IBAT_SCALE 179

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PB1
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PB7
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PC8
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PB0
