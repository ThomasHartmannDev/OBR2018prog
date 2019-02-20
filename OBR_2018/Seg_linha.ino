 void seguir_linha() // Janela designada para o Seguir linha
{
  int sensor0 = analogRead(A0);
  int sensor1 = analogRead(A1);
  int sensor2 = analogRead(A2);
  int sensor3 = analogRead(A3);
  int sensor4 = analogRead(A4);
  int sensor5 = analogRead(A5);

   int sensibilidade = 400;
   int forca1 = 60;
   int fcurva = 80;

   if(sensor2 > sensibilidade || sensor3 > sensibilidade) //RETO
   {
     motor_avancar(forca1);// rampa 100

   } 
      if(sensor0 > sensibilidade || sensor1 > sensibilidade )//CORRECAO DIREITA
   {
   
     motor_avancar(forca1);

     motor_direita(fcurva);

if(sensor4 > sensibilidade || sensor5 > sensibilidade)// encruzilhada
     {
      motor_esquerda(fcurva);
  

      motor_avancar(forca1);

     }
     
   } 
   if(sensor4 > sensibilidade || sensor5 > sensibilidade )//CORRECAO ESQUERDA
   {
    
     motor_avancar(forca1);
    
     motor_esquerda(fcurva);

    if(sensor0>sensibilidade || sensor1>sensibilidade)// encruzilhada 
     {
      motor_direita(fcurva);
      motor_avancar(forca1);
     }
     }
     }
