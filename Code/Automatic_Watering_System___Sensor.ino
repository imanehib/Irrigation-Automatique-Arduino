int water; // Variable pour stocker la lecture du capteur

void setup() {
  pinMode(3, OUTPUT);  // Définir la broche 3 comme sortie pour le relais
  pinMode(6, INPUT);   // Définir la broche 6 comme entrée pour le capteur d’humidité
}

void loop() {
  // Lire la valeur du capteur d’humidité
  water = digitalRead(6); 

  // Si le sol est humide (capteur envoie HIGH), couper la pompe
  if (water == HIGH) {
    digitalWrite(3, LOW); // LOW sur le relais => pompe OFF
  } 
  else {
    // Sinon, le sol est sec => activer la pompe
    digitalWrite(3, HIGH); // HIGH sur le relais => pompe ON
  }

  delay(400); // Attente de 400 ms avant la prochaine lecture
}
