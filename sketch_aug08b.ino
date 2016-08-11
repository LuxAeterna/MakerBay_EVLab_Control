//Arduino sketch printing out bluetooth data

char a;
String value = "";
boolean ledon = false;
#define led 5

void setup()
{
Serial.begin(9600);
pinMode(led, OUTPUT);
}

String getMessage(){
String value = "";
char a;

while(Serial.available() > 0) {
a = ((byte)Serial.read());
value += String(a);
}
return value;
}

void loop()
{
// if (Serial.available() > 0)
// {string = "";}
String value = getMessage();
if (value!=""){
Serial.print(value);
Serial.println();
}
delay(10);
}
