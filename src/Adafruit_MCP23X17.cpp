/*!
 * @file Adafruit_MCP23X17.cpp
 *
 * @mainpage Adafruit MCP23X08/17 Library
 *
 * @section intro_sec Introduction
 *
 * This is a library for the MCP23008/17 I2C and MCP23S08/17 SPI port
 * expanders.
 * Adafruit invests time and resources providing this open source code,
 * please support Adafruit and open-source hardware by purchasing
 * products from Adafruit!
 *
 * @section author Author
 *
 * Written by Carter Nelson for Adafruit Industries.
 *
 * @section license License
 *
 * BSD license, all text above must be included in any redistribution
 */

#include "Adafruit_MCP23X17.h"

/**************************************************************************/
/*!
  @brief default ctor.
*/
/**************************************************************************/
Adafruit_MCP23X17::Adafruit_MCP23X17() {
  pinCount = 16;
}

/**************************************************************************/
/*!
  @brief Bulk read all pins on Port A.
  @returns current pin states of port as a uint8_t.
*/
/**************************************************************************/
uint8_t Adafruit_MCP23X17::readGPIOA() {
  return readGPIO(0);
}

/**************************************************************************/
/*!
  @brief Bulk write all pins on Port A.
  @param value pin states to write as uint8_t.
*/
/**************************************************************************/
void Adafruit_MCP23X17::writeGPIOA(uint8_t value) {
  writeGPIO(value, 0);
}

/**************************************************************************/
/*!
  @brief Bulk read all pins on Port B.
  @returns current pin states of port as a uint8_t.
*/
/**************************************************************************/
uint8_t Adafruit_MCP23X17::readGPIOB() {
  return readGPIO(1);
}

/**************************************************************************/
/*!
  @brief Bulk write all pins on Port B.
  @param value pin states to write as uint8_t.
*/
/**************************************************************************/
void Adafruit_MCP23X17::writeGPIOB(uint8_t value) {
  writeGPIO(value, 1);
}

/**************************************************************************/
/*!
  @brief Bulk read all pins on Port A and B.
  @returns current pin states of ports as a uint16_t.
*/
/**************************************************************************/
uint16_t Adafruit_MCP23X17::readGPIOAB() {
  return readRegister16(getRegister(MCP23XXX_GPIO));
}

/**************************************************************************/
/*!
  @brief Bulk write all pins on Port A and Port B.
  @param value pin states to write as uint16_t.
*/
/**************************************************************************/
void Adafruit_MCP23X17::writeGPIOAB(uint16_t value) {
  writeRegister16(getRegister(MCP23XXX_GPIO), value);
}

