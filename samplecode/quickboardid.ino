#include "WiFi.h"
#include "esp_system.h"

void setup() {
Serial.begin(115200);
delay(1000);

Serial.println();
Serial.println("=== ESP32 Chip Info ===");

// Chip ID is derived from the factory-programmed MAC address
uint64_t chipId = ESP.getEfuseMac();
Serial.printf("Chip ID (from eFuse MAC): %04X%08X\n",
(uint16_t)(chipId >> 32),
(uint32_t)chipId);

Serial.print("Chip model: ");
Serial.println(ESP.getChipModel());

Serial.print("Chip revision: ");
Serial.println(ESP.getChipRevision());

Serial.print("Number of cores: ");
Serial.println(ESP.getChipCores());

Serial.print("CPU frequency: ");
Serial.print(ESP.getCpuFreqMHz());
Serial.println(" MHz");

Serial.print("Flash size: ");
Serial.print(ESP.getFlashChipSize() / (1024 * 1024));
Serial.println(" MB");

Serial.print("Free heap: ");
Serial.print(ESP.getFreeHeap());
Serial.println(" bytes");

Serial.print("MAC address: ");
Serial.println(WiFi.macAddress());

Serial.println("========================");
}

void loop() {
// Nothing to do here - info printed once at boot
//Serial.print(".");
}