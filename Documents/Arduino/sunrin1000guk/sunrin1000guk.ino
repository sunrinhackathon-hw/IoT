#include <SPI.h>
#include <MFRC522.h>
#include <LoRaShield.h>

LoRaShield LoRa(2, 3);
 
#define SS_PIN 10
#define RST_PIN 9
int door = 8;
int light = 7;
boolean toggle=0;


MFRC522 rc522(SS_PIN, RST_PIN);                  // Create MFRC522 instance
void setup() {
  Serial.begin(9600); 
  SPI.begin();        
  LoRa.begin(38400); 
  rc522.PCD_Init();                              // Init MFRC522 card
  Serial.println("Scan card...\r\n");
  pinMode(door, OUTPUT);
  pinMode(light, OUTPUT);
}
 
void loop() {
  if(!rc522.PICC_IsNewCardPresent()) return;     // Look for new cards
  if(!rc522.PICC_ReadCardSerial()) return;       // Select one of the cards
  
  if(rc522.uid.uidByte[0]==0xA0 && rc522.uid.uidByte[1]==0x36 && rc522.uid.uidByte[2]==0x97 && rc522.uid.uidByte[3]==0x7C || rc522.uid.uidByte[0]==0x08) {
    Serial.println("<< OK !!! >>  Registered card...");
    if(toggle==false){
    digitalWrite(door, HIGH);
    digitalWrite(light, HIGH);
    LoRa.sendMessage("o", HEX);
    delay(500);
    digitalWrite(door, LOW);
    delay(2500);
    }

    if(toggle==true){
    digitalWrite(door, HIGH);
    digitalWrite(light, LOW);
    LoRa.sendMessage("c", HEX);
    delay(500);
    digitalWrite(door, LOW);
    delay(2500);
    }
    toggle=!toggle;
    
  } 
  else {
    Serial.println("Unknown card...");
  }
}

