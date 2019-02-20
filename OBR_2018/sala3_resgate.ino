void R1(){
motor_avancar(80);
if(analogRead(SharpFD) > 400){
  motor_parar();
  delay(1000000000);
}
}

void R2(){
  motor_esquerda(80);
  delay(4000);
  motor_parar();
  delay(10000000000);
}

