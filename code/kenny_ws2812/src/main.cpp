#include <Arduino.h>
#include "FastLED.h"
#include "MatrixHelper.h"

#define LED_PIN 10  // Change this to your data pin
#define LED_TYPE WS2812
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(50);  // Start at 50/255 brightness
}

void loop() {
  // Example: Set pixel at position (15, 10) to red
  leds[XY(15, 10)] = CRGB::Red;
  FastLED.show();
  delay(1000);
  
  // Clear it
  leds[XY(15, 10)] = CRGB::Black;
  FastLED.show();
  delay(1000);
}