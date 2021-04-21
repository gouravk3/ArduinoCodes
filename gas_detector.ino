const int sensor = 11;
const int green = 10;
const int red = 9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor,INPUT);
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(sensor) == HIGH){
    digitalWrite(green,LOW);
    digitalWrite(red,HIGH);
    Serial.print("ALERT!! FIRE! FIRE! FIRE!");
    Serial.println();
    }
  else{
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
    }
  delay(2000);
}
