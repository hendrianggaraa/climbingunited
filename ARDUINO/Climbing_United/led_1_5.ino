  // put your main code here, to run repeatedly:
void led_satu_sampai_lima(){
//--------------LED1-----------------

    if(bacaString.indexOf("on1") >=0){
       digitalWrite(ledPin1, HIGH); 
    }
    else if(bacaString.indexOf("off1") >=0) {
            digitalWrite(ledPin1, LOW); 
    }

//--------------LED2-----------------

    if(bacaString.indexOf("on2") >=0) {
       digitalWrite(ledPin2, HIGH); 
    }
    else if(bacaString.indexOf("off2") >=0) {
            digitalWrite(ledPin2, LOW); 
    }

//--------------LED3-----------------

    if(bacaString.indexOf("on3") >=0) {
       digitalWrite(ledPin3, HIGH); 
    }
    else if(bacaString.indexOf("off3") >=0) {
            digitalWrite(ledPin3, LOW); 
    }

//--------------LED4-----------------

    if(bacaString.indexOf("on4") >=0) {
       digitalWrite(ledPin4, HIGH); 
    }
    else if(bacaString.indexOf("off4") >=0) {
            digitalWrite(ledPin4, LOW); 
    }

//--------------LED5-----------------

    if(bacaString.indexOf("on5") >=0) {
       digitalWrite(ledPin5, HIGH); 
    }
    else if(bacaString.indexOf("off5") >=0) {
            digitalWrite(ledPin5, LOW); 
    }
}
