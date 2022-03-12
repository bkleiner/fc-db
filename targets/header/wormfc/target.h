
#include "config.h"
#include "config_helper.h"

#define WORMFC

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7  \
  SPI3_PB3PB4PB5  \

#define USART_PORTS \
	USART1_PB7PB6 \
	USART3_PB11PB10 \
	USART4_PA1PA0 \
	USART6_PC7PC6

//LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_A15
#define LED1_INVERT
#define LED2PIN PIN_C14
#define LED2_INVERT

#define BUZZER_PIN PIN_B14

//GYRO
#define GYRO_TYPE MPU6XXX
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_0
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
#define MAX7456_NSS PIN_C0



//VOLTAGE DIVIDER
#define VBAT_PIN PIN_C1
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C2
#define IBAT_SCALE 179

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PA2
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PA3
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PB1
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PB0
