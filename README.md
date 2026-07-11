# 🖥️ Computing Architecture

### Assembly & Embedded Systems Programming Labs

![Assembly](https://img.shields.io/badge/Assembly-66.3%25-6E4C13?logo=assemblyscript&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-33.7%25-00599C?logo=cplusplus&logoColor=white)
![Domain](https://img.shields.io/badge/Domain-Computer%20Architecture-blueviolet)
![Status](https://img.shields.io/badge/status-Academic%20Coursework-orange)

> Εργασίες **Αρχιτεκτονικής Υπολογιστών**, υλοποιημένες σε **Assembly** και **C++**, με έμφαση στον προγραμματισμό χαμηλού επιπέδου, τον έλεγχο εξωτερικών συσκευών/περιφερειακών (I/O) και υλοποιήσεις αριθμητικών/λογικών μονάδων.

---

## 📑 Table of Contents

| Section |
|---|
| [Overview](#-overview) |
| [Projects Summary](#-projects-summary) |
| [Project Details](#-project-details) |
| [Technologies](#️-technologies) |
| [Skills Developed](#-skills-developed) |
| [Compilation & Execution](#️-compilation--execution) |
| [Repository Structure](#-repository-structure) |

---

## 🚀 Overview

| Field | Details |
|---|---|
| **Γλώσσες** | Assembly, C++ |
| **Μάθημα** | Αρχιτεκτονική Υπολογιστών (Computer Architecture) |
| **Εστίαση** | Προγραμματισμός χαμηλού επιπέδου, έλεγχος I/O, αριθμητικές/λογικές μονάδες (ALU), state machines |
| **Στόχος** | Πρακτική κατανόηση της σχέσης hardware-software μέσω άμεσου ελέγχου registers, μνήμης και περιφερειακών |

> 📌 Το "About" του repository αναφέρει και **VHDL**, αλλά το GitHub εντοπίζει μόνο Assembly/C++ αρχεία. Αν κάποιο project περιλαμβάνει πραγματικά VHDL (π.χ. FPGA simulation), πες μου ποιο ώστε να το προσθέσω σωστά στους πίνακες.

---

## 📊 Projects Summary

| # | Project | Τύπος | Περιγραφή |
|---|---|---|---|
| 1 | `Calculator Simpe` | Assembly | Υλοποίηση βασικής αριθμομηχανής (αριθμητικές πράξεις) σε Assembly |
| 2 | `Calculator advanced` | Assembly | Επεκταμένη αριθμομηχανή με περισσότερες λειτουργίες/πράξεις |
| 3 | `Planet blinking` | Assembly/C++ | Έλεγχος αναβοσβήματος (blinking pattern) — πιθανότατα simulation LEDs/output devices |
| 4 | `Sensro` (Sensor) | Assembly/C++ | Ανάγνωση και επεξεργασία δεδομένων από αισθητήρα (sensor input handling) |
| 5 | `Traffic lights` | Assembly/C++ | Προσομοίωση συστήματος φωτεινής σηματοδότησης (state machine) |

> ✏️ Οι περιγραφές παραπάνω είναι εύλογες εκτιμήσεις βάσει των τίτλων. Αν μου πεις με 1-2 προτάσεις τι κάνει ακριβώς κάθε project (π.χ. ποιο ISA/simulator χρησιμοποιείς — MIPS, 8086, PIC, Arduino-style, κ.λπ.), κάνω τους πίνακες 100% ακριβείς.

---

## 📘 Project Details

### 1️⃣ Calculator Simple

| Πεδίο | Λεπτομέρεια |
|---|---|
| **Στόχος** | Υλοποίηση απλής αριθμομηχανής σε επίπεδο Assembly |
| **Λειτουργίες** | Βασικές αριθμητικές πράξεις (πρόσθεση, αφαίρεση κ.λπ.) |
| **Έμφαση** | Χειρισμός registers, βασικές εντολές ALU |

### 2️⃣ Calculator Advanced

| Πεδίο | Λεπτομέρεια |
|---|---|
| **Στόχος** | Επέκταση της απλής αριθμομηχανής με περισσότερες/πιο σύνθετες λειτουργίες |
| **Έμφαση** | Πολυπλοκότερος έλεγχος ροής (conditionals/loops σε Assembly), πιθανή διαχείριση overflow/errors |

### 3️⃣ Planet Blinking

| Πεδίο | Λεπτομέρεια |
|---|---|
| **Στόχος** | Προγραμματισμός blinking pattern (πιθανή αναλογία με "planets" ως οπτικά στοιχεία εξόδου) |
| **Έμφαση** | Έλεγχος χρονισμού (timing/delay loops), digital output control |

### 4️⃣ Sensor

| Πεδίο | Λεπτομέρεια |
|---|---|
| **Στόχος** | Ανάγνωση τιμών από αισθητήρα και επεξεργασία δεδομένων εισόδου |
| **Έμφαση** | Digital/analog input handling, πιθανή μετατροπή/φιλτράρισμα δεδομένων |

### 5️⃣ Traffic Lights

| Πεδίο | Λεπτομέρεια |
|---|---|
| **Στόχος** | Προσομοίωση λειτουργίας φωτεινού σηματοδότη (κόκκινο-κίτρινο-πράσινο) |
| **Έμφαση** | Υλοποίηση πεπερασμένου αυτομάτου (finite state machine) με χρονισμό μεταξύ καταστάσεων |

---

## 🛠️ Technologies

| Κατηγορία | Στοιχεία |
|---|---|
| Γλώσσες | Assembly, C++ |
| Concepts | Registers, Memory Addressing, I/O Control, State Machines |
| Πιθανό Περιβάλλον | Simulator/Emulator Αρχιτεκτονικής (π.χ. MARS/MIPS, 8086 emulator, ή microcontroller-based simulator) |

---

## 🎯 Skills Developed

| # | Δεξιότητα |
|---|---|
| 1 | Προγραμματισμός χαμηλού επιπέδου (Assembly) |
| 2 | Κατανόηση αρχιτεκτονικής επεξεργαστή (registers, ALU, control flow) |
| 3 | Έλεγχος περιφερειακών συσκευών (I/O handling) |
| 4 | Υλοποίηση πεπερασμένων αυτομάτων (finite state machines) |
| 5 | Debugging σε επίπεδο Assembly |
| 6 | Ενσωμάτωση C++ με λογική χαμηλού επιπέδου |

---

## ⚙️ Compilation & Execution

```bash
git clone https://github.com/Dimitriskatsanos42/Computing-Architecture.git
cd Computing-Architecture
```

| Project | Οδηγία |
|---|---|
| Calculator Simpe | Άνοιξε στο αντίστοιχο IDE/simulator της αρχιτεκτονικής που χρησιμοποιήθηκε |
| Calculator advanced | ό.π. |
| Planet blinking | ό.π. |
| Sensro | ό.π. |
| Traffic lights | ό.π. |

> 📌 Πες μου ποιο IDE/simulator χρησιμοποίησες (π.χ. MARS, Keil, Proteus, MPLAB) ώστε να συμπληρώσω ακριβείς οδηγίες εκτέλεσης για κάθε project.

---

## 📂 Repository Structure

```
Computing-Architecture/
├── Calculator Simpe/          # Απλή αριθμομηχανή σε Assembly
├── Calculator advanced/       # Προηγμένη αριθμομηχανή
├── Planet blinking/           # Blinking pattern control
├── Sensro/                    # Sensor input handling
├── Traffic lights/            # Traffic light state machine
└── README.md
```

---

## 👤 Author

**Δημήτρης Κατσάνος** — [@Dimitriskatsanos42](https://github.com/Dimitriskatsanos42)
University coursework — Computer Architecture.
