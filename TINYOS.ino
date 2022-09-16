#include <WiFi.h>
#include "health_monitor.h"
#include "env.h"
#include "driver.h"
#include "module.h"
#include "register_module.h"
#include "notification_bar.h"

#include <AHTxx.h>  
AHTxx aht10(AHTXX_ADDRESS_X38, AHT1x_SENSOR);

#include <Wire.h>
#include <BH1750.h>
BH1750 lightMeter;

void taskaht10(void *pvParameters) {
  float ahtValue;
  for(;;) {
    while (aht10.begin() != true) {
      Serial.println(F("AHT1x not connected or fail to load calibration coefficient"));
      vTaskDelay(5000);
    }
    ahtValue = aht10.readTemperature();
    Serial.print(F("Temperature...: "));
    if (ahtValue != AHTXX_ERROR) {
      Serial.print(ahtValue);
      Serial.println(F(" +-0.3C"));
    }
    ahtValue = aht10.readHumidity();
    Serial.print(F("Humidity......: "));
    if (ahtValue != AHTXX_ERROR) {
      Serial.print(ahtValue);
      Serial.println(F(" +-2%"));
    }
    vTaskDelay(30000);
  }
}

void taskbh1750(void *pvParameters) {
  for (;;) {
    if (lightMeter.measurementReady()) {
      float lux = lightMeter.readLightLevel();
      Serial.print(F("\nLight: "));
      Serial.print(lux);
      Serial.println(F(" lx"));
    }
    vTaskDelay(30000);
  }
}

void setup()
{
  Serial.begin(115200);

  pinMode(RST, INPUT_PULLUP);
  pinMode(SET, INPUT_PULLUP);
  pinMode(MID, INPUT_PULLUP);
  pinMode(RHT, INPUT_PULLUP);
  pinMode(LFT, INPUT_PULLUP);
  pinMode(DWN, INPUT_PULLUP);
  pinMode(UP, INPUT_PULLUP);

  WiFi.mode(WIFI_MODE_STA);
  WiFi.mode(WIFI_MODE_NULL);
  
  initDisplay();

  initNotificationBar();

  ModuleSwitcher(GetModuleHomescreen());
  GetActiveModule().Init(0);

  watch();  
  Serial.println(F("RUNNING TINYOS"));
  
  Wire.begin();
  lightMeter.begin();
  xTaskCreatePinnedToCore(taskaht10, "taskaht10", 1024, NULL, 3, NULL, ARDUINO_RUNNING_CORE);
  xTaskCreatePinnedToCore(taskbh1750, "taskbh1750", 1024, NULL, 3, NULL, ARDUINO_RUNNING_CORE);
}

void loop()
{
  if(digitalRead(RST) == LOW) {
    delay(250);
    GetActiveModule().KeyReset();
    while(digitalRead(RST) == LOW);
  }

  if(digitalRead(SET) == LOW) {
    delay(250);
    GetActiveModule().KeySet();
    while(digitalRead(SET) == LOW);
  }

  if(digitalRead(MID) == LOW) {
    delay(250);
    GetActiveModule().KeyMid();
    while(digitalRead(MID) == LOW);
  }

  if(digitalRead(RHT) == LOW) {
    delay(250);
    GetActiveModule().KeyRight();
    while(digitalRead(RHT) == LOW);
  }

  if(digitalRead(LFT) == LOW) {
    delay(250);
    GetActiveModule().KeyLeft();
    while(digitalRead(LFT) == LOW);
  }

  if(digitalRead(DWN) == LOW) {
    delay(250);
    GetActiveModule().KeyDown();
    while(digitalRead(DWN) == LOW);
  }

  if(digitalRead(UP) == LOW) {
    delay(250);
    GetActiveModule().KeyUp();
    while(digitalRead(UP) == LOW);
  }
}
