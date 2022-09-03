#include <pgmspace.h>
#include <stdint.h>
#include "constant.h"
#include "driver.h"
#include "module.h"
#include "register_module.h"
#include "resources.h"

#ifdef __cplusplus
 extern "C" {
#endif

void drawHomescreen() {
  LCD.drawBitmap(45, 10, wallpaper, 70, 70, TFT_BLACK);
}

void initHome(int num, ...) {
  // Serial.println("Home init\n");
  clearSafeArea();
  drawHomescreen();
}

static void onKeyUp() {}

static void onKeyDown( ) {}

static void onKeyRight( ) {}

static void onKeyLeft() {}

static void onKeyMid() {
  ModuleSwitcher(GetModuleMenu());
  GetActiveModule().Init(0);
}

static void onKeySet() {}

static void onKeyReset( ) {}

static Module homescreen = { initHome, onKeyUp, onKeyDown,onKeyRight, onKeyLeft, onKeyMid, onKeySet, onKeyReset };

Module GetModuleHomescreen() {
  return homescreen;
}

#ifdef __cplusplus
}
#endif
