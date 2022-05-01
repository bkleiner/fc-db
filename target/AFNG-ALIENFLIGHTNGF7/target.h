
#include "config.h"
#include "config_helper.h"

#define ALIENFLIGHTNGF7

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7 \
  SPI2_PB13PC2PC3 \
  SPI3_PB3PB4PB5

#define USART_PORTS \
	USART1_PA10PA9 \
	USART2_PA3PA2 \
	USART4_PC11PC10

//LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_C12
#define LED1_INVERT
#define LED2PIN PIN_D2
#define LED2_INVERT

#define BUZZER_PIN PIN_C13

//GYRO
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_C14
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW

//RADIO


#ifdef SERIAL_RX
#define RX_USART USART_PORT2
#endif

// OSD
#define ENABLE_OSD
#define MAX7456_SPI_PORT SPI_PORT3
#define MAX7456_NSS PIN_B12

#define USE_M25P16
#define M25P16_SPI_PORT SPI_PORT2
#define M25P16_NSS_PIN PIN_B12

#define USE_SDCARD
#define SDCARD_SPI_PORT SPI_PORT2
#define SDCARD_NSS_PIN PIN_B10

//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C0
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C1
#define IBAT_SCALE 179

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PB14
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PB0
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PC6
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PC7
