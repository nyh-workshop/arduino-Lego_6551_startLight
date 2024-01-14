#include <Adafruit_NeoPixel.h>

int neoPixelPin = 0;

int numPixels = 4;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(numPixels, neoPixelPin, NEO_GRB + NEO_KHZ800);

void setup() {
  delay(125);
  
  strip.begin();
  strip.show();
  strip.clear();
}

inline void allLightsOff()
{
  for(uint8_t i = 0; i < 4; i++)
    strip.setPixelColor(i, 0, 0, 0);
}

void loop() {

   allLightsOff();
   strip.setPixelColor(3, 255, 255, 0);
   strip.show();
   delay(1000);

   allLightsOff();
   strip.setPixelColor(2, 255, 255, 0);
   strip.show();
   delay(1000);

   allLightsOff();
   strip.setPixelColor(1, 255, 0, 0);
   strip.show();
   delay(1000);

   allLightsOff();
   strip.setPixelColor(0, 0, 255, 0);
   strip.show();
   delay(1000);

   allLightsOff();
   strip.show();

   ESP.deepSleep(0);
}
