String incomingData;
int speaker = 8;
void setup() {
 Serial.begin(9600);
pinMode(LED_BUILTIN,OUTPUT);
}
void loop() {
//  if(1==1){
//    digitalWrite(LED_BUILTIN,HIGH);
//  }
//  else{
//    digitalWrite(LED_BUILTIN,LOW);
//  }

if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    //if so, read the incoming data
    incomingData = Serial.readStringUntil('!'); // Reads the data from the serial port
 }
// if (incomingData == '0') {
//  digitalWrite(13, LOW); // Turn LED OFF
////  incomingData = 0;
// }
// else if (incomingData == '1') {
//  digitalWrite(13, HIGH); //Turn LED ON
////  incomingData = 0;
// } 

// Serial.println(incomingData);
 if (incomingData.substring(0,1) == "1") {
  digitalWrite(13, HIGH); // Turn LED ON
 }
 else if (incomingData.substring(0,1) == "0"){
  digitalWrite(13, LOW); // Turn LED OFF
 }
 
 if (incomingData.substring(1,2) == "1") {
  tone(speaker,440); //Turn LED ON
 } 
 else if (incomingData.substring(1,2) == "0") {
  noTone(speaker); //Turn LED OFF
 } 

}

 
