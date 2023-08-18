int led = 8;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()){
    char command = Serial.read();

    if(command == 'a'){
      digitalWrite(led, HIGH);
    }

    if(command == 'b'){
      digitalWrite(led, LOW);
    }


  }

}
