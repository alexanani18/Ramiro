#include <iostream>   // Biblioteca pentru intrare/iesire standard
#include <cstdlib>    // Biblioteca pentru functiile malloc si free
#include <cstring>    // Biblioteca pentru operatii pe siruri de caractere

using namespace std; // Evita necesitatea utilizarii std:: inaintea fiecarei functii

// Structura pentru reprezentarea unui student
struct Student {
    char nume[50];  // Numele studentului
    int nota;      // Nota studentului
};

// Functie fara parametri care afiseaza un mesaj
void mesaj() {
    cout << "Aceasta este o functie fara parametri." << endl;
}

// Functie care calculeaza suma a doua numere intregi si returneaza rezultatul
int suma(int a, int b) {
    return a + b;
}

int main() {
    // Declararea si initializarea variabilelor
    int varInt = 0;       // Variabila intreaga initializata cu 0
    float varFloat = 0.0; // Variabila float initializata cu 0.0
    char varChar = 'A';   // Variabila caracter initializata cu 'A'

    // Preluarea datelor de la utilizator si afisarea lor
    cout << "Introduceti un numar intreg: ";
    cin >> varInt; // Citeste un numar intreg de la tastatura
    cout << "Ati introdus: " << varInt << endl; // Afiseaza numarul introdus

    // Utilizarea unei instructiuni if-else pentru a verifica valoarea lui varInt
    if (varInt > 10) {
        cout << "Numarul este mai mare decat 10." << endl;
    } else {
        cout << "Numarul este mai mic sau egal cu 10." << endl;
    }

    // Bucla for pentru a afisa mesajul de mai multe ori
    for (int i = 0; i < 5; i++) {
        cout << "Aceasta este iteratia " << i+1 << endl;
    }

    // Apelarea functiilor definite anterior
    mesaj(); // Apelarea functiei fara parametri
    cout << "Suma celor doua numere este: " << suma(5, 10) << endl; // Apelarea functiei suma

    // Definirea unui tablou si afisarea valorilor din acesta
    int tablou[5] = {1, 2, 3, 4, 5}; // Tablou de numere intregi
    for (int i = 0; i < 5; i++) {
        cout << "Valoarea la indexul " << i << " este: " << tablou[i] << endl;
    }

    // Definirea si utilizarea unei structuri
    Student student = {"Ion Popescu", 10}; // Instantierea unui student
    cout << "Student: " << student.nume << ", Nota: " << student.nota << endl; // Afisarea detaliilor studentului

    // Utilizarea unui pointer pentru a memora adresa unei variabile
    int *ptr = &varInt; // Pointer care memoreaza adresa lui varInt
    *ptr = 20; // Modificarea valorii variabilei prin pointer
    cout << "Noua valoare a variabilei este: " << varInt << endl; // Afisarea noii valori a lui varInt

    // Alocarea dinamica a memoriei
    int *dinamic = (int *)malloc(sizeof(int) * 5); // Alocare dinamica pentru un tablou de 5 intregi
    if (dinamic == NULL) {
        cout << "Alocarea memoriei a esuat." << endl;
        return 1; // Intoarce 1 in caz de eroare
    }

    // Eliberarea memoriei alocate dinamic
    free(dinamic); // Eliberarea memoriei alocate

    return 0; // Terminarea programului cu succes
}
