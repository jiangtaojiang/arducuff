void readSerial() {
  
  if (Serial.available()) {
  
    serialquery = Serial.read();
    switch (serialquery) {
    case 'A': // 
		 test = FloatSerial();
      break;
    case 'C': //
      
      break;
    case 'E': //
      
      break;
    }
	
	
	
	
	
float FloatSerial() {
 
  byte index = 0;
  byte timeout = 0;
  char data[128] = "";

  do {
    if (Serial.available() == 0) {
      delay(10);
      timeout++;
    }
    else {
      data[index] = Serial.read();
      timeout = 0;
      index++;
    }
  } 
  while ((index == 0 || data[index-1] != ';') && (timeout < 5) && (index < sizeof(data)-1));
  data[index] = '\0';
//  while ((data[constrain(index-1, 0, 128)] != ';') && (timeout < 5) && (index < 128));
  return atof(data);
}





void sendSerial() {
  update = 0;
  switch (serialquery) {
  case '=': 
   Serial.print(1);
    comma();
    Serial.print(2);
    comma();
    Serial.print(3);
    comma();
    Serial.print(4);
    break;
  case 'B': /
   
    break;
}



