// https://lastminuteengineers.com/esp8266-dht11-dht22-web-server-tutorial/
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "DHT.h"

uint8_t DHTPin = D8; 
DHT dht(DHTPin, DHT11); // Initialize DHT sensor

const char* ssid = "skolakoda";  // Enter SSID here
const char* password = "skolakoda523";  //Enter Password here
ESP8266WebServer server(80);
               
float temperature;
float humidity;
 
void setup() {
  Serial.begin(115200);
  delay(100);
  
  pinMode(DHTPin, INPUT);

  dht.begin();              

  Serial.println("Connecting to ");
  Serial.println(ssid);

  //connect to your local wi-fi network
  WiFi.begin(ssid, password);
  //check wi-fi is connected to wi-fi network
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected..!");
  Serial.print("Got IP: ");  Serial.println(WiFi.localIP());

  server.on("/", handle_OnConnect);
  server.onNotFound(handle_NotFound);

  server.begin();
  Serial.println("HTTP server started");
}

void loop() {  
  server.handleClient();
}

void handle_OnConnect() {
 temperature = dht.readTemperature(); // Gets the values of the temperature
  humidity = dht.readHumidity(); // Gets the values of the humidity 
  Serial.println(temperature);
  Serial.println(humidity);
  server.send(200, "text/html", SendHTML(temperature, humidity)); 
}

void handle_NotFound(){
  server.send(404, "text/plain", "Nema te stranice");
}

String SendHTML(float Temperaturestat,float Humiditystat){
  String ptr = "<!DOCTYPE html> <html>\n";
  ptr +="<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">\n";
  ptr +="<title>ESP8266 Weather Report</title>\n";
  ptr +="<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}\n";
  ptr +="body{margin-top: 50px;} h1 {color: #444444;margin: 50px auto 30px;}\n";
  ptr +="p {font-size: 24px;color: #444444;margin-bottom: 10px;}\n";
  ptr +="</style>\n";
  ptr +="</head>\n";
  ptr +="<body>\n";
  ptr +="<div id=\"webpage\">\n";
  ptr +="<h1>ESP8266 NodeMCU Weather Report</h1>\n";
  
  ptr +="<p>Temperature: ";
  ptr +=(int)Temperaturestat;
  ptr +="°C</p>";
  ptr +="<p>Humidity: ";
  ptr +=(int)Humiditystat;
  ptr +="%</p>";
  
  ptr +="</div>\n";
  ptr +="</body>\n";
  ptr +="</html>\n";
  return ptr;
}