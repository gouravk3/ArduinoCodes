const int m_A1 = 0;
const int m_A2 = 1;
const int m_B1 = 2;
const int m_B2 = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(m_A1,OUTPUT);
  pinMode(m_A2,OUTPUT);
  pinMode(m_B1,OUTPUT);
  pinMode(m_B2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(m_A1,HIGH);
   digitalWrite(m_A2,LOW);
   digitalWrite(m_B1,LOW);
   digitalWrite(m_B2,HIGH);
   delay(2000);
   digitalWrite(m_A1,LOW);
   digitalWrite(m_A2,LOW);
   digitalWrite(m_B1,LOW);
   digitalWrite(m_B2,LOW);
   delay(500);
   digitalWrite(m_A1,LOW);
   digitalWrite(m_A2,HIGH);
   digitalWrite(m_B1,HIGH);
   digitalWrite(m_B2,LOW);
   delay(2000);
   digitalWrite(m_A1,LOW);
   digitalWrite(m_A2,LOW);
   digitalWrite(m_B1,LOW);
   digitalWrite(m_B2,LOW);
   delay(500);      
}
