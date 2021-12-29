
#include "config.h"
#include "config_helper.h"

#define VGOODRCF4

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7  \
  SPI2_PB13PB14PB15  \
  SPI3_PB3PB4PB5  \

#define USART_PORTS \
	USART1_PB7PB6 \
	USART2_PA3PA2 \
	USART3_PC11PC10 \
	USART4_PA1PA0 \
	USART5_PD2PC12 \
	USART6_PC7PC6 \
	USART11_PC5PB2

//LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_C14
#define LED1_INVERT
#define LED2PIN PIN_C15
#define LED2_INVERT

#define BUZZER_PIN PIN_C13

//GYRO
#define GYRO_TYPE MPU6XXX
#define GYRO_SPI_PORT SPI_PORT3
#define GYRO_NSS PIN_A15
#define GYRO_INT PIN_C3
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
#define MAX7456_NSS PIN_A4

//VOLTAGE DIVIDER
#define BATTERYPIN PIN_C1
#define BATTERY_ADC_CHANNEL LL_ADC_CHANNEL_11

#ifndef VOLTAGE_DIVIDER_R1
#define VOLTAGE_DIVIDER_R1 10000
#endif

#ifndef VOLTAGE_DIVIDER_R2
#define VOLTAGE_DIVIDER_R2 1000
#endif

#ifndef ADC_REF_VOLTAGE
#define ADC_REF_VOLTAGE 3.3
#endif

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PA10
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PC8
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PA8
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PA9
