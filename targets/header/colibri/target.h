
#include "config.h"
#include "config_helper.h"

#define COLIBRI

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7  \
  SPI2_PB13PC2PC3  \

#define USART_PORTS \
	USART1_PB7PB6 \
	USART2_PA3PA2 \
	USART3_PB11PB10

//LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_C14
#define LED1_INVERT
#define LED2PIN PIN_C13
#define LED2_INVERT

#define BUZZER_PIN PIN_C5

//GYRO
#define GYRO_TYPE MPU6XXX
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_C4
#define GYRO_INT PIN_C0
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
#define MOTOR_PIN0 MOTOR_PIN_PB1
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PB15
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PB0
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PB4
