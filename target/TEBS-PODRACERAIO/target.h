
#include "config.h"
#include "config_helper.h"

#define PODRACERAIO

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7 \
  SPI3_PB3PB4PB5

#define USART_PORTS \
	USART1_PA10PA9 \
	USART2_PA3PA2

//LEDS
#define LED_NUMBER 1
#define LED1PIN PIN_C13
#define LED1_INVERT

#define BUZZER_PIN PIN_B2

//GYRO
#define GYRO_SPI_PORT SPI_PORT3
#define GYRO_NSS PIN_A15
#define GYRO_INT PIN_C15
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW

//RADIO


#ifdef SERIAL_RX
#define RX_USART USART_PORT2
#endif

// OSD
#define USE_MAX7456
#define MAX7456_SPI_PORT SPI_PORT1
#define MAX7456_NSS PIN_B10





//VOLTAGE DIVIDER
#define VBAT_PIN PIN_B1
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_A4
#define IBAT_SCALE 250

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PB6
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PB7
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PA0
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PA1
