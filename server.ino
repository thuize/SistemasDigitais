int led = 13;

void setup(){
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}

void loop(){

    char input = Serial.read(); 


    if( input == '1' ){
        digitalWrite(led, HIGH);
    }
    
    else if( input == '0'){
        digitalWrite(led, LOW); 
    }
}
