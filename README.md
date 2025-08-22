
```markdown
# 🌱 Irrigation-Automatique-Arduino

Un projet d’irrigation automatique basé sur **Arduino Uno**, enrichi par des techniques de **Machine Learning** afin d’optimiser l’utilisation de l’eau.  
Le système lit en temps réel les données des capteurs (humidité du sol, température, etc.) et déclenche une pompe uniquement lorsque c’est nécessaire.  

---

## 🚀 Fonctionnalités
- 💧 **Arrosage intelligent** basé sur l’humidité du sol  
- ⏰ **Programmation horaire** avec le module RTC DS3231  
- ⚡ **Faible consommation d’énergie** (200–220 mA)  
- 📊 **Analyse par Machine Learning** (Arbre de décision, Random Forest, SVM, etc.) pour prédire le besoin en arrosage  
- 🌐 Évolutif vers un système connecté (Wi-Fi / IoT)  

---

## 📂 Structure du repository

```

Irrigation-Automatique-Arduino/
│── Code/                      # Codes et scripts Arduino / Python
│   ├── Automatic\_Watering\_System\_\_Timer.ino   # Gestion de l’arrosage par minuterie
│   ├── Automatic\_Watering\_System\_\_Sensor.ino  # Gestion par capteur d’humidité
│   ├── irrigation\_auto\_ML\_eval.ipynb          # Notebook d’évaluation des modèles ML
│   ├── t1.py                                 # Script Python annexe
│   └── test\_aug12a.ino                       # Test de la pompe à eau
│
│── Images/                   # Images et schémas
│── LICENSE                   # Licence MIT
│── README.md                 # Documentation du projet

````

---

## ⚙️ Matériel utilisé
- **Arduino Uno (ATmega328P)**  
- **Capteur d’humidité du sol**  
- **Module RTC DS3231 (horloge temps réel)**  
- **Pompe submersible + module relais 5V**  
- **Alimentation externe / USB**  

---

## 🔬 Résultats

- **Précision des modèles ML :**
  - 🌳 Arbre de Décision : **99,96 %**
  - 🌲 Random Forest : **99,51 %**
  - 📈 KNN : **90,36 %**
  - 📉 SVM : **85,28 %**

- **Impact :**
  - Réduction significative du gaspillage d’eau  
  - Automatisation complète du processus d’arrosage  

---

## 📖 Utilisation

1. Cloner le dépôt :
   ```bash
   git clone https://github.com/imanehib/Irrigation-Automatique-Arduino.git
````

2. Ouvrir les fichiers `.ino` dans **Arduino IDE**.
3. Charger le programme correspondant (capteur ou minuterie) sur l’Arduino Uno.
4. *(Optionnel)* Tester le modèle ML dans `irrigation_auto_ML_eval.ipynb` via **Google Colab**.

---

## 📚 Références

* [Documentation Arduino Uno](https://docs.arduino.cc/hardware/uno-rev3)
* [Google Colab](https://colab.research.google.com/)
* Articles récents (2024–2025) sur l’irrigation intelligente

---

## 👩‍💻 Auteur

Projet réalisé par **Imane Hibaoui** dans le cadre d’un stage académique (2025).

---

## 📜 Licence

Ce projet est distribué sous licence **MIT** – utilisation libre avec attribution.

````
