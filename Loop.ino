void loop() {
  decodeIr();
  moveLeftRight();
  if (posLR > maxVar) {
    posLR = maxVar;
  } if (posLR < minVar) {
    posLR = minVar;
  }
  
  moveTopBottom();
  if (posBT > 90) {
    posBT = 90;
  } if (posBT < 80) {
    posBT = 80;
  }
  
  moveFrontBack();
  if (posBF > maxVar) {
    posBF = maxVar;
  } if (posBF < minVar) {
    posBF = minVar;
  }

  garraArm();
  if (garra > maxVar) {
    garra = maxVar;
  } if (garra < minGarra) {
    garra = minGarra;
  }

  myservo.write(posLR);
  myservo2.write(posBT);
  myservo3.write(posBF);
  myservo4.write(garra);
  
  delay(20);
}
