const int pressureSensor = A0;  // Pin for the pressure sensor input
const int hBridgeRPWM = 8;      // Pin for H-bridge right PWM

const float lowPressure = 1.8;  // Low pressure target (V)
const float highPressure = 2.2; // High pressure target (V)
const int delayTime = 50;       // Delay time between readings (ms)
const int increment = 5;        // PWM increment step

void setup() {
  pinMode(hBridgeRPWM, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float pressure = analogRead(pressureSensor) * 5.0 / 1023.0;
  static int pwm = 0;

  if (pressure < lowPressure) {
    if (pwm < 255) {
      pwm = min(pwm + increment, 255);
      analogWrite(hBridgeRPWM, pwm);
    }
  } else if (pressure > highPressure) {
    if (pwm > 0) {
      pwm = max(pwm - increment, 0);
      analogWrite(hBridgeRPWM, pwm);
    }
  } else {
    pwm = 0;
    analogWrite(hBridgeRPWM, pwm);
  }

  float pwmPercent = (float)pwm / 255.0 * 100.0;

  Serial.print("Pressure: ");
  Serial.print(pressure);
  Serial.print(" PWM applied: ");
  Serial.print(pwmPercent);
  Serial.println("%");

  delay(delayTime);
}
