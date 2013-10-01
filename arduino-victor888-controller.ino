//Simple VEX Pro Victor 888 Driver
//FRC #4817 One Degree North

unsigned short pin = 9;

signed int dutyCycle = 0; 
unsigned int highus = 8*dutyCycle + 1600;
unsigned int lowus = 5000 - highus;

void setup() {
 pinMode(pin, OUTPUT); 
 digitalWrite(pin, LOW);
 Serial.begin(9600);
}

void loop() {
  digitalWrite(pin, HIGH);
  delayMicroseconds(highus);
  digitalWrite(pin, LOW);
  delayMicroseconds(lowus);
  
  if (Serial.available() > 0) {
    dutyCycle = constrain(Serial.parseInt(), -100, 100); 
    highus = 8*dutyCycle + 1600;
    lowus = 5000 - highus;
    Serial.print("DS: "+dutyCycle);
  }
}
