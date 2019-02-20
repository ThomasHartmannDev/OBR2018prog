 void T2(){
  motor_avancar(100);
  delay(2650);
  motor_parar();
  delay(10);
  motor_esquerda(100);
  delay(800);
  motor_parar();
  delay(10);
  motor_avancar(100);
  delay(650);
  motor_parar();
  delay(10);
  if(analogRead(SharpLE)>250){
    motor_parar();
    while(true){
    R2();
  }
  }
  else {
    motor_voltar(80);
    delay(1000);
    motor_parar();
    delay(10000000000);
  }
  }

  
