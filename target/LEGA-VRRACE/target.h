
#include "config.h"
#include "config_helper.h"

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7 \
  SPI2_PB13PB14PB15

#define USART_PORTS \
	USART1_PB7PB6 \
	USART2_PD6PD5 \
	USART3_PD9PD8 \
	USART6_PC7PC6 \
	USART11_PE13PE11

//LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_D14
#define LED1_INVERT
#define LED2PIN PIN_D15
#define LED2_INVERT

#define BUZZER_PIN PIN_A0

//GYRO
#define GYRO_SPI_PORT SPI_PORT2
#define GYRO_NSS PIN_E10
#define GYRO_INT PIN_D10
#define GYRO_ORIENTATION GYRO_ROTATE_90_CCW









//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C0
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_A5
#define IBAT_SCALE 179

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PA3
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PB5
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PA1
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PA2
