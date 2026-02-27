#include <Arduino.h>
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void setColor(int red, int green, int blue) {
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);
}

void loop() {
    setColor(255, 0, 0);
    delay(1000);

    setColor(0, 255, 0);
    delay(1000);

    setColor(0, 0, 255);
    delay(1000);

    setColor(255, 255, 0);
    delay(1000);

    setColor(0, 255, 255);
    delay(1000);

    setColor(255, 0, 255);
    delay(1000);

    setColor(255, 255, 255);
    delay(1000);

    setColor(128, 0, 128);
    delay(1000);
}
/**
 * @file RGB_LED_Control.ino
 * @author Lakshay Bindal
 * @date 2026-02-27
 * @version 1.0
 *
 * @brief RGB LED color control using PWM.
 *
 * @details
 * This program controls an RGB LED connected to three PWM pins
 * of an Arduino board. The LED cycles through multiple predefined
 * colors with a delay of 1 second between each color.
 *
 * The brightness of each color channel (Red, Green, Blue)
 * is controlled using PWM via analogWrite().
 *
 * Connections:
 * - Red Pin   → Digital Pin 9
 * - Green Pin → Digital Pin 10
 * - Blue Pin  → Digital Pin 11
 *
 * @note
 * Use 220Ω–330Ω current limiting resistors for each LED channel.
 *
 * @warning
 * If using a common anode RGB LED, invert PWM values:
 * analogWrite(pin, 255 - value);
 */

#include <Arduino.h>

/** @brief Digital PWM pin connected to Red channel */
int redPin = 9;

/** @brief Digital PWM pin connected to Green channel */
int greenPin = 10;

/** @brief Digital PWM pin connected to Blue channel */
int bluePin = 11;


/**
 * @brief Initializes RGB LED pins as OUTPUT.
 */
void setup()
{
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}


/**
 * @brief Sets the RGB LED color using PWM values.
 *
 * @param red   Intensity of red color (0–255)
 * @param green Intensity of green color (0–255)
 * @param blue  Intensity of blue color (0–255)
 *
 * @details
 * Each parameter controls the brightness of its respective
 * LED channel. Value range:
 * - 0   → OFF
 * - 255 → Fully ON
 */
void setColor(int red, int green, int blue)
{
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);
}


/**
 * @brief Main execution loop.
 *
 * @details
 * Cycles through different colors:
 * - Red
 * - Green
 * - Blue
 * - Yellow
 * - Cyan
 * - Magenta
 * - White
 * - Purple
 *
 * Each color is displayed for 1 second.
 */
void loop()
{
    setColor(255, 0, 0);     ///< Red
    delay(1000);

    setColor(0, 255, 0);     ///< Green
    delay(1000);

    setColor(0, 0, 255);     ///< Blue
    delay(1000);

    setColor(255, 255, 0);   ///< Yellow
    delay(1000);

    setColor(0, 255, 255);   ///< Cyan
    delay(1000);

    setColor(255, 0, 255);   ///< Magenta
    delay(1000);

    setColor(255, 255, 255); ///< White
    delay(1000);

    setColor(128, 0, 128);   ///< Purple
    delay(1000);
}