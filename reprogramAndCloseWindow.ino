
char ctrlKey = KEY_LEFT_CTRL;    
void setup() {
  // make pin 2 an input and turn on the 
  // pullup resistor so it goes high unless
  // connected to ground:
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  delay(4000);
  // new document:
  Keyboard.press(ctrlKey);
  Keyboard.press('n');
  delay(70);
  Keyboard.releaseAll();
  // wait for new window to open:
  delay(1000);

  // Type out "blink":
Keyboard.println("char ctrlKey = KEY_LEFT_CTRL; ");
Keyboard.println("void setup() {");
Keyboard.println("  Keyboard.begin();");
Keyboard.println("  pinMode(17, OUTPUT);");
Keyboard.println("}");
Keyboard.println("void loop() {");
Keyboard.println("  Keyboard.press(ctrlKey);");
Keyboard.println("  Keyboard.press('w');");
Keyboard.println("  delay(100);");
Keyboard.println("  Keyboard.releaseAll();");
Keyboard.println("  delay(150);");
Keyboard.println("  Keyboard.write(KEY_TAB);");
Keyboard.println("  Keyboard.write(KEY_TAB);");
Keyboard.println("  Keyboard.write(KEY_RETURN);");
Keyboard.println("  while (true)");
Keyboard.println("  {");
Keyboard.println("    digitalWrite(17, HIGH);");
Keyboard.println("    delay(1000);digitalWrite(17, LOW);");
Keyboard.println("    delay(1000);");
Keyboard.println("  }");
Keyboard.println("}");
  delay(3000);
  // upload code:
  Keyboard.press(ctrlKey);
  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(ctrlKey);
  Keyboard.press('u');
  delay(100);
  Keyboard.releaseAll();

  // wait for the sweet oblivion of reprogramming:
  while(true);
}






