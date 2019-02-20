void Leitura(){
  while(Serial.available()>0)
{
  buf = Serial.read();
  switch (buf) {
  

  case '1':
    Serial.println("Leitura dos sensores de cor REALIZADA");
 colore(); //Chama a rotina que le as cores  
  //Mostra no serial monitor os valores detectados  
  Serial.print("Vermelho e :");  
  Serial.print(rede, DEC);  
  Serial.print(" Verde e : ");  
  Serial.print(greene, DEC);  
  Serial.print(" Azul e : ");  
  Serial.print(bluee, DEC);  
  Serial.println(); 
  ////////////////////////////////
  colord(); //Chama a rotina que le as cores  
  //Mostra no serial monitor os valores detectados  
  Serial.print("Vermelho d :");  
  Serial.print(redd, DEC);  
  Serial.print(" Verde d : ");  
  Serial.print(greend, DEC);  
  Serial.print(" Azul d : ");  
  Serial.print(blued, DEC);  
  Serial.println();
  Serial.println("");  
  break;
  
  case '2':
     Serial.println("Leitura do sensore ultrasonico REALIZADA");
    ultrasomF();
   break;
    
  
  case '3':
      Serial.println("Leitura do sensore ultrasonico REALIZADA");
    ultrasomL();
  break;
  
  case '4':
   Serial.println("Leitura do sensor de refletancia REALIZADA");
  Serial.print("A : ");              
  Serial.println(analogRead(A0));
  Serial.print("B : ");
  Serial.println(analogRead(A1)); 
  Serial.print("C : ");
  Serial.println(analogRead(A2));
  Serial.print("D : ");
  Serial.println(analogRead(A3));
  Serial.print("E : ");
  Serial.println(analogRead(A4));
  Serial.print("F : ");
  Serial.println(analogRead(A5));

  break;
  
  case '5':
     Serial.println("Leitura dos sensores sharp laterais REALIZADA");
   cm1 = analogRead(SharpLD);
   cm2 = analogRead(SharpLE);

   Serial.print("Valor lido D = ");
   Serial.println(cm1);
   Serial.print("Valor lido E = ");
   Serial.println(cm2);
   
  break;
  
  case '6':
     Serial.println("Leitura do sensor sharp da frente REALIZADA");
     cm3 = analogRead(SharpGarra);
     cm4 = analogRead(SharpFD);
     Serial.print("Valor lido Sharp Garra =");
     Serial.println(cm3);
     Serial.print("Valor lido Sharp Frente =");
     Serial.println(cm4);
  break;

  
  case '7':
Serial.println("Digite 1 para leitura dos sensores de cor");
Serial.println("Digite 2 para leitura do ultrasonico frontal");
Serial.println("Digite 3 para leitura do ultrasonico lateral");
Serial.println("Digite 4 para leitura de sensor de refletancia");
Serial.println("Digite 5 para leitura dos sensores Sharp das Laterais");
Serial.println("Digite 6 para leitura de sensor Sharp da garra");
Serial.println("Digite 7 para mostrar no menu novamente");
break;
 
}
}
}
