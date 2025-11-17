//Declaração de variaveis

int Button1 = 4;
int Button2 = 6;
int LED = 7;
int estado_Button1 = 0;
int estado_Button2 = 0;
int temp = 5000;


// Programa principal 

void setup(){
 pinMode(Button1,INPUT);
 pinMode(Button2,INPUT);
 pinMode(LED,OUTPUT);
}

void loop(){
  estado_Button1 = digitalRead(Button1);
  estado_Button2 = digitalRead(Button2);
  
  
  if((estado_Button1 == HIGH) && (estado_Button2 == HIGH)){
     digitalWrite(LED, HIGH);
    
  }else{
     digitalWrite(LED, LOW);        
  }
  
    
    

}