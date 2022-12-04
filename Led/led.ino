//led arduino
//created by max21910 with ❤
//Start :


//variable 
const int ledPin =  9;  //the led is connected to the pin 9 of the arduino board 
int times = 2000; //times corresponds to the delay wich in this case is 2000ms /2s 


void setup() {
 Serial.begin(9600); //start the usb communication 
 pinMode(ledPin, OUTPUT); // the led is an output 
}

void loop() {
  
 digitalWrite(ledPin, HIGH); //HIGH corresponds to 1 wich means the led is on 
 delay(times); // the programs wait 2s 
 digitalWrite(ledPin, LOW); //LOW correponds to 0 wich means the led is off 
 delay(times); //the programs wait 2s
   
}

//end 
