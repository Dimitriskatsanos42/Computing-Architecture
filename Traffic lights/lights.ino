int rled =7;
int yled =8;
int gled =9;
int rpled =11;
int gpled =10;
String(s);

void setup()
{
Serial.begin(9600);
pinMode(rled, OUTPUT);
pinMode(yled, OUTPUT);
pinMode(gled, OUTPUT);
pinMode(rpled, OUTPUT);
pinMode(gpled, OUTPUT);

}
void loop()
{

digitalWrite(gled,HIGH); 
digitalWrite(rpled,HIGH); 
digitalWrite(yled, LOW);
digitalWrite(rled, LOW); 
digitalWrite(gpled, LOW);
delay(4000);





digitalWrite(gled,LOW);
digitalWrite(rpled,HIGH);
digitalWrite(yled, HIGH);
digitalWrite(rled, LOW);
digitalWrite(gpled, LOW);
delay(1000);


digitalWrite(gled,LOW);
digitalWrite(gpled,HIGH);
digitalWrite(yled, LOW);
digitalWrite(rled, HIGH);
digitalWrite(rpled, LOW);
delay(3000);
  


Serial.println("Dose stop");
s=Serial.readString();
if (s=="stop")
{
digitalWrite(gled,LOW);
digitalWrite(gpled,HIGH);
digitalWrite(yled, LOW);
digitalWrite(rled, HIGH);
digitalWrite(rpled, LOW);
  
}



else{
digitalWrite(gled,HIGH);
digitalWrite(rpled,HIGH);
digitalWrite(yled, LOW);
digitalWrite(rled, LOW);
digitalWrite(gpled, LOW);}
delay(5000);

}

