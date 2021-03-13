
#include "config.h"
#include "config_helper.h"

#define MAMBAF405US_I2C

#define F4
#define F405

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7  \
  SPI2_PB13PB14PB15  \
  SPI3_PC10PC11PB5  \

#define USART_PORTS \
	USART1_PB7PB6 \
	USART2_PA3PA2 \
	USART3_PB11PB10 \
	USART4_PA1PA0 \
	USART5_PD2PC12 \
	USART6_PC7PC6

//LEDS
#define LED_NUMBER 2
#define LED1PIN GPIO_Pin_15
#define LED1PORT GPIOC
#define LED2PIN GPIO_Pin_14
#define LED2PORT GPIOC

#define BUZZER_PIN GPIO_Pin_13
#define BUZZER_PIN_PORT GPIOC

//GYRO
#define MPU6XXX_SPI_PORT SPI_PORT1
#define MPU6XXX_NSS PIN_A4
// #define MPU6XXX_INT 
#define USE_DUMMY_I2C
#define SENSOR_ROTATE_90_CCW
#define GYRO_ID_1 0x68
#define GYRO_ID_2 0x73
#define GYRO_ID_3 0x78
#define GYRO_ID_4 0x71

//RADIO
#define RX_USART USART_PORT2
#define SOFTSPI_NONE

// OSD
#define ENABLE_OSD
#define MAX7456_SPI_PORT SPI_PORT2
#define MAX7456_NSS PIN_B12

//VOLTAGE DIVIDER
#define BATTERYPIN GPIO_Pin_1
#define BATTERYPORT GPIOC
#define BATTERY_ADC_CHANNEL ADC_Channel_8

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
#define MOTOR_PIN0 MOTOR_PIN_PA9
#define MOTOR_PIN1 MOTOR_PIN_PA8
#define MOTOR_PIN2 MOTOR_PIN_PC9
#define MOTOR_PIN3 MOTOR_PIN_PC8
#define MOTOR_PIN4 MOTOR_PIN_PB0
#define MOTOR_PIN5 MOTOR_PIN_PB1
#define MOTOR_PIN6 MOTOR_PIN_PA10
#define MOTOR_PIN7 MOTOR_PIN_PB4
