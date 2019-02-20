void Obstaculo(){ 
  if(posicaoG == 1){
 int encoder_dir = motor_dir.read();
 int encoder_esq = motor_esq.read();
 
 MotorUP.write(180);// 180°sobe 20° Desce 
 motor_direita(80);
 if(encoder_dir > 1100 ){ // Vira para direita
  motor_parar();
  while(true){
    OGD1();
}}} 
if(posicaoG == 2){
 int encoder_dir = motor_dir.read();
 int encoder_esq = motor_esq.read();
 
 MotorUP.write(180);// 180°sOGDe 20° Desce 
 motor_esquerda(80);
 if(encoder_esq > 900 ){ // Vira para esquerda
  motor_parar();
  while(true){
    OGE1();
}}}}

//////////////////////////////////////////////////////
///////////////OBSTACULO GRANDE DIREITA///////////////
//////////////////////////////////////////////////////
void OGD1 (){
motor_dir.write(0);
motor_esq.write(0);
motor_parar();
delay(300);
while(true){
MotorUP.write(180);// 180°sOGDe 20° Desce 
int encoder_dir = motor_dir.read();
int encoder_esq = motor_esq.read(); // Segue para frente 
  motor_avancar(80);
 if(encoder_dir > 1100 ){
  motor_parar();
  delay(100);
 while(true){
  OGD2();
 } } } }
//////////////////////////////////////////////////////
void OGD2 (){
motor_dir.write(0);
motor_esq.write(0);
motor_parar();
delay(200);
while(true){
MotorUP.write(180);// 180°sOGDe 20° Desce   
int encoder_dir = motor_dir.read();
int encoder_esq = motor_esq.read();
  motor_esquerda(80);                // vira para direita
 if(encoder_esq > 1000 ){
  motor_parar();
  delay(100);
  while(true){
   OGD3(); 
} } } }
//////////////////////////////////////////////////////
void OGD3 (){
motor_dir.write(0);
motor_esq.write(0);
motor_parar();
delay(200);
while(true){
MotorUP.write(180);// 180°sOGDe 20° Desce 
int encoder_dir = motor_dir.read();
int encoder_esq = motor_esq.read(); // Segue para frente
 motor_avancar(80);
 if(encoder_dir > 2100 ){
  motor_parar();
  delay(100);
  while(true){
    OGD4();
}}}}
//////////////////////////////////////////////////////
void OGD4(){
motor_dir.write(0);
motor_esq.write(0);
motor_parar();
delay(200);
while(true){
MotorUP.write(180);// 180°sobe 20° Desce 
int encoder_dir = motor_dir.read(); // Vira para direita
int encoder_esq = motor_esq.read();
 motor_esquerda(80);
 if(encoder_esq > 600 ){
  motor_parar();
  delay(100);
  while(true){
    OGD5();
}}}}
//////////////////////////////////////////////////////
void OGD5(){
motor_dir.write(0);
motor_esq.write(0);
motor_parar();
delay(200);
while(true){
MotorUP.write(180);// 180°sobe 20° Desce 
int encoder_dir = motor_dir.read();
int encoder_esq = motor_esq.read();  // Avancar para cima da linha preta 
 motor_avancar(80);
 if(encoder_esq > 1000 ){
  motor_parar();
  delay(100);
  while(true){
   Rumo_ao_resgate(); // volta para o Void de execucao da mesa
}}}}
//////////////////////////////////////////////////////
//////////OBSTACULO GRANDE ESQUERDA///////////////////
//////////////////////////////////////////////////////
void OGE1 (){
motor_dir.write(0);
motor_esq.write(0);
motor_parar();
delay(300);
while(true){
MotorUP.write(180);// 180°sobe 20° Desce 
int encoder_dir = motor_dir.read(); // Segue para frente 
int encoder_esq = motor_esq.read();
  motor_avancar(80);
 if(encoder_dir > 1100 ){
  motor_parar();
  delay(100);
 while(true){
  OGE2();
 } } } }
//////////////////////////////////////////////////////
void OGE2 (){
motor_dir.write(0);
motor_esq.write(0);
motor_parar();
delay(200);
while(true){
MotorUP.write(180);// 180°sOGDe 20° Desce   
int encoder_dir = motor_dir.read(); // vira para esquerda
int encoder_esq = motor_esq.read();
  motor_direita(80);
 if(encoder_dir > 1000 ){
  motor_parar();
  delay(100);
  while(true){
   OGE3(); 
} } } }
//////////////////////////////////////////////////////
void OGE3 (){
motor_dir.write(0);
motor_esq.write(0);
motor_parar();
delay(200);
while(true){
MotorUP.write(180);// 180°sOGDe 20° Desce 
int encoder_dir = motor_dir.read();
int encoder_esq = motor_esq.read(); // Segue para frente 
 motor_avancar(80);
 if(encoder_dir > 2100 ){
  motor_parar();
  delay(100);
  while(true){
    OGE4();
}}}}
//////////////////////////////////////////////////////
void OGE4(){
motor_dir.write(0);
motor_esq.write(0);
motor_parar();
delay(200);
while(true){
MotorUP.write(180);// 180°sobe 20° Desce 
int encoder_dir = motor_dir.read();
int encoder_esq = motor_esq.read(); // Virar para esquerda
 motor_direita(80);
 if(encoder_dir > 600 ){
  motor_parar();
  delay(100);
  while(true){
    OGE5();
}}}}
//////////////////////////////////////////////////////
void OGE5(){
motor_dir.write(0);
motor_esq.write(0);
motor_parar();
delay(200);
while(true){
MotorUP.write(180);// 180°sobe 20° Desce 
int encoder_dir = motor_dir.read(); // Avancar para cima da linha preta 
int encoder_esq = motor_esq.read();
 motor_avancar(80);
 if(encoder_dir > 1000 ){
  motor_parar();
  delay(100);
  while(true){
   Rumo_ao_resgate();
}}}}


