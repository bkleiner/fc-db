
#include "config.h"
#include "config_helper.h"

#define MATEKF405TE

//PORTS
#define SPI_PORTS \
  SPI1_PA5PB4PA7  \
  SPI2_PB13PC2PC3  \

#define USART_PORTS \
	USART1_PA10PA9 \
	USART2_PA3PA2 \
	USART3_PC11PC10 \
	USART4_PA1PA0 \
	USART5_PD2PC12 \
	USART6_PC7PC6

//LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_A14
#define LED1_INVERT
#define LED2PIN PIN_A13
#define LED2_INVERT

#define BUZZER_PIN PIN_B9

//GYRO
#define GYRO_TYPE MPU6XXX
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_C14
#define GYRO_INT PIN_C15
#define SENSOR_ROTATE_90_CCW
#define GYRO_ID_1 0x68
#define GYRO_ID_2 0x73
#define GYRO_ID_3 0x78
#define GYRO_ID_4 0x71

//RADIO


#ifdef SERIAL_RX
#define RX_USART USART_PORT2
#endif

// OSD
#define ENABLE_OSD
#define MAX7456_SPI_PORT SPI_PORT1
#define MAX7456_NSS PIN_B12

#define USE_M25P16
#define M25P16_SPI_PORT SPI_PORT2
#define M25P16_NSS_PIN PIN_C13

//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C4
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C5
#define IBAT_SCALE 150

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PB15
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PA8
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PC9
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PC8
