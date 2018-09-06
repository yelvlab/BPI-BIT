/* BPI:bit Basic Function Test Code*/
#include <Arduino.h>
#include <NeoPixelBus.h>
#include "WiFi.h"

//global config
#define delay_ms 500
#define bout 3

int adTestFreq = 0;
int wifiTestFreq = 0;
int ledTestFreq = 0;
int BuzzerTestFreq = 0;

//Wi-Fi config
const char *ssid = "SSID";
const char *password = "PASSWORD";

//WS2812 config
const uint16_t PixelCount = 25;
const uint8_t PixelPin = 4;
NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);

#define colorSaturation 32
#define ledPower 2

RgbColor red(colorSaturation, 0, 0);
RgbColor green(0, colorSaturation, 0);
RgbColor blue(0, 0, colorSaturation);
RgbColor white(colorSaturation);
RgbColor black(0);
HslColor hslRed(red);
HslColor hslGreen(green);
HslColor hslBlue(blue);
HslColor hslWhite(white);
HslColor hslBlack(black);

//ADC config
#define LUM0 36 //ADC1_CH0
#define LUM1 39 //ADC1_CH3
#define Temp 34 //ADC2_CH7

int LUM_Value0 = 0;
int LUM_Value1 = 0;
int Temp_value = 0;

//buzzer config
#define Buzzer 25

int brightness = 0;
int fadeAmount = 5;

#define LEDC_CHANNEL_0 0
#define LEDC_TIMER_13_BIT 13
#define LEDC_BASE_FREQ 450

//buttom config
#define BottonA 35
#define BottonB 27

/******************************************
**Function name    : ledcAnalogWrite     **
**Input parameters : LEDC_Channel/Value  **
**Output parameters: None                **
******************************************/
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
    Serial.println("...........................");
    Serial.println("...........................");
    Serial.println("..   BPI:bit  on power   ..");
    Serial.println("...........................");
    Serial.println("...........................");
    Serial.flush();

    // this resets all the neopixels to an off state
    strip.Begin();
    strip.Show();

    Serial.println();
    Serial.println("BPI-BIT Function Test Demo");
    Serial.println("Running...");
    Serial.println();

    ledcSetup(LEDC_CHANNEL_0, LEDC_BASE_FREQ, LEDC_TIMER_13_BIT);
    ledcAttachPin(Buzzer, LEDC_CHANNEL_0);

    pinMode(ledPower,OUTPUT);
}

