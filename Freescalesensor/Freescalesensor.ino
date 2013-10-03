
int ledpin=13;
int analogPin=10;
int voltaje=0;



void setup()
{

pinMode(ledpin,OUTPUT);
digitalWrite(ledpin,HIGH);  
Serial.begin(115200);
Serial.write("que mas?");

analogReference(DEFAULT);

}


void loop()

{
 delay(1000);
 voltaje=analogRead(analogPin);
 float presion=voltaje*2.2222*4.8828/1000;
 Serial.print("La presion es: ");  
 Serial.print(presion);
 Serial.println(" kPa");
}

