// Aplicatie pentru declararea si utilizarea variabilelor de orice tip
#include <iostream>
using namespace std;

int main() {
    // Declararea variabilelor
    int varInt = 0;       // Variabila intreaga initializata cu 0
    float varFloat = 0.0; // Variabila float initializata cu 0.0
    char varChar = 'A';   // Variabila caracter initializata cu 'A'

    // Afisarea valorilor variabilelor
    cout << "Valoarea lui varInt: " << varInt << endl;
    cout << "Valoarea lui varFloat: " << varFloat << endl;
    cout << "Valoarea lui varChar: " << varChar << endl;

    return 0;
}

// Aplicatie pentru preluarea si afisarea datelor de la tastatura
#include <iostream>
using namespace std;

int main() {
    int varInt;
    cout << "Introduceti un numar intreg: ";
    cin >> varInt; // Citeste un numar intreg de la tastatura
    cout << "Ati introdus: " << varInt << endl; // Afiseaza numarul introdus

    return 0;
}

// Aplicatie pentru utilizarea unei instructiuni if-else
#include <iostream>
using namespace std;

int main() {
    int varInt;
    cout << "Introduceti un numar intreg: ";
    cin >> varInt; // Citeste un numar intreg de la tastatura

    // Verificarea valorii lui varInt
    if (varInt > 10) {
        cout << "Numarul este mai mare decat 10." << endl;
    } else {
        cout << "Numarul este mai mic sau egal cu 10." << endl;
    }

    return 0;
}

// Aplicatie pentru utilizarea unei bucle for
#include <iostream>
using namespace std;

int main() {
    // Bucla for pentru a afisa mesajul de mai multe ori
    for (int i = 0; i < 5; i++) {
        cout << "Aceasta este iteratia " << i+1 << endl;
    }

    return 0;
}

// Aplicatie pentru definirea si apelarea functiilor
#include <iostream>
using namespace std;

// Functie fara parametri care afiseaza un mesaj
void mesaj() {
    cout << "Aceasta este o functie fara parametri." << endl;
}

// Functie care calculeaza suma a doua numere intregi si returneaza rezultatul
int suma(int a, int b) {
    return a + b;
}

int main() {
    mesaj(); // Apelarea functiei fara parametri
    cout << "Suma celor doua numere este: " << suma(5, 10) << endl; // Apelarea functiei suma

    return 0;
}

// Aplicatie pentru definirea si utilizarea unui tablou
#include <iostream>
using namespace std;

int main() {
    // Definirea unui tablou si afisarea valorilor din acesta
    int tablou[5] = {1, 2, 3, 4, 5}; // Tablou de numere intregi
    for (int i = 0; i < 5; i++) {
        cout << "Valoarea la indexul " << i << " este: " << tablou[i] << endl;
    }

    return 0;
}

// Aplicatie pentru definirea si utilizarea unei structuri
#include <iostream>
#include <cstring>
using namespace std;

// Structura pentru reprezentarea unui student
struct Student {
    char nume[50];  // Numele studentului
    int nota;      // Nota studentului
};

int main() {
    // Definirea si utilizarea unei structuri
    Student student;
    strcpy(student.nume, "Ion Popescu"); // Setarea numelui studentului
    student.nota = 10; // Setarea notei studentului
    cout << "Student: " << student.nume << ", Nota: " << student.nota << endl; // Afisarea detaliilor studentului

    return 0;
}

// Aplicatie pentru utilizarea unui pointer
#include <iostream>
using namespace std;

int main() {
    int varInt = 10;
    int *ptr = &varInt; // Pointer care memoreaza adresa lui varInt
    cout << "Adresa lui varInt: " << ptr << endl; // Afisarea adresei lui varInt
    cout << "Valoarea la care pointeaza ptr: " << *ptr << endl; // Afisarea valorii la care pointeaza ptr

    return 0;
}

// Aplicatie pentru modificarea valorii prin pointer
#include <iostream>
using namespace std;

int main() {
    int varInt = 10;
    int *ptr = &varInt; // Pointer care memoreaza adresa lui varInt
    *ptr = 20; // Modificarea valorii variabilei prin pointer
    cout << "Noua valoare a variabilei este: " << varInt << endl; // Afisarea noii valori a lui varInt

    return 0;
}

// Aplicatie pentru alocarea si eliberarea memoriei
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Alocarea dinamica a memoriei
    int *dinamic = (int *)malloc(sizeof(int) * 5); // Alocare dinamica pentru un tablou de 5 intregi
    if (dinamic == NULL) {
        cout << "Alocarea memoriei a esuat." << endl;
        return 1; // Intoarce 1 in caz de eroare
    }

    // Eliberarea memoriei alocate dinamic
    free(dinamic); // Eliberarea memoriei alocate

    return 0;
}
