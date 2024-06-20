/***   Global variables   ***/
int tempo_rosso;
int tempo_giallo;
int tempo_verde;
int rosso;
int giallo;
int verde;
int contatore;

/***   Function declaration   ***/
void Lampeggia (int tempo, int colore);

void setup()
{
  tempo_rosso=1500;

  tempo_giallo=500;

  tempo_verde=1000;

  rosso=(12);

  giallo=(11);

  verde=(10);

  contatore=0;



}


void loop()
{
    for (contatore = 1; contatore <= 5; contatore++) {
      Lampeggia(tempo_rosso, rosso);
      Lampeggia(tempo_verde, verde);
      Lampeggia(tempo_giallo, giallo);
    }
    for (contatore = 1; contatore <= 10; contatore++) {
      Lampeggia(tempo_giallo, giallo);
      delay(tempo_giallo);
    }

}

/***   Function definition   ***/
void Lampeggia (int tempo, int colore) {
  pinMode(colore,OUTPUT);
  digitalWrite(colore,HIGH);
  delay(tempo);
  pinMode(colore,OUTPUT);
  digitalWrite(colore,LOW);
 }