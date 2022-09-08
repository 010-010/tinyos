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

static uint8_t menu_cursor = 0;

#define NUM_MENU 6

static const Menu nav_menu[NUM_MENU] = {
  { epd_bitmap_weather, "Weather" },
  { epd_bitmap_foreign_currency, "Currency" },
  { epd_bitmap_thermometer, "Thermal" },
  { epd_bitmap_calendar, "Calendar" },
  { epd_bitmap_settings, "Settings" },
  { epd_bitmap_keyboard, "Input" }
};

static void clearIcon() {
  LCD.fillRect(2, 15, 50, 50, TFT_BG);
}

static void clearLabel() {
  LCD.fillRect(54, 30, 106, 26, TFT_BG);
}

static void drawMenuIcon() {
  clearIcon();
  clearLabel();
  LCD.setTextFont(2);
  LCD.setTextColor(TFT_BLACK, TFT_BG);
  LCD.setFreeFont(&FreeSansBold9pt7b);
  LCD.drawString(nav_menu[menu_cursor].title, 54, 30);
  LCD.drawBitmap(2, 15, nav_menu[menu_cursor].icon, 50, 50, TFT_BLACK);
}

static char input[27];

static void onSetKeyboard(char* text) {
  snprintf(input, 27, "%s", text);
  GetActiveModule().Destroy();
  ModuleSwitcher(GetModuleMenu());
  GetActiveModule().Init(0);
  LCD.setTextFont(1);
  LCD.setTextColor(TFT_BLACK, TFT_BG);
  LCD.drawString(input, 54, 56);
}

static void _init(int num, ...) {
  // Serial.println("Menu init %d\n");
  clearSafeArea();
  drawMenuIcon();
}

static void _destroy() {
  for (uint8_t _i=0;_i<27;_i++) {
    input[_i] = '\0';  
  }
}

static void onKeyUp() {
   if (menu_cursor - 1 < 0) {
      menu_cursor = NUM_MENU - 1;
   } else {
      menu_cursor--;
   }
   // Serial.println(nav_menu[menu_cursor].title);
   drawMenuIcon();
}

static void onKeyDown( ) {
  menu_cursor++;
  if (menu_cursor >= NUM_MENU) {
    menu_cursor = 0;
  }
  // Serial.println(nav_menu[menu_cursor].title);
  drawMenuIcon();
}

static void onKeyRight( ) {}

static void onKeyLeft() {}

static void onKeyMid() {
  // GetActiveModule().Destroy();
  if (menu_cursor == 4) {
    ModuleSwitcher(GetModuleSettings());
    GetActiveModule().Init(0);
  } else if (menu_cursor == 5) {
    ModuleSwitcher(GetModuleKeyboardUI());
    GetActiveModule().Init(3, input, 27, onSetKeyboard);
  }
}

static void onKeySet() {}

static void onKeyReset( ) {
  menu_cursor = 0;
  GetActiveModule().Destroy();
  ModuleSwitcher(GetModuleHomescreen());
  GetActiveModule().Init(0);
}

Module menu = { _init, _destroy, onKeyUp, onKeyDown,onKeyRight, onKeyLeft, onKeyMid, onKeySet, onKeyReset };

Module GetModuleMenu() {
  return menu;
}

#ifdef __cplusplus
}
#endif
