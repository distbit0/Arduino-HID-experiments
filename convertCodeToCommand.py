text = """
  Keyboard.press(ctrlKey);
  Keyboard.press('w');
  delay(100);
  Keyboard.releaseAll();
  delay(150);
  Keyboard.write(KEY_TAB);
  Keyboard.write(KEY_TAB);
  Keyboard.write(KEY_RETURN);
  """
for line in text.split("\n"):
    print('Keyboard.println("' + line + '");')
