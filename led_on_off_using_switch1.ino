
int swt = A0;
int led = 2;

void setup()
{
  pinMode(swt,INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  
}

void loop(){
  if(digitalRead(swt)==0)
  {
    digitalWrite(led,1);
    Serial.println("LED IS ON");
  }
  else{
    digitalWrite(led,0);
    Serial.println("LED IS 0FF");
 
  
  }

}