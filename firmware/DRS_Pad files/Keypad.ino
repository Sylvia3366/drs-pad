void setupMatrix(){
  for (int i = 0; i < 3; i++){ 
    pinMode(rowPins[i], OUTPUT);
    pinMode(colPins[i], INPUT_PULLDOWN);
  }
}

void scanKeyMatrix(){
  for (int r = 0; r < 3; r++){ 
    digitalWrite(rowPins[r], HIGH);
    
    for (int c = 0; c < 3; c++) {
      if (digitalRead(colPins[c]) == HIGH) {
        int buttonIndex = (r * 3) + c;
        handleKeyPress(buttonIndex);
        delay(50); //debounce
      }
    }
    digitalWrite(rowPins[r], LOW);
  }
}

void handleKeyPress(int index) {
  Keyboard.press(keyMap[index]);
  delay(50);
  Keyboard.release(keyMap[index]);
  
  while(digitalRead(colPins[index % 3]) == HIGH) { 
    delay(10); 
  }
}