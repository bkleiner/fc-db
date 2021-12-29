
#include "config.h"
#include "config_helper.h"

#define ALIENFLIGHTF4

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7  \
  SPI2_PB13PC2PC3  \
  SPI3_PB3PB4PB5  \

#define USART_PORTS \
	USART1_PA10PA9 \
	USART2_PA3PA2 \
	USART4_PC11PC10

//LEDS
#define LED_NUMBER 2
#define LED1PIN Pin_PIN_C12
#define LED1_INVERT
#define LED2PIN Pin_PIN_D2
#define LED2_INVERT

#define BUZZER_PIN PIN_C13

//GYRO
#define GYRO_TYPE MPU6XXX
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_C14
#define SENSOR_ROTATE_90_CCW
#define GYRO_ID_1 0x68
#define GYRO_ID_2 0x73
#define GYRO_ID_3 0x78
#define GYRO_ID_4 0x71

//RADIO


#ifdef SERIAL_RX
#define RX_USART USART_PORT2
#endif



//VOLTAGE DIVIDER
#define BATTERYPIN PIN_C0
#define BATTERY_ADC_CHANNEL LL_ADC_CHANNEL_10

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
#define MOTOR_PIN0 MOTOR_PIN_PA0
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PA1
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PB8
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PB9
