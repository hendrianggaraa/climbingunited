  // put your main code here, to run repeatedly:
void led_tigasatu_sampai_tigalima(){
//--------------LED31-----------------

    if(bacaString.indexOf("ON31") >=0){
       digitalWrite(ledPin31, HIGH); 
    }
    else if(bacaString.indexOf("OFF31") >=0) {
            digitalWrite(ledPin31, LOW); 
    }

//--------------LED132-----------------

    if(bacaString.indexOf("ON32") >=0) {
       digitalWrite(ledPin32, HIGH); 
    }
    else if(bacaString.indexOf("OFF32") >=0) {
            digitalWrite(ledPin32, LOW); 
    }

//--------------LED33-----------------

    if(bacaString.indexOf("ON33") >=0) {
       digitalWrite(ledPin33, HIGH); 
    }
    else if(bacaString.indexOf("OFF33") >=0) {
            digitalWrite(ledPin33, LOW); 
    }

//--------------LED34-----------------

    if(bacaString.indexOf("ON34") >=0) {
       digitalWrite(ledPin34, HIGH); 
    }
    else if(bacaString.indexOf("OFF34") >=0) {
            digitalWrite(ledPin34, LOW); 
    }

//--------------LED35-----------------

    if(bacaString.indexOf("ON35") >=0) {
       digitalWrite(ledPin35, HIGH); 
    }
    else if(bacaString.indexOf("OFF35") >=0) {
            digitalWrite(ledPin35, LOW); 
    }
}
