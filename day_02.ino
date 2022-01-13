void setup() {
  // put your setup code here, to run once:
  delay(1000);
  Serial.begin(9600);//Serial data trasfer karaganna 9600 Speed 
  delay(1500);
  Serial.println("AT");//connection harida kiyala check karagannava GSM module ekn 
  delay(1500);
  Serial.println("ATD+ +94771939497;");// ATD-dial code +-no eka join karanava code ekn 
  delay(2000);   

}

void loop() {
  // put your main code here, to run repeatedly:

}
