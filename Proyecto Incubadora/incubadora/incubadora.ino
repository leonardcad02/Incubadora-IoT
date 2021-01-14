#include "SPI.h"
//#include "Adafruit_GFX.h"
//#include "Adafruit_ILI9341.h"
#include <DHT.h>
#include "ESP8266WiFi.h"
#include <FirebaseArduino.h>

// Define Temperature and Humidity
#define DHTPIN  D2
#define DHTTYPE DHT11
#define Led D3
#define salida D4
DHT dht (DHTPIN,DHTTYPE );
float humedad, temperatura;

//Wifi
// Set these to run example.
#define FIREBASE_HOST "incubadora-fd001-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH "60Iyf26fpjzFlF9Xv4s6yllgeTVO0j0wHfAO9Ur5"
const char* ssid = "CABLEM@S_MJVS";
const char* password = "MJ9944VS";

//Port
#define LISTEN_PORT 80

//create instance of server
WiFiServer server (LISTEN_PORT);


// For the Adafruit shield, these are the default.
//#define TFT_DC 2
//#define TFT_CS 5

// Use hardware SPI (on Uno, #13, #12, #11) and the above for CS/DC
//Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
// If using the breakout, change pins as desired
//Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  //tft.begin();
  
  //tft.setRotation(0);
  //tft.fillScreen(ILI9341_BLACK);
  //tft.fillRect(0,0,240,30, ILI9341_NAVY);
  //tft.setTextColor(ILI9341_WHITE);
  //tft.setTextSize(2);
  //tft.setCursor(25,6);
  //tft.print("Panel de Control");
  //tft.setCursor(0,35);
  //tft.print("Incubadora");
  //tft.setCursor(0,55);
  //tft.print("Temperatura  Humedad");

  //conect to wifi
  WiFi.begin(ssid,password);
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
    }
  Serial.print("");
  Serial.println("Wifi connected");

  //Start server
  server.begin();
  Serial.println("Server started!");

  //IP
  Serial.println(WiFi.localIP());

  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  
  pinMode(Led, OUTPUT);
  pinMode(salida, OUTPUT);
}

void loop() {
  //int i =0;
  humedad = dht.readHumidity(); // RH % 0-100
  temperatura = dht.readTemperature();
  // put your main code here, to run repeatedly:
   // 0 - 100°C
  //tft.setTextColor(ILI9341_YELLOW,ILI9341_BLUE);
  //tft.setTextSize(6);
  //tft.setCursor(30,90);
  //tft.print(temperatura);
  //tft.setCursor(150, 90);
  //tft.print(humedad);
  //delay(10);
  Serial.println(temperatura);
  Serial.println(humedad);
  delay(10);
  if (isnan(temperatura) || isnan(humedad)) {
    Firebase.setString("Alert", "Failed to read from DHT sensor!");
    Firebase.setString("State", "OFF");
    Serial.println("Failed to read from DHT sensor!");
    digitalWrite(salida, HIGH);    
    return;
  }
  //**************** temperatura < 35 ****************************+
  while(temperatura > 35){
    humedad = dht.readHumidity(); // RH % 0-100
    temperatura = dht.readTemperature();
    digitalWrite(Led, LOW);
    digitalWrite(salida, HIGH);
    // set value
    Firebase.setFloat("Temperature", temperatura);
    // handle error
    if (Firebase.failed()) {
        Serial.print("setting /number failed:");
        Serial.println(Firebase.error());  
        return;
    }
    delay(500);
    
    // update value
    Firebase.setFloat("Humidity", humedad);
    // handle error
    if (Firebase.failed()) {
        Serial.print("setting /number failed:");
        Serial.println(Firebase.error());  
        return;
    }
    delay(500);
  
   
    // remove value
    //Firebase.remove("Temperatura");
    //Firebase.remove("Humedad");
    //delay(100);

    //set stade    
    Firebase.setString("State", "OFF");
    // handle error
    if (Firebase.failed()) {
        Serial.print("setting /message failed:");
        Serial.println(Firebase.error());  
        return;
    }
    delay(500);
    // set string value
    Firebase.setString("Message", "Dat succesfull");
    // handle error
    if (Firebase.failed()) {
        Serial.print("setting /message failed:");
        Serial.println(Firebase.error());  
        return;
    }
    
    
    delay(5000); 
    }

  //**************** temperatura < 35 ****************************+  
  while(temperatura < 30){
    humedad = dht.readHumidity(); // RH % 0-100
    temperatura = dht.readTemperature();
    digitalWrite(Led, HIGH);
    digitalWrite(salida, LOW);
    // set value
    Firebase.setFloat("Temperature", temperatura);
    // handle error
    if (Firebase.failed()) {
        Serial.print("setting /number failed:");
        Serial.println(Firebase.error());  
        return;
    }
    delay(500);
    
    // update value
    Firebase.setFloat("Humidity", humedad);
    // handle error
    if (Firebase.failed()) {
        Serial.print("setting /number failed:");
        Serial.println(Firebase.error());  
        return;
    }
    delay(500);
    //set stade
    Firebase.setString("State", "ON");
    // handle error
    if (Firebase.failed()) {
        Serial.print("setting /message failed:");
        Serial.println(Firebase.error());  
        return;
    }
    delay(500);
         
    // set string value
    Firebase.setString("Message", "Data succesfull");
    // handle error
    if (Firebase.failed()) {
        Serial.print("setting /message failed:");
        Serial.println(Firebase.error());  
        return;
    }
    
    
    // remove value
    //Firebase.remove("Temperatura");
    //Firebase.remove("Humedad");
    //delay(100);
      
    delay(5000);
    }

       
  //*********************Rango************************

  
    // set value
  Firebase.setFloat("Temperature",temperatura);
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /number failed:");
      Serial.println(Firebase.error());  
      return;
  }
  delay(500);
  
  // update value
  Firebase.setFloat("Humidity", humedad);
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /number failed:");
      Serial.println(Firebase.error());  
      return;
  }
  delay(500);
  
  //Firebase.setString("State", "OFF");
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /message failed:");
      Serial.println(Firebase.error());  
      return;
  }
  

  // set string value
  Firebase.setString("Message", "Data sucessful");
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /message failed:");
      Serial.println(Firebase.error());  
      return;
  }   
  delay(5000);    
       
 
}
