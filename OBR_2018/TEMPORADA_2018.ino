#include <Servo.h> // Biblioteca do Servo
#include <Encoder.h>// Biblioteca do Encoder
#include <Ultrasonic.h>// Biblioteca do Ultrasonico
//Botões 1 -> Mesa, 2 -> leitura
const int BotaoM = 39;
const int BotaoL = 38;
//Portas do Encoder
Encoder motor_dir(20, 21);//Pinagem do interruptor do Moto Direito
Encoder motor_esq(18, 19);//Pinagem do interruptor do Moto Esquerdo 
//Armazena valores da variavel do encoder 
long pulso_dir = 0;
long pulso_esq = 0;
//Posicao do obstaculo
const int posicaoG = 1;//Valor 1 = Obstsaculo para direita. Valor 2 = Obstaculo para esquerda
const int posicaoP = 1;//Valor 1 = Obstsaculo para direita. Valor 2 = Obstaculo para esquerda
// Armazena valores para Variavel dos Botoes 
int leitura = 0;
int Mesa = 0;
int estadoBotao = 0;
int estadoBotao2 = 0;
/////Leitura dos Sharps/////////
int cm1 = 0;
int cm2 = 0;
int cm3 = 0;
int cm4 = 0;

char buf;
///////////////////////////////////////
//Portas Sharps
const int SharpLD = 8; // Lateral direita
const int SharpLE = 11; // Lateral esquerda 
const int SharpFD = 14; // Frente cima-direita
const int SharpGarra = 6;// Garra
////////////////////////////////////////////////
//Porta dos motores 
const int B_mais_pwm =5;
const int B_menos =4;
const int A_mais_pwm =3;
const int A_menos    =2;
//////////////////////////////////////
// Portas Sensor de Cor Direito     
const int S0D = 22;  
const int S1D = 24;  
const int S2D = 26;  
const int S3D = 28;  
const int OUTD= 30;   
// Variaveis que armazenam o valor das cores direito   
int redd = 0;  
int greend = 0;  
int blued = 0;  
////////////////////////////////////////
// Portas Sensor de Cor Esquerdo
const int S0E = 23;  
const int S1E = 25;  
const int S2E = 27;  
const int S3E = 29;  
const int OUTE= 31;   
//Variaveis que armazenam o valor das cores esquerda
int rede = 0;  
int greene = 0;  
int bluee = 0;  
//////////////////////////////////////////////
//Denominando os nomes para cada Servo
Servo MotorGarra;
Servo MotorUP;
Servo MotorTampa;
// Portas do Ultrasonico Frente 
const int echoPinF = 43; // recebe o som
const int trigPinF = 42;// emite  o som
///////////////////////////////////////
const int echoPinL = 6;  // recebe o som
const int trigPinL = 7;  // emite  o som 
/////////////////////////////////////
Ultrasonic ultrasonicF(trigPinF, echoPinF);
Ultrasonic ultrasonicL(trigPinL, echoPinL);
///////////////////////////////////////
void setup() {
Serial.begin(9600);
///////////////////////////////////////
//Portas sensor de cor Direito
  {
  pinMode(S0D, OUTPUT);
  pinMode(S1D, OUTPUT); 
  pinMode(S2D, OUTPUT);
  pinMode(S3D, OUTPUT);
  pinMode(OUTD, INPUT);  
  Serial.begin(9600);
  digitalWrite(S0D,HIGH);
  digitalWrite(S1D,HIGH);
}
//////////////////////////////////////
//Portas Sensor de cor Esquerdo
  {
  pinMode(S0E, OUTPUT);
  pinMode(S1E, OUTPUT); 
  pinMode(S2E, OUTPUT);
  pinMode(S3E, OUTPUT);
  pinMode(OUTE, INPUT);  
  Serial.begin(9600);
  digitalWrite(S0E,HIGH);
  digitalWrite(S1E,HIGH);
}
////////////////////////////////
//Portas do Sensor de Refletancia
int sensor0 = analogRead(A0);
int sensor1 = analogRead(A1);
int sensor2 = analogRead(A2);
int sensor3 = analogRead(A3);
int sensor4 = analogRead(A4);
int sensor5 = analogRead(A5);
////////////////////////////////
//Portas dos Servos
MotorUP.attach(41);
MotorGarra.attach(51);
MotorTampa.attach(47);
///////////////////////////////
//Define o angulo Inicial de cada Servo. Sendo assim garra fechada e levantada.
MotorUP.write(180);// 180°sobe 20° Desce 
MotorGarra.write(0); // 0° fecha 90°abre
MotorTampa.write(160);// Fecha em 160° e Abre em 50° 

////////////////////////////////
//Define os botões como entrada  
  pinMode(BotaoM,INPUT);  
  pinMode(BotaoL,INPUT);
//////////////////////////////
//Define as portas B- e A- como saida
  pinMode(B_menos, OUTPUT);
  pinMode(A_menos, OUTPUT);
//////////////////////////////
  //Ultrasonico Frente
  pinMode(trigPinF, OUTPUT);
  pinMode(echoPinF, INPUT);
//Variavel que define sensibilidade do sensor de refletancia 
int sensibilidade = 400;
Serial.begin(9600);
Serial.println("Digite 1 para leitura dos sensores de cor");
Serial.println("Digite 2 para leitura do ultrasonico frontal");
Serial.println("Digite 3 para leitura do ultrasonico lateral");
Serial.println("Digite 4 para leitura de sensor de refletancia");
Serial.println("Digite 5 para leitura dos sensores Sharp das Laterais");
Serial.println("Digite 6 para leitura de sensor Sharp da garra");
Serial.println("Digite 7 para mostrar no menu novamente");

  }

void loop() {
// Enquanto Mesa for maior que 0 executa o While
while(Mesa > 0){ // Mesa(Segue-Linha, Verdes ETC.)
 motor_parar();
 delay(750);
 motor_avancar(75);
 delay(10);
 while(true){
 Rumo_ao_resgate();
}
}
//Enquanto Leitura for maior que 0 executa o While
while(leitura > 0){ // Leitura dos sensores
motor_parar();
while(true){
Leitura(); 
}
}
///////////////////////////////////////
///////////////////////////////////////
///////////////////////////////////////

if(estadoBotao > 0){// se estado do botao for maior que 0 define mesa com valor 1
  Mesa = 1;
}
if(estadoBotao2 > 0){// se estado do botao for maior que 0 define Leitura com valor 1
  leitura = 1;
}
// Define estadoBotão 1 e 2 para Leitura dos Botoes M e L 
  estadoBotao = digitalRead(BotaoM);    
  estadoBotao2 = digitalRead(BotaoL);
}
