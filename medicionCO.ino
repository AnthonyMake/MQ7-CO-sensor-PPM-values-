#define sensorSupply 9
#define sensorMeas   0
#define t5v     10 //en segundos
#define t14v    10
int vSense;

void setup() {
  pinMode(sensorSupply,OUTPUT);

  Serial.begin(9600);
}


void loop() {
  Serial.println("Calentando el sensor");
  for(int i=0;i<=t5v;i++){
     delay(999);
     Serial.print(".");
  }
  Serial.println();

  for(int i=0;i<=t14v;i++){
     delay(999);
     vSense=analogRead(sensorMeas);
     Serial.print("medicion: ");
     Serial.println(vSense);
  }
  
}
