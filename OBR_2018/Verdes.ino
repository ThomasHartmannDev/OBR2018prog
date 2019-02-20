void colord()  // Rotina que le as cores no sensor de cor direito
{  
  //Rotina que le o valor das cores  
  digitalWrite(S2D, LOW);  
  digitalWrite(S3D, LOW);  
  //count OUT, pRed, RED  
  redd = pulseIn(OUTD, digitalRead(OUTD) == HIGH ? LOW : HIGH);  
  digitalWrite(S3D, HIGH);  
  //count OUT, pBLUE, BLUE  
  blued = pulseIn(OUTD, digitalRead(OUTD) == HIGH ? LOW : HIGH);  
  digitalWrite(S2D, HIGH);  
  //count OUT, pGreen, GREEN  
  greend = pulseIn(OUTD, digitalRead(OUTD) == HIGH ? LOW : HIGH);  
}
////////////////////////////////////////////////////////////////////////

 void colore() // Rotina que le as cores do sensor de cor esquerdo 
{  
  //Rotina que le o valor das cores  
  digitalWrite(S2E, LOW);  
  digitalWrite(S3E, LOW);  
  //count OUT, pRed, RED  
  rede = pulseIn(OUTE, digitalRead(OUTE) == HIGH ? LOW : HIGH);  
  digitalWrite(S3E, HIGH);  
  //count OUT, pBLUE, BLUE  
  bluee = pulseIn(OUTE, digitalRead(OUTE) == HIGH ? LOW : HIGH);  
  digitalWrite(S2E, HIGH);  
  //count OUT, pGreen, GREEN  
  greene = pulseIn(OUTE, digitalRead(OUTE) == HIGH ? LOW : HIGH);  
}


///////////////////////////////////////////////////////////////////////////
void Virar_Direita(){ // Void para Curva a direita 
 motor_parar();
 delay(10);
  motor_avancar(80);
  delay(350);
  motor_esquerda(100);
  delay(1300);
}

///////////////////////////////////////////////////////////////////////////
void Virar_Esquerda(){ // Void para curva a esquerda 
  motor_parar();
 delay(10);
  motor_avancar(80);
  delay(350);
  motor_direita(100);
  delay(1300); 
}
///////////////////////////////////////////////////////////////////////////
void meia_volta_vamos_dar(){ // Void para dar um 180° e retornar 
  motor_parar();
  delay(100);
  motor_direita(100);
  delay(3200);
  motor_parar();
  delay(100);
}
void confirmar(){
     motor_parar();
    delay(100);
    motor_voltar(30);
    delay(1200);
    motor_parar();
    delay(10);
    motor_avancar(30);
    delay(1200);
    motor_parar();
    delay(600);
}


