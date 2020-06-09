  // put your main code here, to run repeatedly:
void led_enam_sampai_sepuluh(){
//--------------LED6-----------------

    if(bacaString.indexOf("on6") >=0) {
       digitalWrite(ledPin6, HIGH); 
    }
    else if(bacaString.indexOf("off6") >=0) {
            digitalWrite(ledPin6, LOW); 
    }

//--------------LED7-----------------

    if(bacaString.indexOf("on7") >=0) {
       digitalWrite(ledPin7, HIGH); 
    }
    else if(bacaString.indexOf("off7") >=0) {
            digitalWrite(ledPin7, LOW); 
    }

//--------------LED8-----------------

    if(bacaString.indexOf("on8") >=0) {
       digitalWrite(ledPin8, HIGH); 
    }
    else if(bacaString.indexOf("off8") >=0) {
            digitalWrite(ledPin8, LOW); 
    }

//--------------LED9-----------------

    if(bacaString.indexOf("ON11") >=0) {
       digitalWrite(ledPin9, HIGH); 
    }
    else if(bacaString.indexOf("OFF11") >=0) {
            digitalWrite(ledPin9, LOW); 
    }

//--------------LED10-----------------

    if(bacaString.indexOf("ON10") >=0) {
       digitalWrite(ledPin10, HIGH); 
    }
    else if(bacaString.indexOf("OFF10") >=0) {
            digitalWrite(ledPin10, LOW); 
    }
}
