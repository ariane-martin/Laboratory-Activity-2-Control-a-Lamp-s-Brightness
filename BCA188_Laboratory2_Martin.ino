int getLampBrightness(bool switchOn, int brightnessSetting) {
  if (switchOn) {
    return brightnessSetting;
  } else {
    return 0;
  }
}

void setup() {
  Serial.begin(115200);

  int brightnessSetting = 50;
  bool switchOn = true;

  int lampBrightness = getLampBrightness(switchOn, brightnessSetting);

  Serial.print("Brightness setting: ");
  Serial.println(brightnessSetting);

  Serial.print("Lamp brightness: ");
  Serial.println(lampBrightness);
}

void loop() {
}