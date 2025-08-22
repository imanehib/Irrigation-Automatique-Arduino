# Irrigation-Automatique-Arduino
Automatic irrigation system using Arduino Uno, soil moisture sensor, relay module and machine learning integration.

```markdown
# 🌱 Irrigation-Automatique-Arduino

Un projet d’irrigation automatique basé sur **Arduino Uno** et enrichi par des techniques de **Machine Learning** pour optimiser l’utilisation de l’eau.  
Ce système lit en temps réel les données de capteurs (humidité du sol, température, etc.) et déclenche une pompe uniquement lorsque c’est nécessaire.  

---

## 🚀 Fonctionnalités
- 💧 **Arrosage intelligent** basé sur l’humidité du sol.  
- ⏰ **Programmation horaire** avec le module RTC DS3231.  
- ⚡ **Faible consommation d’énergie** (200–220 mA).  
- 📊 **Analyse par Machine Learning** (Arbre de décision, Random Forest, SVM, etc.) pour prédire le besoin en arrosage.  
- 🌐 Possibilité d’évolution vers un système connecté (Wi-Fi).  

---
````
## 📂 Structure du repository
Irrigation-Automatique-Arduino/
│── Code/ # Dossier contenant tous les codes et scripts
│ ├── 1Automatic_Watering_System__Timer.ino # Gestion de l’arrosage par minuterie
│ ├── Automatic_Watering_System__Sensor.ino # Gestion de l’arrosage par capteur d’humidité
│ ├── irrigation_auto_ML_eval.ipynb # Notebook d’évaluation des modèles ML
│ ├── t1.py # Script Python annexe
│ └── test_aug12a.ino # Test de la pompe à eau
│
│── Images/ # Dossier contenant les images et schémas
│
│── LICENSE # Licence du projet (MIT)
│── README.md # Documentation du projet
````

---

## ⚙️ Matériel utilisé
- **Arduino Uno** (ATmega328P)  
- **Capteur d’humidité du sol**  
- **Module RTC DS3231**  
- **Pompe submersible + relais 5V**  
- **Alimentation externe / USB**  

---

## 🔬 Résultats
- **Précision du modèle ML :**
  - 🌳 Arbre de Décision : 99,96 %  
  - 🌲 Random Forest : 99,51 %  
  - 📈 KNN : 90,36 %  
  - 📉 SVM : 85,28 %  

- **Impact :**
  - Réduction significative du gaspillage d’eau  
  - Automatisation complète de l’arrosage  


---

## 📖 Utilisation
1. Cloner le repo :
   ```bash
   git clone https://github.com/imanehib/Irrigation-Automatique-Arduino.git
````

2. Ouvrir le code avec **Arduino IDE**.
3. Charger le programme selon la configuration souhaitée (capteur ou minuterie).
4. (Optionnel) Tester le modèle ML dans `irrigation_auto_ML_eval.ipynb` via **Google Colab**.

---

## 📚 Références

* [Documentation Arduino Uno](https://docs.arduino.cc/hardware/uno-rev3)
* [Google Colab Notebook](https://colab.research.google.com/)
* Articles récents (2024–2025) sur l’irrigation intelligente.

---

## 👩‍💻 Auteur

Projet réalisé par **Imane Hibaoui** dans le cadre d’un stage académique 2025.

---

##  Licence

Ce projet est distribué sous licence **MIT** – utilisation libre avec attribution.

```

