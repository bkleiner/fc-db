
#include "config.h"
#include "config_helper.h"

#define STM32F411DISCOVERY

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7  \

#define USART_PORTS \
	USART1_PA10PA15 \
	USART2_PA3PA2 \
	USART6_PC7PC6

//LEDS
#define LED_NUMBER 2
#define LED1PIN Pin_PIN_D15
#define LED1_INVERT
#define LED2PIN Pin_PIN_D13
#define LED2_INVERT

#define BUZZER_PIN PIN_D12

//GYRO
#define GYRO_TYPE MPU6XXX
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_E3
#define GYRO_INT PIN_E1
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
#define MOTOR_PIN0 MOTOR_PIN_PA2
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PA3
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PB1
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PB0
