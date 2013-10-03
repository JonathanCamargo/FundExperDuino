int pin=13;


/*
C corto
L argo
*/
String Morse[26]={"CL","LCCC","LCLC","LCC","C","CCLC","LLC","CCCC","CC","CLLL","LCL","CLCC","LL","LC","LLL","CLLC","LLCL","CLC","CCC","L","CCL","CCCL","CLL","LCCL","LCLL","LLCC"}; 


void setup(){
  pinMode(pin,OUTPUT);
}

void largo(){
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(1000);
}

void corto(){
  digitalWrite(pin,HIGH);
  delay(250);
  digitalWrite(pin,LOW);
  delay(1000);
}

void morseBlink(char code){
  if (code=='C'){
          corto();         
  }
  if (code=='L'){
          largo();
  }
}

String morseCode(char letra){
  int index=convertIndex(letra);
  if (index>25 || index<0 ){
    return " ";    
  }
  return Morse[index];
}

int convertIndex(char letra){
    return (int)letra-65;
}

int flag=0;
String palabra="SOS";

void loop(){
  delay(1000);
 
  if (flag==0){
    flag=1;
    for (int i=0;i<palabra.length();i++){
        String letraEnMorse=morseCode(palabra[i]);
        for (int j=0;j<letraEnMorse.length();j++){
            morseBlink(letraEnMorse[j]);
        }
        delay(2000);
   }
  
  
  }
  
}

