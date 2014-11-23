/*
**   CS - to digital pin 8    white              **48
**   CSN - to digital pin d53   orange                               **
**   CLK - to digital pin d52 (SCK pin)   gray                    **
**   MOSI - to digital pin d51 (MO pin)  yellow                          **
**   MISO - to digital pin d50 (MI pin)  purple                          **
**   IRQ - to digital pin 10  green
#define CE       8      //       

#define CSN      53     //laranja

// IRQ BIT:  Digital Output    Maskable interrupt pin

***********************************************************
HT11 Sensor is wired per below. Note: with checked openings facing you,
     pin 1 is to the left.
     ** PIN 1 - 3.3V or 5V
     ** PIN 2 - Data pin 2
     ** PIN 3 - NC
     ** PIN 4 - Ground
     
**************************************************************
Para conectar o GPS:  5V; gnd; tx-rx only (inverter tx-rx1 e rx-tx1).
*/

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>
#include <stdio.h>
#define SOFTWARE_SPI 1
//#define ITERATIONS 3
#include <dht11.h>      // DHT111 temperature probe Library
//dht11 DHT11;
#define DHT11PIN 2
 
/*
This sketch sends a string to a corresponding Arduino
with nrf24 attached. It appends a specific value
(2 in this case) to the end to signify the end of the
message.
*/
 
int msg[1];
RF24 radio(48,10);
const uint64_t pipe = 0xE8E8F0F0E1LL;

void setup(void){
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(pipe);
  Serial.println("*******************TM Mode Start****************************");
  Serial.println("********************Transmition*****************************");
}

void loop(void){
  String theMessage = "  Sensors: Ok ";
  int messageSize = theMessage.length();
  for (int i = 0; i < messageSize; i++) {
    int charToSend[1];
    charToSend[0] = theMessage.charAt(i);
    radio.write(charToSend,1);
  }
  
  theMessage = "; Actuators: Ok ";
  messageSize = theMessage.length();
  for (int i = 0; i < messageSize; i++) {
    int charToSend[1];
    charToSend[0] = theMessage.charAt(i);
    radio.write(charToSend,1);
  }
  
  theMessage = "; Temperatura (oC): ";
  messageSize = theMessage.length();
  for (int i = 0; i < messageSize; i++) {
    int charToSend[1];
    charToSend[0] = theMessage.charAt(i);
    radio.write(charToSend,1);
  }
  double data=random(20, 30);
  char buf[32]; // needs to be at least large enough to fit the formatted text
  dtostrf(data,3,2,buf);
  theMessage = buf;
  for (int i = 0; i < messageSize; i++) {
    int charToSend[1];
    charToSend[0] = theMessage.charAt(i);
    radio.write(charToSend,1);
  }
  
  theMessage = "; Battery Voltage (V): ";
  messageSize = theMessage.length();
  for (int i = 0; i < messageSize; i++) {
    int charToSend[1];
    charToSend[0] = theMessage.charAt(i);
    radio.write(charToSend,1);
  }
  data=100+random(0, 10)+(random(10, 50))/10;
  data=data+random(0, 10)/10;
  //char buf[32]; // needs to be at least large enough to fit the formatted text
  dtostrf(data,3,3,buf);
  theMessage = buf;
  messageSize = theMessage.length();
  for (int i = 0; i < messageSize; i++) {
    int charToSend[1];
    charToSend[0] = theMessage.charAt(i);
    radio.write(charToSend,1);
  }
  
  theMessage = "; Current (A): ";
  messageSize = theMessage.length();
  for (int i = 0; i < messageSize; i++) {
    int charToSend[1];
    charToSend[0] = theMessage.charAt(i);
    radio.write(charToSend,1);
  }
  randomSeed(millis());
  data=random(1, 10)/10;
  data=data+random(1, 3)+0.1;
  dtostrf(data,3,2,buf);
  theMessage = buf;
  for (int i = 0; i < messageSize; i++) {
    int charToSend[1];
    charToSend[0] = theMessage.charAt(i);
    radio.write(charToSend,1);
  }
  
/*delay sending for a short period of time. radio.powerDown()/radio.powerupp
//with a delay in between have worked well for this purpose(just using delay seems to
//interrupt the transmission start). However, this method could still be improved
as I still get the first character 'cut-off' sometimes. I have a 'checksum' function
on the receiver to verify the message was successfully sent.
*/
  msg[0] = 2;
  radio.write(msg,1);
  radio.powerDown();
  delay(1000);
  radio.powerUp();
}
