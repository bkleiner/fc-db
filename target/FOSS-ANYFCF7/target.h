
#include "config.h"
#include "config_helper.h"

#define ANYFCF7

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7 \
  SPI3_PC10PC11PC12 \
  SPI4_PE12PE13PE14

#define USART_PORTS \
	USART1_PA10PA9 \
	USART2_PD6PD5 \
	USART3_PD9PD8 \
	USART4_PC11PC10 \
	USART5_PD2PC12 \
	USART6_PC7PC6 \
	USART7_PE7PE8 \
	USART8_PE0PE1

//LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_B7
#define LED1_INVERT
#define LED2PIN PIN_B6
#define LED2_INVERT

#define BUZZER_PIN PIN_B2

//GYRO
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_C4
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW

//RADIO


#ifdef SERIAL_RX
#define RX_USART USART_PORT2
#endif

// OSD
#define ENABLE_OSD
#define MAX7456_SPI_PORT SPI_PORT3
#define MAX7456_NSS PIN_D2



#define USE_SDCARD
#define SDCARD_SPI_PORT SPI_PORT4
#define SDCARD_NSS_PIN PIN_E11

//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C0
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C1
#define IBAT_SCALE 179

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PA1
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PA3
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PB8
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PA2