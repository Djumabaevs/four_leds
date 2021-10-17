/*
 * Project four_leds
 * Description:
 * Author:
 * Date:
 */
 const char* serviceUuid = "6E400001-B5A3-F393-E0A9-E50E24DCCA9E";
 const char* red         = "6E400002-B5A3-F393-E0A9-E50E24DCCA9E";
 const char* green       = "6E400003-B5A3-F393-E0A9-E50E24DCCA9E";
 const char* blue        = "6E400004-B5A3-F393-E0A9-E50E24DCCA9E";
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
 RGB.control(true);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

}