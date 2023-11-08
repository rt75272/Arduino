/*  Initial Arduino Test
      - Code turns on LED for 5 seconds,
      then turns off LED for 5 seconds. 
      - Repeats until user cuts power or
      stops the code from running.
 */

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);   // Turn on the LED
  delay(5000);              // Wait for one second
  digitalWrite(13, LOW);    // Turn off the LED  
  delay(5000);              // Wait for one second
}