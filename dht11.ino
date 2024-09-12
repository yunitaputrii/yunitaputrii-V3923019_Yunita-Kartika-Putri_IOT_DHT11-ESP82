#define DHTPIN 14  // D5 pada NodeMCU adalah GPIO14
#include "DHT.h"

// Gunakan GPIO14 sebagai pengganti D5
#define DHTPIN 14
#define DHTTYPE DHT11  // Menggunakan sensor DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);  // Memulai komunikasi serial
  dht.begin();         // Memulai sensor DHT
}

void loop() {
  float h = dht.readHumidity();  // Membaca kelembaban
  float t = dht.readTemperature();  // Membaca suhu dalam Celsius
  
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.println(F("°C"));

  delay(2000);  // Penundaan 2 detik
}
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
