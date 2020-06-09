void led_loop(){
  while (Serial.available()) {
    delay(10); 
    char c = Serial.read();
    Serial.println(c);
    bacaString += c; 
  }

  if (bacaString.length() > 0) {
    Serial.println(bacaString.length());
    Serial.println(bacaString);

     led_satu_sampai_lima();
     led_enam_sampai_sepuluh();
     led_sebelas_sampai_limabelas();
     led_enambelas_sampai_duapuluh();
     led_duasatu_sampai_dualima();
     led_duaenam_sampai_tigapuluh();
     led_tigasatu_sampai_tigalima();
     led_tigaenam_sampai_empatpuluh();
     cek();
     reset();
     bacaString="";
  }
}
