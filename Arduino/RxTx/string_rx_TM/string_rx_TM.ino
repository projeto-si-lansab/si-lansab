/*
** Sketch created for CS-235 discipline 2014, ITA
**   CS - to digital pin 8    white              **48
**   CSN - to digital pin d53   orange                               **
**   CLK - to digital pin d52 (SCK pin)   gray                    **
**   MOSI - to digital pin d51 (MO pin)  yellow                          **
**   MISO - to digital pin d50 (MI pin)  purple                          **
**   IRQ - to digital pin 10  green
#define CE       8      // marron      
// CE_BIT:   Digital Input     Chip Enable Activates RX or TX mode

#define CSN      53     //laranja
// CSN BIT:  Digital Input     SPI Chip Select

#define IRQ      10
// IRQ BIT:  Digital Output    Maskable interrupt pin-> disconnected
*/


#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>
#include <SPI.h>
 
/*
This sketch receives strings from sending unit via nrf24
and prints them out via serial. The sketch waits until
it receives a specific value (2 in this case), then it ,l m,
prints the complete message and clears the message buffer.
*/
 
int msg[1];
RF24 radio(48,10);
const uint64_t pipe = 0xE8E8F0F0E1LL;
int lastmsg = 1;
String theMessage = "";

void setup(void){
  Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(1,pipe);
  radio.startListening();
  Serial.println("*******************TM Mode Start****************************");
  Serial.println("*********************Reception******************************");
}

void loop(void){
  if (radio.available()){
    bool done = false;
    //done = radio.read(msg, 1);
    radio.read(msg, 1);
    char theChar = msg[0];
    if (msg[0] != 2){
      theMessage.concat(theChar);
    }
  else {
    Serial.println(theMessage);
    theMessage= "";
  }
  }
  //Serial.println("  ");
}
