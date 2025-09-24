/*Goal:

Use a potentiometer connected to analog input A0.
Read its value with analogRead().
Use that value to adjust the brightness of an LED on pin 9 with analogWrite().
At the same time, print the potentiometer value and mapped brightness level to the Serial Monitor.*/
int pot_value;
int led=9;
int brightness;

void setup(){
    pinMode(9,OUTPUT);
    Serial.begin(9600);
}

void loop(){
    pot_value=analogRead(A0);
    brightness=map(pot_value,0,1023,0,255);

    Serial.print('potentiometer: ');
    Serial.println(pot_value);
    Serial.print('Brightness: ');
    Serial.println(brightness);
}