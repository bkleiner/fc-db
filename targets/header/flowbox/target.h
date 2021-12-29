
#include "config.h"
#include "config_helper.h"

#define FLOWBOX

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7  \
  SPI3_PB3PB4PB5  \

#define USART_PORTS \
	USART1_PA10PA9 \
	USART2_PA3PA2

//LEDS
#define LED_NUMBER 1
#define LED1PIN Pin_PIN_C13
#define LED1_INVERT

#define BUZZER_PIN PIN_B1

//GYRO
#define GYRO_TYPE MPU6XXX
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_A1
#define SENSOR_ROTATE_90_CCW
#define GYRO_ID_1 0x68
#define GYRO_ID_2 0x73
#define GYRO_ID_3 0x78
#define GYRO_ID_4 0x71

//RADIO


#ifdef SERIAL_RX
#define RX_USART USART_PORT2
#endif





// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PB6
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PB7
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PB10
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PA0
