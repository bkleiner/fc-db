package betaflight

import "github.com/NotFastEnuf/fc-db/pkg/fc"

var adcChannels = map[string]map[string]int{
	"STM32F405": map[string]int{
		"PC0": 10,
		"PC1": 11,
		"PC2": 12,
		"PC3": 13,
		"PC4": 14,
		"PC5": 15,
		"PB0": 8,
		"PB1": 9,
		"PA0": 0,
		"PA1": 1,
		"PA2": 2,
		"PA3": 3,
		"PA4": 4,
		"PA5": 5,
		"PA6": 6,
		"PA7": 7,
	},
	"STM32F411": map[string]int{
		"PC0": 10,
		"PC1": 11,
		"PC2": 12,
		"PC3": 13,
		"PC4": 14,
		"PC5": 15,
		"PB0": 8,
		"PB1": 9,
		"PA0": 0,
		"PA1": 1,
		"PA2": 2,
		"PA3": 3,
		"PA4": 4,
		"PA5": 5,
		"PA6": 6,
		"PA7": 7,
	},
}

func getAdcChannel(pin fc.Pin, mcu string) int {
	if mcuCh, ok := adcChannels[mcu]; ok {
		if ch, ok := mcuCh[pin.String()]; ok {
			return ch
		}
	}
	return -1
}
