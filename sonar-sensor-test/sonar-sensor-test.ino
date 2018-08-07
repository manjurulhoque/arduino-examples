const int pTrig = 9;
const int pEcho = 10;
int duration = 0, distance = 0;

void setup() {
  pinMode(pTrig, OUTPUT);
  pinMode(pEcho, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(pTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pTrig, LOW);
  duration = pulseIn(pEcho, HIGH);
  distance= duration*0.034/2;
  
  Serial.print("Distance: ");
  Serial.println(distance);
}
