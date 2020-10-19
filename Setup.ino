void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  myservo2.attach(6);
  myservo3.attach(5);
  myservo4.attach(12);
  
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  
  posLR = 0;
  posBT = 90;
  posBF = 20;
  garra = 0;
}
