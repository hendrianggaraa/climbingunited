  // put your main code here, to run repeatedly:
void led_tigaenam_sampai_empatpuluh(){
//--------------LED36-----------------

    if(bacaString.indexOf("ON36") >=0) {
       digitalWrite(ledPin36, HIGH); 
    }
    else if(bacaString.indexOf("OFF36") >=0) {
            digitalWrite(ledPin36, LOW); 
    }

//--------------LED37-----------------

    if(bacaString.indexOf("ON37") >=0) {
       digitalWrite(ledPin37, HIGH); 
    }
    else if(bacaString.indexOf("OFF37") >=0) {
            digitalWrite(ledPin37, LOW); 
    }

//--------------LED38-----------------

    if(bacaString.indexOf("ON38") >=0) {
       digitalWrite(ledPin38, HIGH); 
    }
    else if(bacaString.indexOf("OFF38") >=0) {
            digitalWrite(ledPin38, LOW); 
    }

//--------------LED39-----------------

    if(bacaString.indexOf("ON39") >=0) {
       digitalWrite(ledPin39, HIGH); 
    }
    else if(bacaString.indexOf("OFF39") >=0) {
            digitalWrite(ledPin39, LOW); 
    }

//--------------LED40-----------------

    if(bacaString.indexOf("ON40") >=0) {
       digitalWrite(ledPin40, HIGH); 
    }
    else if(bacaString.indexOf("OFF40") >=0) {
            digitalWrite(ledPin40, LOW); 
    }
}
