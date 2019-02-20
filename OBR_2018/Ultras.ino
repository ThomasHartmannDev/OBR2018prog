////////////////////////////////////////////////
//////////LEITURA DO ULTRA/////////////////////
//////////////////////////////////////////////
  void ultrasomF(){ // Leitura do ultra da frente
    
float TemP, DistF;
  
  digitalWrite(trigPinF, LOW);
  delayMicroseconds(24);
  digitalWrite(trigPinF, HIGH);
  delayMicroseconds(26);
  digitalWrite(trigPinF, LOW);
  TemP = pulseIn (echoPinF, HIGH);
  
  DistF = (TemP/2) /29.1;
  
  Serial.print(DistF);
  Serial.print("cm");
  Serial.println();
}
    void ultrasomL(){ // Leitura do ultra da lateral
  float TemPL, DistL;
  Serial.begin(9600);
  digitalWrite(trigPinL, LOW);
  delayMicroseconds(24);
  digitalWrite(trigPinL, HIGH);
  delayMicroseconds(26);
  digitalWrite(trigPinL, LOW);
  TemPL = pulseIn (echoPinL, HIGH);
  
  DistL = (TemPL/2) /29.1;
  Serial.print(DistL);
  Serial.print("cm L");
  Serial.println("");
  }
