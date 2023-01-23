int RPWM = 11; // Output pin for PWM Supp. in Right Direction
int LPWM = 10; // Output pin for PWM Supp. in Left Direction
int L_EN = 8;  // Energise H-Bridge Left
int R_EN = 9;  // Energise H-Bridge Right
int FPV = A1;  // Fuel Pressure Voltage Input via pin A1 (Low Pressure Sensor)
int FPS = 0;   // initialization for the FuelPressureSpeed controlled by PWM
int SensorVoltage;
void setup() {
  for(int i=5;i<9;i++){
  pinMode(i,OUTPUT);
  }
  for(int i=5;i<9;i++){
    digitalWrite(i,LOW);
  }
  Serial.begin(9600);
}
void loop() {
  Serial.println("Pump Started");
  digitalWrite(R_EN,HIGH);
  digitalWrite(L_EN,HIGH);
  delay(250);
  for(int i=1;i<249;i=(FPS) )
  if(i <= 50){
    i = 50;
  }
  FPS = analogRead(FPV);
  FPS = map(FPS, 0, 1023, 0, 255); // maps 0-5v of FPV to 0-255 for pwm
  analogWrite(LPWM,FPS); // CHANGE LPWM/RPWM to change the direction
  Serial.print("Low Pressure Sensor Voltage : ");
 // Serial.println(SensorVoltage);
  Seria.println(i); // i= 0-255 voltage of trimmer
  Serial.println(FPS); // FPS Showcase sped of pump by pwm applied in 0-255 range
  delay(100);
}
