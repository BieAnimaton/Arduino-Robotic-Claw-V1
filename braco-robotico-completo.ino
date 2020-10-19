#include <Servo.h>
#include <IRremote.h>

int maxVar = 180;
int minVar = 20;
int minGarra = 0;

int posLR;
int posBF;
int posBT;
int garra;

const int RECV_PIN = 7;

Servo myservo;
Servo myservo2;
Servo myservo3;
Servo myservo4;

IRrecv irrecv(RECV_PIN);
decode_results results;
