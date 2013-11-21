//Simple VEX Pro Victor 888 Driver
//FRC #4817 One Degree North

unsigned short pin = 9;

signed int dutyCycle = 0; 
unsigned int highus = 1500;
unsigned int lowus = 1000;

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
    highus = 5*Serial.parseInt() + 1500;
    lowus = 1000;
    Serial.print("DS: "+dutyCycle);
  }
}
