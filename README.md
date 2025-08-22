
Automatic irrigation system using Arduino Uno, soil moisture sensor, relay module and machine learning integration.


# 🌱 Irrigation-Automatique-Arduino

Un projet d’irrigation automatique basé sur **Arduino Uno** et enrichi par des techniques de **Machine Learning** pour optimiser l’utilisation de l’eau.  
Ce système lit en temps réel les données de capteurs (humidité du sol, température, etc.) et déclenche une pompe uniquement lorsque c’est nécessaire.  



## 🚀 Fonctionnalités
- 💧 **Arrosage intelligent** basé sur l’humidité du sol.  
- ⏰ **Programmation horaire** avec le module RTC DS3231.  
- ⚡ **Faible consommation d’énergie** (200–220 mA).  
- 📊 **Analyse par Machine Learning** (Arbre de décision, Random Forest, SVM, etc.) pour prédire le besoin en arrosage.  
- 🌐 Possibilité d’évolution vers un système connecté (Wi-Fi).  





## ⚙️ Matériel utilisé
- **Arduino Uno** (ATmega328P)  
- **Capteur d’humidité du sol**  
- **Module RTC DS3231**  
- **Pompe submersible + relais 5V**  
- **Alimentation externe / USB**  



## 🔬 Résultats
- **Précision du modèle ML :**
  - 🌳 Arbre de Décision : 99,96 %  
  - 🌲 Random Forest : 99,51 %  
  - 📈 KNN : 90,36 %  
  - 📉 SVM : 85,28 %  

- **Impact :**
  - Réduction significative du gaspillage d’eau  
  - Automatisation complète de l’arrosage  




## 📖 Utilisation
1. Cloner le repo :
   ```bash
   git clone https://github.com/imanehib/Irrigation-Automatique-Arduino.git
````

2. Ouvrir le code avec **Arduino IDE**.
3. Charger le programme selon la configuration souhaitée (capteur ou minuterie).
4. (Optionnel) Tester le modèle ML dans `irrigation_auto_ML_eval.ipynb` via **Google Colab**.




## 👩‍💻 Auteur
Projet réalisé par **Imane Hibaoui** dans le cadre d’un stage académique (2025).  

---

## 📜 Licence
Ce projet est distribué sous licence **MIT** – utilisation libre avec attribution. 


