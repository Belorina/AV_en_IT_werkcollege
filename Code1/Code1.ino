//digital Arduino input (knopjes)
const int drumKnop1 = 1;
const int drumKnop2 = 2;
const int drumKnop3 = 3;
const int drumKnop4 = 4;

//analog Arduino input
const int snelheid = A0;     //potentiometer
const int volume = A1;            //schuifsensor voor volume

/* volume drempel variabele, wordt gebruikt om aan
  te geven of de gebruiker de knop induwd */
const int volumeDrempel = 1; //bij 1 is hij toch aan?!

//variabelen voor de omvang van het volume van elk drum knop
int drum1_vol = 0;
int drum2_vol = 0;
int drum3_vol = 0;
int drum4_vol = 0;

// waarde opslaan van snelheidMuziek (potentiometer)
int snelheidWaarde = 0;

// waarde opslaan van volume (schuifsensor)
int volumeWaarde = 0;

void setup() {

  Serial.begin(9600);

  //aangeven dat  de knoppen input zijn
  pinMode(drumKnop1, INPUT);
  pinMode(drumKnop2, INPUT);
  pinMode(drumKnop3, INPUT);
  pinMode(drumKnop4, INPUT);
  
  pinMode(snelheidMuziek, INPUT);
  pinMode(volume, INPUT);
}

void loop() {
  // waarde lezen van de analoge sensoren
  snelheidWaarde = analogRead(snelheid);
  volumeWaarde = analogRead(volume);

  //snelheid aanpassen (in procent?)
  map(snelheid, 0, 1023, 0, 100);

  //volume aanpassen (in procent?)
  map(volume, 0, 1023, 0, 100);

  // eerste knop
if(analogRead(drumKnop1) >= volumeDrempel){
  //dan moet er een geluidje komen??
}

  // tweede knop
if(analogRead(drumKnop2) >= volumeDrempel){
  //dan moet er een geluidje komen??
}

  // derde knop
if(analogRead(drumKnop3) >= volumeDrempel){
  //dan moet er een geluidje komen??
}

  // vierde knop
if(analogRead(drumKnop4) >= volumeDrempel){
  //dan moet er een geluidje komen??
}

}
