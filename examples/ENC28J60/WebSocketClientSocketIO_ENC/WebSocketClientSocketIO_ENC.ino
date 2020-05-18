/****************************************************************************************************************************
   WebSocketClientSocketIO_ENC.ino
   For SAMD21/SAMD51, nRF52 using ENC28J60 Shield/Module

   Based on and modified from WebSockets libarary https://github.com/Links2004/arduinoWebSockets
   to support other boards such as  SAMD21, SAMD51, Adafruit's nRF52 boards, etc.

   Built by Khoi Hoang https://github.com/khoih-prog/WebSockets_Generic
   Licensed under MIT license
   Version: 2.1.3

   Created on: 06.06.2016
   Author: Markus Sattler

   Version Modified By   Date      Comments
  ------- -----------  ---------- -----------
   2.1.3   K Hoang      15/05/2020 Initial porting to support SAMD21, SAMD51, nRF52 boards, such as AdaFruit Feather nRF52832,
                                  nRF52840 Express, BlueFruit Sense, Itsy-Bitsy nRF52840 Express, Metro nRF52840 Express, etc.
 *****************************************************************************************************************************/

#define WEBSOCKETS_NETWORK_TYPE   NETWORK_ENC28J60

#include <WebSocketsClient_Generic.h>

//#include <Hash.h>

WebSocketsClient webSocket;

uint8_t mac[6] =  { 0xDE, 0xAD, 0xBE, 0xEF, 0xBE, 0x08 };

#define MESSAGE_INTERVAL 30000
#define HEARTBEAT_INTERVAL 25000

uint64_t messageTimestamp = 0;
uint64_t heartbeatTimestamp = 0;
bool isConnected = false;

void webSocketEvent(WStype_t type, uint8_t * payload, size_t length)
{
  switch (type)
  {
    case WStype_DISCONNECTED:
      Serial.printf("[WSc] Disconnected!\n");
      isConnected = false;
      break;
    case WStype_CONNECTED:
      {
        Serial.printf("[WSc] Connected to url: %s\n",  payload);
        isConnected = true;

        // send message to server when Connected
        // socket.io upgrade confirmation message (required)
        webSocket.sendTXT("5");
      }
      break;
    case WStype_TEXT:
      Serial.printf("[WSc] get text: %s\n", payload);

      // send message to server
      webSocket.sendTXT("message here");
      break;
    case WStype_BIN:
      Serial.printf("[WSc] get binary length: %u\n", length);
      //hexdump(payload, length);

      // send data to server
      webSocket.sendBIN(payload, length);
      break;
  }
}

void setup()
{
  //Initialize serial and wait for port to open:
  Serial.begin(115200);
  while (!Serial);

  Serial.println("Used/default SPI pinout:");
  Serial.print("MOSI:");
  Serial.println(MOSI);
  Serial.print("MISO:");
  Serial.println(MISO);
  Serial.print("SCK:");
  Serial.println(SCK);
  Serial.print("SS:");
  Serial.println(SS);

  //Configure IP address via DHCP
  Ethernet.begin(mac);

  Serial.print("Connected! IP address: ");
  Serial.println(Ethernet.localIP());

  webSocket.beginSocketIO("192.168.2.123", 81);
  //webSocket.setAuthorization("user", "Password"); // HTTP Basic Authorization
  webSocket.onEvent(webSocketEvent);
}

void loop()
{
  webSocket.loop();

  if (isConnected)
  {
    uint64_t now = millis();

    if (now - messageTimestamp > MESSAGE_INTERVAL)
    {
      messageTimestamp = now;
      // example socket.io message with type "messageType" and JSON payload
      webSocket.sendTXT("42[\"messageType\",{\"greeting\":\"hello\"}]");
    }

    if ((now - heartbeatTimestamp) > HEARTBEAT_INTERVAL)
    {
      heartbeatTimestamp = now;
      // socket.io heartbeat message
      webSocket.sendTXT("2");
    }
  }
}
