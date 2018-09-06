//BIT NEW
//BPI - BIT test code
#include <Arduino.h>
#include <NeoPixelBus.h>

#define LEDC_CHANNEL_0 0
#define LEDC_TIMER_13_BIT 13
#define LEDC_BASE_FREQ 4500

const uint16_t PixelCount = 25;
const uint8_t PixelPin = 4;

#define colorSaturation 128
#define delay_ms 500

NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);

RgbColor red(colorSaturation, 0, 0);
RgbColor green(0, colorSaturation, 0);
RgbColor blue(0, 0, colorSaturation);
RgbColor white(colorSaturation);
RgbColor black(0);
RgbColor num1(0.8 * colorSaturation, 0, 0.2 * colorSaturation);
RgbColor num2(0.5 * colorSaturation, 0, 0.5 * colorSaturation);
RgbColor num3(0.25 * colorSaturation, 0, 0.75 * colorSaturation);

HslColor hslRed(red);
HslColor hslGreen(green);
HslColor hslBlue(blue);
HslColor hslWhite(white);
HslColor hslBlack(black);

#define ledPower 2
#define BottomA 35
#define BottomB 27

int brightness = 0;
int fadeAmount = 5;

void ledcAnalogWrite(uint8_t channel, uint32_t value)
{
    // calculate duty, 8191 from 2 ^ 13 - 1 (2 ^ LEDC_TIMER_13_BIT - 1)
    //value_MAX = 255
    uint32_t duty = (8191 / 255) * value;
    // write duty to LEDC
    ledcWrite(channel, duty);
}

void setup()
{
    Serial.begin(115200); //Serial Port Config 115200-8-N-1
    while (!Serial)
        ; // wait for serial attach

    Serial.println();
    Serial.println("Initializing...");
    Serial.flush();

    // this resets all the neopixels to an off state
    strip.Begin();
    strip.Show();

    pinMode(ledPower,OUTPUT);
    pinMode(BottomA, INPUT);
    pinMode(BottomB, INPUT);
    digitalWrite(ledPower, HIGH);

    // strip.SetPixelColor(10, blue);
    // strip.SetPixelColor(11, blue);
    // strip.SetPixelColor(12, blue);
    // strip.SetPixelColor(13, blue);
    // strip.SetPixelColor(14, red);
    // strip.Show();

    // delay(1000);

    // int i;
    // for (i = 0; i <= PixelCount - 1; i++)
    // {
    //     strip.SetPixelColor(i, black);
    //     strip.Show();
    // }
}

void loop()
{
//signel map

        
        

        if (digitalRead(BottomA) == LOW)
        {
            delay(10);
            if (digitalRead(BottomA) == LOW)

            {
                
                
                strip.SetPixelColor(16, num1);
                strip.SetPixelColor( 7, num2);
                strip.SetPixelColor(18, num3);
                strip.Show();
            }
            else
            {
            int i;
            Serial.println("Turn Off");
            for (i = 0; i <= PixelCount - 1; i++)
            {
                strip.SetPixelColor(i, hslBlack);
                strip.Show();
            }
            }
        }
       


       
      

 


  
}