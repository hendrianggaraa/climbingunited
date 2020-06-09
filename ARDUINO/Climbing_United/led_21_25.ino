  // put your main code here, to run repeatedly:
void led_duasatu_sampai_dualima(){
//--------------LED21-----------------

    if(bacaString.indexOf("ON21") >=0){
       digitalWrite(ledPin21, HIGH); 
    }
    else if(bacaString.indexOf("OFF21") >=0) {
            digitalWrite(ledPin21, LOW); 
    }

//--------------LED122-----------------

    if(bacaString.indexOf("ON22") >=0) {
       digitalWrite(ledPin22, HIGH); 
    }
    else if(bacaString.indexOf("OFF22") >=0) {
            digitalWrite(ledPin22, LOW); 
    }

//--------------LED23-----------------

    if(bacaString.indexOf("ON23") >=0) {
       digitalWrite(ledPin23, HIGH); 
    }
    else if(bacaString.indexOf("OFF23") >=0) {
            digitalWrite(ledPin23, LOW); 
    }

//--------------LED24-----------------

    if(bacaString.indexOf("ON24") >=0) {
       digitalWrite(ledPin24, HIGH); 
    }
    else if(bacaString.indexOf("OFF24") >=0) {
            digitalWrite(ledPin24, LOW); 
    }

//--------------LED25-----------------

    if(bacaString.indexOf("ON25") >=0) {
       digitalWrite(ledPin25, HIGH); 
    }
    else if(bacaString.indexOf("OFF25") >=0) {
            digitalWrite(ledPin25, LOW); 
    }
}
