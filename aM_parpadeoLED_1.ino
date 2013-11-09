/*arduAMAUTA*/
/*Hola Mundo*/
int ledPin = 13;    //declaramos el Pin nº13 tipo int (entero)            

void setup()        //aquí se declaran las variables, se ejecuta una sola vez
{
  pinMode(ledPin, OUTPUT);  //la función pinMode configura a ledPin en modo salida/OUTPUT
}

void loop()         //bucle de instrucciones que se ejecutan de forma secuencial y cíclicamente
{
  digitalWrite(ledPin, HIGH);  //configura a ledPin como estado HIGH/encendido
  delay(2000);      //la función delay/retardo de 2 seg. = 2000 ms (milisegundos) en estado HIGH                
  digitalWrite(ledPin, LOW);   //configura a ledPin como estado LOW/apagado
  delay(1000);      //la función delay/retardo de 1 seg. en estado LOW              
}

