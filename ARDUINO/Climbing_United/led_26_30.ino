  // put your main code here, to run repeatedly:
void led_duaenam_sampai_tigapuluh(){
//--------------LED26-----------------

    if(bacaString.indexOf("ON26") >=0) {
       digitalWrite(ledPin26, HIGH); 
    }
    else if(bacaString.indexOf("OFF26") >=0) {
            digitalWrite(ledPin26, LOW); 
    }

//--------------LED27-----------------

    if(bacaString.indexOf("ON27") >=0) {
       digitalWrite(ledPin27, HIGH); 
    }
    else if(bacaString.indexOf("OFF27") >=0) {
            digitalWrite(ledPin27, LOW); 
    }

//--------------LED28-----------------

    if(bacaString.indexOf("ON28") >=0) {
       digitalWrite(ledPin28, HIGH); 
    }
    else if(bacaString.indexOf("OFF28") >=0) {
            digitalWrite(ledPin18, LOW); 
    }

//--------------LED29-----------------

    if(bacaString.indexOf("ON29") >=0) {
       digitalWrite(ledPin29, HIGH); 
    }
    else if(bacaString.indexOf("OFF29") >=0) {
            digitalWrite(ledPin29, LOW); 
    }

//--------------LED30-----------------

    if(bacaString.indexOf("ON30") >=0) {
       digitalWrite(ledPin30, HIGH); 
    }
    else if(bacaString.indexOf("OFF30") >=0) {
            digitalWrite(ledPin30, LOW); 
    }
}
