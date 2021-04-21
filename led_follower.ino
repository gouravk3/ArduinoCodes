const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(led1,HIGH);
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    delay(500);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    delay(500);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    delay(500);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    delay(500);
    digitalWrite(led5,LOW);
    digitalWrite(led6,HIGH);
    delay(500);
    digitalWrite(led6,LOW);
    digitalWrite(led7,HIGH);
    delay(500);
    digitalWrite(led7,LOW);
    digitalWrite(led8,HIGH);
    delay(500);
    digitalWrite(led8,LOW);
}
