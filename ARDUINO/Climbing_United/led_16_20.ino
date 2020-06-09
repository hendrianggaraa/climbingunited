  // put your main code here, to run repeatedly:
void led_enambelas_sampai_duapuluh(){
//--------------LED16-----------------

    if(bacaString.indexOf("ON16") >=0) {
       digitalWrite(ledPin16, HIGH); 
    }
    else if(bacaString.indexOf("OFF16") >=0) {
            digitalWrite(ledPin16, LOW); 
    }

//--------------LED17-----------------

    if(bacaString.indexOf("ON17") >=0) {
       digitalWrite(ledPin17, HIGH); 
    }
    else if(bacaString.indexOf("OFF17") >=0) {
            digitalWrite(ledPin17, LOW); 
    }

//--------------LED18-----------------

    if(bacaString.indexOf("ON18") >=0) {
       digitalWrite(ledPin18, HIGH); 
    }
    else if(bacaString.indexOf("OFF18") >=0) {
            digitalWrite(ledPin18, LOW); 
    }

//--------------LED19-----------------

    if(bacaString.indexOf("ON19") >=0) {
       digitalWrite(ledPin19, HIGH); 
    }
    else if(bacaString.indexOf("OFF19") >=0) {
            digitalWrite(ledPin19, LOW); 
    }

//--------------LED20-----------------

    if(bacaString.indexOf("ON20") >=0) {
       digitalWrite(ledPin20, HIGH); 
    }
    else if(bacaString.indexOf("OFF20") >=0) {
            digitalWrite(ledPin20, LOW); 
    }
}
