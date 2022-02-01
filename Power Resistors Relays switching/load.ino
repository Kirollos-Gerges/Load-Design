
#define relay1 2 //Connect relay1 to pin 9
#define relay2 3 //Connect relay2 to pin 8
#define relay3 4 //Connect relay3 to pin 7
#define relay4 5 //Connect relay4 to pin 6
#define relay5 6 //Connect relay5 to pin 5
#define relay6 7 //Connect relay6 to pin 4
#define relay7 8 //Connect relay7 to pin 3
#define relay8 9 //Connect relay8 to pin 2

void setup() {
  Serial.begin(9600); //Set rate for communicating with phone
  pinMode(relay1, OUTPUT); //Set relay1 as an output
  pinMode(relay2, OUTPUT); //Set relay2 as an output
  pinMode(relay3, OUTPUT); //Set relay1 as an output
  pinMode(relay4, OUTPUT); //Set relay2 as an output
  pinMode(relay5, OUTPUT); //Set relay1 as an output
  pinMode(relay6, OUTPUT); //Set relay2 as an output
  pinMode(relay7, OUTPUT); //Set relay1 as an output
  pinMode(relay8, OUTPUT); //Set relay2 as an output
  pinMode(11, OUTPUT); //Set relay2 as an output

  digitalWrite(relay1, HIGH); //Switch relay1 off
  digitalWrite(relay2, HIGH); //Swtich relay2 off
  digitalWrite(relay3, HIGH); //Switch relay1 off
  digitalWrite(relay4, HIGH); //Swtich relay2 off
  digitalWrite(relay5, HIGH); //Switch relay1 off
  digitalWrite(relay6, HIGH); //Swtich relay2 off
  digitalWrite(relay7, HIGH); //Switch relay1 off
  digitalWrite(relay8, HIGH); //Swtich relay2 off


}

void loop() {
  
  // put your main code here, to run repeatedly:
  digitalWrite(relay1, LOW);
  delay(2000);
  digitalWrite(relay1, HIGH);
  delay(1000);
  digitalWrite(relay2, LOW);
  delay(2000);
  digitalWrite(relay2, HIGH);
  delay(1000);

  
}
