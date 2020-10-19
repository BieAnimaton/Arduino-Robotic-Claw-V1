void decodeIr()
{  
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);

    Serial.print("posLR value: ");
    Serial.print(posLR);
    Serial.print(", ");
    Serial.print(posBT);
    Serial.print(", ");
    Serial.print(posBF);
    Serial.print(", ");
    Serial.println(garra);
    
    irrecv.resume();
    delay(100);
  }
}
