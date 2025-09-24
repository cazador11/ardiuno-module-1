/*Challenge: LED Toggle Button
Goal: Use a push‑button on pin 2 to toggle an LED on pin 9 ON and OFF each time you press the button.

Requirements:
Wire a push‑button:

One side → pin 2
Same side also via pull‑down resistor (10kΩ) → GND
Opposite side → 5V
(or use pinMode(2, INPUT_PULLUP) to skip the external resistor)
Connect an LED with resistor (~220Ω) to pin 9.

Code should:

Wait for a button press.
Each time the button is pressed once, the LED should flip its state (ON → OFF → ON → …).
Print the current state (LED ON or LED OFF) to the Serial Monitor.
✨ This challenge adds:

Digital input (digitalRead)
State tracking with variables
Debouncing logic (basic version can work without but bonus if you handle it).
So here’s the mission brief:
🕹️ Push once → LED ON.
🕹️ Push again → LED OFF.
🕹️ Repeat → Disco button, baby.*/

int sw = 2;
int led = 9;

void setup(){
    pinMode(sw,INPUT_PULLUP);
    pinMode(led,OUTPUT);
}

void loop(){
    int sw_value=digitalRead(sw);
    if (sw_value == LOW)
    digitalWrite(led,HIGH);
    else
    digitalWrite(led,LOW);
}