float pi =  3.14;
int height;
int diameter;

void setup() {;
  Serial.begin(9600);
 Serial.println(" Diameter? ");     
      while (Serial.available() == 0)
      {  }
      diameter= Serial.parseInt(); 
                      
  Serial.println(" Hoogte? ");     
    while (Serial.available() == 0)
    {  }
    height= Serial.parseInt();
 
 float volume = pi * (diameter / 2) * (diameter / 2) * height;
  Serial.println("Inhoud van een cilinder ================");
  Serial.print ("hoogte is ");
  Serial.print (height);
  Serial.print (" diameter is ");
  Serial.print (diameter);
  Serial.print (" . De inhoud is ");
  Serial.print (volume);
  Serial.println ("cm3");
  delay (1000);

}

void loop() {
    
}
