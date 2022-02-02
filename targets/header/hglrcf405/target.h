
#include "config.h"
#include "config_helper.h"

#define HGLRCF405

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7  \
  SPI2_PB13PB14PB15  \
  SPI3_PC10PC11PC12  \

#define USART_PORTS \
	USART1_PA10PA9 \
	USART2_PA2 \
	USART3_PB11PB10 \
	USART6_PC7PC6 \
	USART4_PA1

//LEDS
#define LED_NUMBER 1
#define LED1PIN PIN_A8
#define LED1_INVERT

#define BUZZER_PIN PIN_B4

//GYRO
#define GYRO_TYPE MPU6XXX
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_C4
#define SENSOR_ROTATE_90_CCW
#define GYRO_ID_1 0x68
#define GYRO_ID_2 0x73
#define GYRO_ID_3 0x78
#define GYRO_ID_4 0x71

//RADIO
#ifdef RX_FRSKY
#define USE_CC2500
#define CC2500_SPI_PORT SPI_PORT0
#define CC2500_NSS PIN_0
#define CC2500_GDO0_PIN PIN_0
// #define CC2500_TX_EN_PIN
// #define CC2500_LNA_EN_PIN
// #define CC2500_ANT_SEL_PIN
#endif

#ifdef SERIAL_RX
#define RX_USART USART_PORT2
#endif

// OSD
#define ENABLE_OSD
#define MAX7456_SPI_PORT SPI_PORT3
#define MAX7456_NSS PIN_A15

//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C2
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C1
#define IBAT_SCALE 400

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PA3
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PB5
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PB0
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PB1
