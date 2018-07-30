/******************************************************************************
 * 
 * Copyright 2017 karawin (http://www.karawin.fr)
 *
*******************************************************************************/
#pragma once
#ifndef __GPIO_H__
#define __GPIO_H__

//-------------------------------//
// Define GPIO used in KaRadio32 //
//-------------------------------//
// Compatible ESP32 ADB
// https://www.tindie.com/products/microwavemont/esp32-audio-developing-board-esp32-adb/

// Must be HSPI or VSPI
#define KSPI VSPI_HOST

// KSPI pins
//-----------
#define PIN_NUM_MISO GPIO_NUM_19 	// Master Input, Slave Output
#define PIN_NUM_MOSI GPIO_NUM_23	// Master Output, Slave Input   Named Data or SDA or D1 for oled
#define PIN_NUM_CLK  GPIO_NUM_18 	// Master clock  Named SCL or SCK or D0 for oled

// status led if any.
//------------------- 
//Set the right one with command sys.led
// GPIO can be changed with command sys.ledgpio("x")
#define GPIO_LED	GPIO_NUM_4		// Flashing led or Playing led

// gpio of the vs1053
//-------------------
#define PIN_NUM_XCS  GPIO_NUM_32
#define PIN_NUM_RST  GPIO_NUM_12 
#define PIN_NUM_XDCS GPIO_NUM_33
#define PIN_NUM_DREQ GPIO_NUM_34
// + KSPI pins

// Encoder knob
//-------------
#define PIN_ENC_A   GPIO_NUM_16		// CLK
#define PIN_ENC_B   GPIO_NUM_17		// DT
#define PIN_ENC_BTN GPIO_NUM_15		// SW

// I2C lcd (and rda5807 if lcd is i2c or LCD_NONE)
//------------------------------------------------
#define PIN_I2C_SCL GPIO_NUM_14
#define PIN_I2C_SDA GPIO_NUM_13
#define PIN_I2C_RST	GPIO_NUM_2		// or not used

// I2C rda5807 (if lcd is spi)
//----------------------------
#define PIN_SI2C_SCL GPIO_NUM_14
#define PIN_SI2C_SDA GPIO_NUM_13

// SPI lcd
//---------
// KSPI pins +
#define PIN_LCD_CS	GPIO_NUM_5		//CS
#define PIN_LCD_A0	GPIO_NUM_27		//A0 or D/C
#define PIN_LCD_RST	GPIO_NUM_2		//Reset RES RST or not used

// IR Signal
//-----------
#define PIN_IR_SIGNAL GPIO_NUM_21	// Remote IR source


// I2S DAC or PDM output
//-----------------------
#define PIN_I2S_LRCK GPIO_NUM_25	// or Channel1
#define PIN_I2S_BCLK GPIO_NUM_26	// or channel2
#define PIN_I2S_DATA GPIO_NUM_22	//  


// to set a value: 		gpio_set_level(gpio_num_t gpio_num,value);
// to read a value: 	int gpio_get_level(gpio_num_t gpio_num)

void gpio_output_conf(gpio_num_t gpio);

#endif
