#define DHTPIN 4

// 8 bit data arrray 
uint8_t data[5] = { 0 }; 

void setup() {
  Serial.begin(115200);
  delay(1000);
}


void loop() {
  readDHT();

  float humidity = data[0];
  float temperature = data[2];

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);
}

void readDHT() {

  //Clear Data
  for (int i = 0; i < 5; i++) {
    data[i] = 0;
  }


  //SETUP DHT 11
  pinMode(DHTPIN, OUTPUT);
  digitalWrite(DHTPIN, LOW);
  delay(20);
  digitalWrite(DHTPIN, HIGH);
  delayMicroseconds(40);
  pinMode(DHTPIN, INPUT_PULLUP);

   //CALIBRATE 
  while (digitalRead(DHTPIN) == HIGH);
  while (digitalRead(DHTPIN) == LOW);
  while (digitalRead(DHTPIN) == HIGH);
  

  //BITMANIPULATION 
  for (int i = 0; i < 40; i++) {
    while (digitalRead(DHTPIN) == LOW);
    delayMicroseconds(30);

    if (digitalRead(DHTPIN) == HIGH) {
      data[i / 8] <<= 1;
      data[i / 8] |= 1;
    } else {
      data[i / 8] <<= 1;
    }

    while (digitalRead(DHTPIN) == HIGH);
  }
}