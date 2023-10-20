///sensores a usar
int led = 6;
int sensor = 7;

///constante a medir distancia
const float sonido = 34300.0;
const float dist1=20.0;
const float dist2=15.0; 
const float dist3=10.0; 
const float dist4=5.0; 
const float dist5=1.0; 


void setup() {
////led de salida
  pinMode(led,OUTPUT);
///sensor de entrada
  pinMode(sensor,INPUT);
}

void loop() {
///empieza apagado
  digitalWrite(led,LOW);

  ///calcula distancia por medio de formula
  float distancia = calculardistancia();

  if(distancia<dist1){
    digitalWrite(led,HIGH);
    delay(5000);
    digitalWrite(led,LOW);
    delay(5000);
      
  } 
  if(distancia<dist2){
      digitalWrite(led,HIGH);
      delay(3000);
      digitalWrite(led,LOW);
      delay (3000);
    } 
  if(distancia<dist3){
    digitalWrite(led,HIGH);
    delay(2000);
    digitalWrite(led,LOW);
    delay(2000);
      
  } 
  if(distancia<dist4){
      digitalWrite(led,HIGH);
      delay(7500);
      digitalWrite(led,LOW);
      delay (7500);
    } 
  if(distancia<dist5){
      digitalWrite(led,HIGH);
      delay(100);
      digitalWrite(led,LOW);
      delay (100);
    } 



}



float calculardistancia(){
  unsigned long tiempo=pulseIn(sensor,HIGH);
  float distancia = tiempo * 0.00001*sonido/2.0;
  return distancia;


}