void loop()
{
    /*********************************
	 *********************************
	 ***Board:BPI-Webduino:BIT     ***
	 ***Function:LED(WS2812) Test  ***
	 *********************************
	 ********************************/
    Serial.println();
    Serial.println("LED test!!!");
    Serial.println();

    digitalWrite(ledPower,HIGH);//Open WS2812 Power

    for (ledTestFreq = 0; ledTestFreq < bout; ledTestFreq++)
    {
        int i;
        delay(delay_ms);
        Serial.println("Colors R");
        for (i = 0; i <= PixelCount - 1; i++)
        {
            strip.SetPixelColor(i, hslRed);
            strip.Show();
        }

        delay(delay_ms);
        Serial.println("Colors B");
        for (i = 0; i <= PixelCount - 1; i++)
        {
            strip.SetPixelColor(i, hslBlue);
            strip.Show();
        }

        delay(delay_ms);
        Serial.println("Colors G");
        for (i = 0; i <= PixelCount - 1; i++)
        {
            strip.SetPixelColor(i, hslGreen);
            strip.Show();
        }

        delay(delay_ms);
        Serial.println("Colors W");
        for (i = 0; i <= PixelCount - 1; i++)
        {
            strip.SetPixelColor(i, hslWhite);
            strip.Show();
        }

        delay(delay_ms);
        Serial.println("Turn Off");
        for (i = 0; i <= PixelCount - 1; i++)
        {
            strip.SetPixelColor(i, hslBlack);
            strip.Show();
        }

        Serial.println();
    }

    digitalWrite(ledPower, LOW);//Close WS2812 Power

    Serial.println("--Over--");

    /*****************************
	 *****************************
	 ***Board:BPI-Webduino:BIT ***
	 ***Function:ADC Test      ***
	 *****************************
	 ****************************/
    Serial.println();
    Serial.println("ADC test!!!");
    Serial.println();
    for (adTestFreq = 0; adTestFreq < bout; adTestFreq++)
    {
        // turn the LED on (HIGH is the voltage level)
        LUM_Value0 = analogRead(LUM0);
        LUM_Value1 = analogRead(LUM1);
        Temp_value = analogRead(Temp);

        Serial.println();
        Serial.println("----LUM&Temp Test(AD Test)----");

        //LUM0--ADC1_CH0-Pin:IO36
        Serial.print("LUM0:");
        Serial.print(LUM_Value0);
        Serial.println();

        //LUM1--ADC1_CH3-Pin:IO39
        Serial.print("LUM1:");
        Serial.print(LUM_Value1);
        Serial.println();

        //Temp--ADC2_CH7-Pin:IO27
        Serial.print("TEMP:");
        Serial.print(Temp_value);
        Serial.println();

        delay(1500);
        Serial.println();
    }

    Serial.println("--Over--");

    /*****************************
	 *****************************
	 ***Board:BPI-Webduino:BIT ***
	 ***Function:Wi-Fi Test    ***
	 *****************************
	 ****************************/
    Serial.println();
    Serial.println("Wi-Fi test!!!");
    Serial.println();

    // //Wi-Fi connect
    // Serial.print("Connecting to ");
    // Serial.println(ssid);
    // WiFi.begin(ssid, password);
    // while (WiFi.status() != WL_CONNECTED)
    // {
    //     delay(500);
    //     Serial.print(".");
    // }
    // Serial.println("WiFi connected");
    // Serial.println("IP address: ");
    // Serial.println(WiFi.localIP());
    // Serial.println("Setup done");
    // Serial.println("");
    // WiFi.disconnect();

    for (wifiTestFreq = 0; wifiTestFreq < 1; wifiTestFreq++)
    {
        Serial.println("scan start");

        // WiFi.scanNetworks will return the number of networks found
        int n = WiFi.scanNetworks();
        Serial.println("scan done");
        if (n == 0)
        {
            Serial.println("no networks found");
        }
        else
        {
            Serial.print(n);
            Serial.println(" networks found");
            for (int j = 0; j < n; ++j)
            {
                // Print SSID and RSSI for each network found
                Serial.print(j + 1);
                Serial.print(": ");
                Serial.print(WiFi.SSID(j));
                Serial.print(" (");
                Serial.print(WiFi.RSSI(j));
                Serial.print(")");
                Serial.println((WiFi.encryptionType(j) == WIFI_AUTH_OPEN) ? " " : "*");
                delay(10);
            }
        }
        Serial.println("");

        // Wait a bit before scanning again
        delay(2000);
    }

    Serial.println("--Over--");

    /*****************************
	 *****************************
	 ***Board:BPI-Webduino:BIT ***
	 ***Function:Buzzer Test   ***
	 *****************************
	 ****************************/
    Serial.println();
    Serial.println("Buzzer Test!!!");
    Serial.println();

    Serial.println("Buzzer is fading");
    for (BuzzerTestFreq = 0; BuzzerTestFreq < bout; BuzzerTestFreq++)
    {
        for (brightness = 0; brightness < 255; brightness++)
        {
            Serial.print(".");
            // set the brightness on LEDC channel 0
            ledcAnalogWrite(LEDC_CHANNEL_0, brightness);

            // change the brightness for next time through the loop:
            brightness = brightness + fadeAmount;

            // reverse the direction of the fading at the ends of the fade:
            if (brightness <= 0 || brightness >= 255)
            {
                fadeAmount = -fadeAmount;
            }
            // wait for 30 milliseconds to see the dimming effect
            delay(30);
        }

        Serial.println();
        ledcAnalogWrite(LEDC_CHANNEL_0, 0);
    }
    Serial.println("--Over--");
    Serial.println("");
    Serial.println("---------Test Over !!!---------");
    Serial.println("");
    Serial.println("");
    Serial.println("");
}