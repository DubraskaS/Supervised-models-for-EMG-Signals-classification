int analogPin = A3; // Output of EMG circuit connected to analog pin 3
float voltage;
unsigned long time;
                    // outside leads to ground and +5V
int val = 0;  // variable to store the value read
char dataStr[100] = "";
char buffer[7];

void setup() {
  Serial.begin(9600);           //  setup serial
}

void loop() {
  dataStr[0] = 0; //clean out string
  val = analogRead(analogPin);  // read the input pin
  voltage = (float)val *5 / 1023;
  time = millis();

  ltoa( millis(),buffer,10); //convert long to charStr   ¿REALMENTE NECESARIO?
  strcat(dataStr, buffer); //add it to the end
  strcat( dataStr, ", "); //append the delimiter

  dtostrf(voltage, 5, 1, buffer);  //5 is minimum width, 1 is precision; float value is copied onto buff
  strcat( dataStr, buffer); //append the converted float
  strcat( dataStr, 0); //terminate correctly 

  Serial.print(dataStr);          // print value
  Serial.print(", 0.0, 5.0");  //So the plotter won't change y-axis
  Serial.println();
  delay(100);
}
