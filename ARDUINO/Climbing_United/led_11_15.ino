  // put your main code here, to run repeatedly:
void led_sebelas_sampai_limabelas(){
//--------------LED11-----------------

    if(bacaString.indexOf("ON11") >=0){
       digitalWrite(ledPin11, HIGH); 
    }
    else if(bacaString.indexOf("OFF11") >=0) {
            digitalWrite(ledPin11, LOW); 
    }

//--------------LED12-----------------

    if(bacaString.indexOf("ON12") >=0) {
       digitalWrite(ledPin12, HIGH); 
    }
    else if(bacaString.indexOf("OFF12") >=0) {
            digitalWrite(ledPin12, LOW); 
    }

//--------------LED13-----------------

    if(bacaString.indexOf("ON13") >=0) {
       digitalWrite(ledPin13, HIGH); 
    }
    else if(bacaString.indexOf("OFF13") >=0) {
            digitalWrite(ledPin13, LOW); 
    }

//--------------LED14-----------------

    if(bacaString.indexOf("ON14") >=0) {
       digitalWrite(ledPin14, HIGH); 
    }
    else if(bacaString.indexOf("OFF14") >=0) {
            digitalWrite(ledPin14, LOW); 
    }

//--------------LED15-----------------

    if(bacaString.indexOf("ON15") >=0) {
       digitalWrite(ledPin15, HIGH); 
    }
    else if(bacaString.indexOf("OFF15") >=0) {
            digitalWrite(ledPin15, LOW); 
    }
}
