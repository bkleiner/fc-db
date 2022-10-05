
#include "config.h"
#include "config_helper.h"

#define UAVPNG030MINI

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7

#define USART_PORTS \
	USART1_PB7PB6 \
	USART2_PD6PD5 \
	USART3_PD9PD8 \
	USART6_PC6PC7

//LEDS
#define LED_NUMBER 3
#define LED1PIN PIN_E5
#define LED1_INVERT
#define LED2PIN PIN_E7
#define LED2_INVERT
#define LED3PIN PIN_E6
#define LED3_INVERT

#define BUZZER_PIN PIN_B0

//GYRO
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_E0
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW









//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C1
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000



// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PE13
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PE14
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PA8
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PE11
