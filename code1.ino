#define potmeterPin A0



// defines pins numbers

const int stepPin = 5;

const int dirPin = 2;

const int enPin = 8;



int p;

float delay_time=500;



void setup() {



  Serial.begin(9600);





  // Sets the two pins as Outputs

  pinMode(stepPin,OUTPUT);

  pinMode(dirPin,OUTPUT);



  pinMode(enPin,OUTPUT);

  digitalWrite(enPin,LOW);



  // Set Dir to Home switch

  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction





}

void loop() {



     p = analogRead(potmeterPin);

    delay_time = map(p,0,1023,500,1000);

   

     motorStep(1);

 

}

void motorStep( int MAX){



   for(int x = 0; x < MAX; x++) {

        digitalWrite(stepPin,HIGH);

        delayMicroseconds(delay_time);

        digitalWrite(stepPin,LOW);

        delayMicroseconds(delay_time);

      }

   

}
