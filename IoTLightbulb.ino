// This #include statement was automatically added by the Particle IDE.
#include <blynk.h>

// This #include statement was automatically added by the Particle IDE.
#include <SparkFunRHT03.h>

char auth[] = "68b4963177ce4687a8efc9598013d99f";

int red = 10;
int blue = 12;
int green = 13;

int sensor = 3;
int i = param.asInt();
int value = digitalRead(sensor);

void setup() {
    Blynk.begin(auth); // initiate Blynk library

    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(green, OUTPUT);
}


void loop() {
    Blynk.run();
    value = digitalRead(sensor);
    
   if ( i == 1 ) {
       digitalWrite(red, HIGH);
       digitalWrite(blue, LOW);
       digitalWrite(green, LOW);
} else {
    digitalWrite(red, LOW); 
    digitalWrite(blue, HIGH);
    digitalWrite(green, HIGH); 
}

}