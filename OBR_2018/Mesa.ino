void Rumo_ao_resgate(){ //Void onde se executa rotina normal do robo
   seguir_linha();
   MotorUP.write(180);// 180°sobe 20° Desce 
float cmF, cmL;
long microsecF = ultrasonicF.timing();
long microsecL = ultrasonicL.timing();
cmF = ultrasonicF.convert(microsecF, Ultrasonic::CM);
cmL = ultrasonicL.convert(microsecL, Ultrasonic::CM);
   if(cmF < 12)//Variavel do ultrasonico, se valor lido for menor que 9 entra na condicao de obstaculo
   {
    if(analogRead(SharpGarra)>200){ 
    motor_voltar(80);
    delay(100);
    motor_parar();
    motor_dir.write(0);
    motor_esq.write(0);
    while(true){
    Obstaculo();
   }
   }
   else{
    motor_parar();
    }
   }
 
  colord(); // Variavel que chama rotina de leitura do sensor de cor 
  if(redd > 70 && redd < 100){
    confirmar();
    colore();
    if(rede > 70 && rede < 130){
      meia_volta_vamos_dar();
    }
    else{
      Virar_Direita();
    }
  }
  colore();// Variavel que chama rotina de leitura do sensor de cor 
  if(rede > 70 && rede < 130){
    confirmar();
    colord();
    if(redd > 70 && redd < 100){
     meia_volta_vamos_dar(); 
    }
    else{
      Virar_Esquerda();
    }
  }
 
// Condicoes da rampa
    if(cmL < 10){
      if(analogRead(SharpLE)>300){ 
        if(analogRead(SharpLD)>300){
          motor_avancar(100);
          delay(100);
          while(true){
            if(analogRead(SharpLE)< 300){
              motor_avancar(100);
              delay(550);
              motor_parar();
              delay(10);
              while(true){
                Entrada();
              } 
              
            }
      Rampa();// Variavel que executa rotina de rampa
    }
  }
 }
} 
}


