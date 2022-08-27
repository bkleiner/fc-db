
#include "config.h"
#include "config_helper.h"

#define FOXEERF722DUAL

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7 \
  SPI2_PB13PB14PB15 \
  SPI3_PC10PC11PB5

#define USART_PORTS \
	USART1_PB7PB6 \
	USART2_PA3PA2 \
	USART3_PB11PB10 \
	USART4_PA1PA0 \
	USART5_PD2PC12

//LEDS
#define LED_NUMBER 1
#define LED1PIN PIN_C15
#define LED1_INVERT

#define BUZZER_PIN PIN_A4

//GYRO
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_B2
#define GYRO_INT PIN_C4
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW

//RADIO


#ifdef SERIAL_RX
#define RX_USART USART_PORT2
#endif

// OSD
#define USE_MAX7456
#define MAX7456_SPI_PORT SPI_PORT3
#define MAX7456_NSS PIN_C3

#define USE_M25P16
#define M25P16_SPI_PORT SPI_PORT2
#define M25P16_NSS_PIN PIN_B12



//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C0
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C2
#define IBAT_SCALE 179

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PC9
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PC8
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PA9
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PA8
