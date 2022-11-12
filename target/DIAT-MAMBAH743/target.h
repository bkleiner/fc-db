
#include "config.h"
#include "config_helper.h"

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7 \
  SPI2_PB13PB14PB15 \
  SPI3_PC10PC11PB2 \
  SPI4_PE12PE13PE14

#define USART_PORTS \
	USART1_PA10PA9 \
	USART2_PD6PD5 \
	USART3_PD9PD8 \
	USART4_PD0PD1 \
	USART5_PD2PC12 \
	USART6_PC7PC6 \
	USART7_PE7PE8 \
	USART8_PE0PE1

//LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_E5
#define LED1_INVERT
#define LED2PIN PIN_E4
#define LED2_INVERT

#define BUZZER_PIN PIN_E3

//GYRO
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_C4
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW



// OSD
#define USE_MAX7456
#define MAX7456_SPI_PORT SPI_PORT2
#define MAX7456_NSS PIN_B12

#define USE_M25P16
#define M25P16_SPI_PORT SPI_PORT3
#define M25P16_NSS_PIN PIN_A15



//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C1
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C3
#define IBAT_SCALE 400

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PA2
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PA3
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PA0
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PA1
