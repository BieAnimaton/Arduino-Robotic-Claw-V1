void moveLeftRight()
{
  switch(results.value) {
    case 0xFF5AA5:
      posLR += 10;
      delay(100);
      break;
    case 0xFF10EF:
      posLR -= 10;
      delay(100);
      break;
  }
}

void moveTopBottom()
{
  switch(results.value) {
    case 0xFF18E7:
      posBT -= 10;
      delay(100);
      break;
    case 0xFF4AB5:
      posBT += 10;
      delay(100);
      break;
  }
}  

void moveFrontBack()
{
  switch(results.value) {
    case 0xFFA25D:
      posBF += 10;
      delay(100);
      break;
    case 0xFF629D:
      posBF -= 10;
      delay(100);
      break;
  }
}

void garraArm()
{
  switch(results.value) {
    case 0xFF38C7:
      garra += 10;
      delay(50);
      break;
    case 0xFFB04F:
      garra -= 10;
      delay(50);
      break;
  }
}
