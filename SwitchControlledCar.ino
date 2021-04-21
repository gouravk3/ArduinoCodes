const int m_A1 = 0;
const int m_A2 = 1;
const int m_B1 = 2;
const int m_B2 = 3;
const int button1 = 13;
const int button2 = 12;
const int button3 = 11;
const int button4 = 10;
const int button5 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(m_A1,OUTPUT);
  pinMode(m_A2,OUTPUT);
  pinMode(m_B1,OUTPUT);
  pinMode(m_B2,OUTPUT);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(button4,INPUT);
  pinMode(button5,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   if (digitalRead(button1) == LOW){
    forward();
    }
   else if (digitalRead(button2) == LOW){
    reverse();
    }
   else if (digitalRead(button3) == LOW){
    right();
    }
   else if (digitalRead(button4) == LOW){
    left();
    }
   else{
    stopp();
    }
}

int forward(){
  delay(100);
  digitalWrite(m_A1,LOW);
  digitalWrite(m_A2,HIGH);
  digitalWrite(m_B1,LOW);
  digitalWrite(m_B2,HIGH);
}

int reverse(){
  delay(100);
   digitalWrite(m_A1,HIGH);
  digitalWrite(m_A2,LOW);
  digitalWrite(m_B1,HIGH);
  digitalWrite(m_B2,LOW);
}

int right(){
  delay(100);
  digitalWrite(m_A1,LOW);
  digitalWrite(m_A2,LOW);
  digitalWrite(m_B1,LOW);
  digitalWrite(m_B2,HIGH);
}

int left(){
  delay(100);
  digitalWrite(m_A1,LOW);
  digitalWrite(m_A2,HIGH);
  digitalWrite(m_B1,LOW);
  digitalWrite(m_B2,LOW);
}
 int stopp(){
  delay(100);
  digitalWrite(m_A1,LOW);
  digitalWrite(m_A2,LOW);
  digitalWrite(m_B1,LOW);
  digitalWrite(m_B2,LOW);  
}
