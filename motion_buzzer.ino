
#define MOTION 5
#define BUZZER 12
int i;

void setup() {
  pinMode(MOTION, INPUT);     
  pinMode(BUZZER, OUTPUT);     
  Serial.begin(9600);

}

void loop() {

  int state = digitalRead(MOTION);

  if(state==HIGH){
    Serial.println("GOTCHA!");
    playBuzzer();
  } else {
    Serial.println("Listening!");
    digitalWrite(BUZZER, LOW);
  }

  delay(700);

}

void playBuzzer() {

  for(i=0;i<80;i++)
  {
    digitalWrite(BUZZER,HIGH);
    delay(2);
    digitalWrite(BUZZER,LOW);
    delay(2);
  }

  
}
