
#include "config.h"
#include "config_helper.h"

#define OMNIBUSF7

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7 \
  SPI2_PB13PB14PB15 \
  SPI3_PC10PC11PC12 \
  SPI4_PE2PE5PE6

#define USART_PORTS \
	USART1_PA10PA9 \
	USART3_PB11PB10 \
	USART6_PC7PC6 \
	USART2_PA3

//LEDS
#define LED_NUMBER 1
#define LED1PIN PIN_E0
#define LED1_INVERT

#define BUZZER_PIN PIN_D15

//GYRO
#define GYRO_SPI_PORT SPI_PORT3
#define GYRO_NSS PIN_A15
#define GYRO_INT PIN_E8
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW



// OSD
#define USE_MAX7456
#define MAX7456_SPI_PORT SPI_PORT2
#define MAX7456_NSS PIN_B12



#define USE_SDCARD
#define SDCARD_SPI_PORT SPI_PORT4
#define SDCARD_NSS_PIN PIN_E4

//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C3
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C2
#define IBAT_SCALE 179

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PE9
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PE11
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PB0
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PB1
