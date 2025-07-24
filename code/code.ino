int readPin = A7;
int trueValue;
float voltageValue;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  trueValue = analogRead(readPin);
  voltageValue = (5./1023.) * trueValue;
  Serial.println(voltageValue);
  delay(delayTime);
}