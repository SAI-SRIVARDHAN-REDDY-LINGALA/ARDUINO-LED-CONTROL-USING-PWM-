//CPP 

//CONTROLLING LED USING DIGITAL PWM AS ANALOG OUPTUT 

void setup() {
     pinMode(9,OUTPUT);// DIGITAL PWM PIN 9 TO LED ANODE 
}

void loop() {
  for (int brightness=0;brightness<=255;brightness++){  // FOR CONTROLLING BRIGHTNESS USING PWM DUTY CYCLE 
      analogWrite(9,brightness);               //OUTPUT 
      delay(10);  // FOR SMOOTH INCREASE  SO THAT EYE CAN OBSERVE 
  }

  for (int brightness=255;brightness>=0;brightness--){  // FOR DECREASING  BRIGHTNESS 
        analogWrite(9,brightness);               //OUTPUT 
        delay(10);  // FOR SMOOTH FADDING SO THAT EYE CAN OBSERVE 
    }
}
