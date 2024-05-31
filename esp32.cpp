#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>


const int ledPin = 2;


const char* ssid = "Esp32";
const char* password = "ti123";


WebServer server(80);

void handleRoot() {
  String html = "<html><body>";
  html += "<h1>Controle do LED</h1>";
  html += "<button onclick=\"location.href='/led/on'\" style=\"width:100px;height:50px;\">Ligar</button>";
  html += "<button onclick=\"location.href='/led/off'\" style=\"width:100px;height:50px;\">Desligar</button>";
  html += "</body></html>";
  server.send(200, "text/html", html);
}

void handleLedOn() {
  digitalWrite(ledPin, HIGH);
  server.send(200, "text/html", "<html><body><h1>LED Ligado</h1><br><a href=\"/\">Voltar</a></body></html>");
}

void handleLedOff() {
  digitalWrite(ledPin, LOW);
  server.send(200, "text/html", "<html><body><h1>LED Desligado</h1><br><a href=\"/\">Voltar</a></body></html>");
}

void setup() {

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);


  Serial.begin(115200);


  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando à rede Wi-Fi...");
  }
  Serial.println("Conectado à rede Wi-Fi.");


  server.on("/", handleRoot);
  server.on("/led/on", handleLedOn);
  server.on("/led/off", handleLedOff);

  server.begin();
  Serial.println("Servidor HTTP iniciado.");
}

void loop() {
 
  server.handleClient();
}
