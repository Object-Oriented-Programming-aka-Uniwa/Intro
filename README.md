![Flag](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a5/Flag_of_the_United_Kingdom_%281-2%29.svg/255px-Flag_of_the_United_Kingdom_%281-2%29.svg.png)

# From C to C++

For the requested Assignment, click the link:  
[Assignment](Assignment/)

For the Source Code, click the link:  
[Code](Code/)

## Overview

This repository contains a C++ program that demonstrates the use of structures, dynamic memory allocation, and pointers in managing information about Avengers characters. The program allows users to read, process, and display various statistics related to these characters. It also performs operations such as calculating averages and identifying the strongest Avenger based on different criteria.

---

## Course Information
- **Course**: [Objected Oriented Programming](https://ice.uniwa.gr/education/undergraduate/courses/object-oriented-programming/)
- **Semester**: 2
- **Program**: [UNIWA](https://www.uniwa.gr/)
- **Department**: [Informatics and Computer Engineering](https://ice.uniwa.gr/)
- **Instructor**: [Georgios Meletiou](https://ice.uniwa.gr/emd_person/17562/)

## Student Information
- **Name**: Athanasiou Vasileios Evangelos
- **Student ID**: ice19390005
- **Status**: Undergraduate

---

## Key Features

### 1. **Dynamic Memory Allocation**
- The program dynamically allocates memory for an array of `Avengers` structures to store character attributes, enabling efficient memory usage based on user input.

### 2. **Struct Usage**
- Utilizes a `struct` to define the properties of Avengers, including hero name, intelligence, leadership, outfit, powers, and damage.

### 3. **Functionality**
- Allows for various functionalities such as:
  - Reading and storing attributes of Avengers.
  - Calculating maximum and average statistics.
  - Printing the details of the Avengers.
  - Identifying the strongest Avenger.
  - Working with a 2D matrix of random integers to demonstrate additional functionalities.

### 4. **Memory Management**
- Implements functions to check and free dynamically allocated memory, ensuring no memory leaks occur during execution.

---

## Functions in the Program

### Key Functions:
- **`Change_Const()`**: Demonstrates pointer manipulation with constants.
- **`Read_Avengers()`**: Reads data into an array of Avengers from the program.
- **`Max_Stats(const Avengers *, string &, const int)`**: Returns the maximum statistics and the corresponding Avenger.
- **`Avg_Stats(const Avengers *, const int)`**: Computes the average statistics of an Avenger.
- **`Print_Avg_Stats(...)`**: Prints average statistics for given inputs.
- **`Search_Lowest_Even(...)`**: Finds the lowest even number in a 2D matrix.
- **`Append_Characters(...)`**: Demonstrates default parameter usage by appending characters.

### Example Use Cases:
- Managing and analyzing superhero statistics.
- Performing operations based on user-defined input for character attributes.

---

## Requirements

- **C++ Compiler**: G++ or any standard C++ compiler.
- **Operating System**: Linux/Windows/MacOS.
- **Development Environment**: Command Line or IDE.

---


## Installation and Usage

### 1. Clone the Repository
```bash
git clone https://github.com/Object-Oriented-Programming-aka-Uniwa/Intro.git
cd Intro
```

### 2. Compile
```bash
g++ -o Intro Intro.cpp
```

### 3. Run
```bash
./Intro
```

![Flag](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5c/Flag_of_Greece.svg/255px-Flag_of_Greece.svg.png)

# Από C σε C++

Για την ζητούμενη εργασία, κάντε κλικ στον σύνδεσμο:  
[Εργασία](Assignment/)

Για τον Πηγαίο Κώδικα, κάντε κλικ στον σύνδεσμο:  
[Κώδικας](Code/)

## Επισκόπηση

Αυτό το αποθετήριο περιέχει ένα πρόγραμμα C++ που επιδεικνύει τη χρήση δομών, δυναμικής δέσμευσης μνήμης και δεικτών στη διαχείριση πληροφοριών σχετικά με τους χαρακτήρες Avengers. Το πρόγραμμα επιτρέπει στους χρήστες να διαβάζουν, να επεξεργάζονται και να εμφανίζουν διάφορες στατιστικές που σχετίζονται με αυτούς τους χαρακτήρες. Επίσης, εκτελεί λειτουργίες όπως η υπολογιστική μέση και η αναγνώριση του πιο ισχυρού Avengers με βάση διάφορα κριτήρια.

---

## Πληροφορίες Μαθήματος
- **Μάθημα**: Αντικειμενοστραφής Προγραμματισμός
- **Εξάμηνο**: 2
- **Πρόγραμμα**: [ΠΑΔΑ](https://www.uniwa.gr/)
- **Τμήμα**: [Μηχανικών Πληροφορικής και Υπολογιστών Υπολογιστών](https://ice.uniwa.gr/)
- **Καθηγητής**: [Γεώργιος Μελετίου](https://ice.uniwa.gr/emd_person/17562/)

## Πληροφορίες Φοιτητή
- **Όνομα**: Αθανάσιου Βασίλειος Ευάγγελος
- **Αριθμός Φοιτητή**: ice19390005
- **Κατάσταση**: Προπτυχιακός

---

## Κύρια Χαρακτηριστικά

### 1. **Δυναμική Δέσμευση Μνήμης**
- Το πρόγραμμα δεσμεύει δυναμικά μνήμη για έναν πίνακα δομών `Avengers` για να αποθηκεύσει τα χαρακτηριστικά των χαρακτήρων, επιτρέποντας την αποδοτική χρήση μνήμης με βάση την είσοδο του χρήστη.

### 2. **Χρήση Δομών**
- Χρησιμοποιεί μια `struct` για να ορίσει τις ιδιότητες των Avengers, συμπεριλαμβανομένου του ονόματος του ήρωα, της ευφυΐας, της ηγεσίας, της ενδυμασίας, των δυνάμεων και της ζημιάς.

### 3. **Λειτουργικότητα**
- Επιτρέπει διάφορες λειτουργίες όπως:
  - Ανάγνωση και αποθήκευση χαρακτηριστικών των Avengers.
  - Υπολογισμός μέγιστων και μέσων στατιστικών.
  - Εκτύπωση των λεπτομερειών των Avengers.
  - Αναγνώριση του πιο ισχυρού Avengers.
  - Εργασία με μια 2D μήτρα τυχαίων ακεραίων για την επίδειξη επιπλέον λειτουργιών.

### 4. **Διαχείριση Μνήμης**
- Υλοποιεί συναρτήσεις για έλεγχο και απελευθέρωση της δυναμικά δεσμευμένης μνήμης, διασφαλίζοντας ότι δεν θα προκύψουν διαρροές μνήμης κατά την εκτέλεση.

---

## Συναρτήσεις στο Πρόγραμμα

### Κύριες Συναρτήσεις:
- **`Change_Const()`**: Επιδεικνύει τη χειρισμό δεικτών με σταθερές.
- **`Read_Avengers()`**: Διαβάζει δεδομένα σε έναν πίνακα Avengers από το πρόγραμμα.
- **`Max_Stats(const Avengers *, string &, const int)`**: Επιστρέφει τα μέγιστα στατιστικά και τον αντίστοιχο Avengers.
- **`Avg_Stats(const Avengers *, const int)`**: Υπολογίζει τα μέση στατιστικά ενός Avengers.
- **`Print_Avg_Stats(...)`**: Εκτυπώνει μέσες στατιστικές για δεδομένες εισόδους.
- **`Search_Lowest_Even(...)`**: Εντοπίζει τον χαμηλότερο ζυγό αριθμό σε μια 2D μήτρα.
- **`Append_Characters(...)`**: Επιδεικνύει τη χρήση προεπιλεγμένων παραμέτρων προσθέτοντας χαρακτήρες.

### Παραδείγματα Χρήσης:
- Διαχείριση και ανάλυση στατιστικών υπερηρώων.
- Εκτέλεση λειτουργιών με βάση τις εισόδους του χρήστη για τα χαρακτηριστικά των χαρακτήρων.

---

## Απαιτήσεις

- **Μεταγλωττιστής C++**: G++ ή οποιοσδήποτε τυπικός μεταγλωττιστής C++.
- **Λειτουργικό Σύστημα**: Linux/Windows/MacOS.
- **Περιβάλλον Ανάπτυξης**: Γραμμή εντολών ή IDE.

---

## Εγκατάσταση και Χρήση

### 1. Κλωνοποίηση του Αποθετηρίου
```bash
git clone https://github.com/Object-Oriented-Programming-aka-Uniwa/Intro.git
cd Intro
```

### 2. Μεταγλώττιση
```bash
g++ -o Intro Intro.cpp
```

### 3. Εκτέλεση
```bash
./Intro
```


