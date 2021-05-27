#include<EEPROM.h>

String DATA;
char index1;
String DATA1;

String READ(void);
void WRITE(String DATA);
void CLEAR(void);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  EEPROM.begin(512);
  Serial.println();
  delay(100);
  Serial.println("Enter 'W' to WRITE 'Hello World!' to EEPROM, 'R' to READ from EEPROM, or 'C' to CLEAR the EEPROM");  
}


void loop() {
  if(Serial.available() > 0){
    index1 = Serial.read();
    if(index1 == 'W' || index1 == 'w'){
      Serial.println("Clearing EEPROM...");
      CLEAR();
      Serial.println("Enter DATA to store: ");
      if(Serial.available() > 0){
        DATA = "Hello World!";
        WRITE(DATA);
        }
    }
    else if(index1 == 'R' || index1 == 'r'){
      DATA1 = READ();
      }
    else if(index1 == 'C' || index1 == 'c'){
      Serial.println("Clearing EEPROM...");
      CLEAR();
      }
    else{
      Serial.println("TRY AGAIN!");}
  }
  else{}    
}

String READ(void){
  int adr = 0;
  String DATA1;
  for(adr = 0; adr < 512; adr++){
    DATA1 += char (EEPROM.read(adr));
    }
  if(EEPROM.read(0) == 0){
    Serial.println("No Data Found!");
    }else{
      Serial.printf("Data Found is: ");
      Serial.println(DATA1);
    }
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  digitalWrite(LED_BUILTIN, HIGH);
  return DATA1;
}

void WRITE(String DATA){
  int adr = 0;
  for(int i = 0; i < DATA.length(); i++){
    EEPROM.write(i, DATA[i]);
    Serial.print("Wrote: ");
    Serial.println(DATA[i]);
  }
  EEPROM.write(DATA.length(), NULL);
  EEPROM.commit();
  if (EEPROM.commit()) {
    Serial.println("EEPROM successfully writted!");
  } else {
    Serial.println("ERROR! EEPROM write failed!");
  }
}


void CLEAR(void){
  for(int i = 0; i < 512; i++){
    EEPROM.write(i, 0);
    }
    if(EEPROM.read(0) == 0){Serial.println("EEPROM Cleared!");}
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
}

  
