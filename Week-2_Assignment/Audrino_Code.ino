// C++ code
//
int LED_PIN=13;
int SENSOR_PIN=A0;
int sense;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(SENSOR_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sense = analogRead(SENSOR_PIN);
  Serial.println(sense);
  if(sense<=20){
    digitalWrite(LED_PIN,HIGH);
  }
  else if(sense>20){
    digitalWrite(LED_PIN,LOW);
  }
}