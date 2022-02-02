
#include "config.h"
#include "config_helper.h"

#define LUXAIO

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7  \
  SPI2_PB13PB14PB15  \
  SPI3_PB3PB4PB5  \

#define USART_PORTS \
	USART1_PA10PA9 \
	USART2_PA2 \
	USART3_PC11PC10 \
	USART4_PA1PA0 \
	USART5_PC12 \
	USART6_PC7PC6

//LEDS
#define LED_NUMBER 1
#define LED1PIN PIN_C14
#define LED1_INVERT

#define BUZZER_PIN PIN_B0

//GYRO
#define GYRO_TYPE MPU6XXX
#define GYRO_SPI_PORT SPI_PORT2
#define GYRO_NSS PIN_B12
#define GYRO_INT PIN_A4
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
#define MAX7456_SPI_PORT SPI_PORT3
#define MAX7456_NSS PIN_D2



#define IBAT_PIN PIN_C1
#define IBAT_SCALE 163

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PC8
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PB6
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PC9
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PB7
