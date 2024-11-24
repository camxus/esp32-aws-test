#include <Arduino.h>

extern "C" void run();
extern "C"
{
#include <string.h>

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <lib_system.h>
#include <app_config.h>
#include <lib_flash.h>
#include <lib_json.h>
#include <lib_utils.h>
};

void setup() { run(); }

void loop()
{
    delay(1000);
};