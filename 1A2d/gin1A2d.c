#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "header.h"

// Bei globalen Varibalen zieht sich mir alles zusammen! :-/
int Auswahl;
float Ergebnis;

void festlegenOperation() {
    printf("Grundrechenarten\n\n");
    printf("(1) Addition\n(2) Subtraktion\n(3) Multiplikation\n(4) Division\n\n");
    printf("Waehlen Sie aus: \n");
    scanf("%d", &Auswahl);
    printf("_______________________________________________________________\n");
}

void eingabe() {
    festlegenOperation();
    festlegenZweierGanzzahligerWerte();
}

void verarbeitung() {
    if (Auswahl == 1) { //Addition
        Ergebnis = Zahl1 + Zahl2;
    }
    else if (Auswahl == 2) { //Subtraktion
        Ergebnis = Zahl1 - Zahl2;
    }
    else if (Auswahl == 3) { //Multiplikation
        Ergebnis = Zahl1 * Zahl2;
    }
    else if (Auswahl == 4) { //Division
        Ergebnis = Zahl1 / Zahl2;
    }
    else {
        printf("Waehlen Sie bitte eine Zahl zwischen 1 und 4.\n");
    }
}

void ausgabe() {
    printf("Ergebnis = %f", Ergebnis);
}

int main(int argc, char** argv) {
    eingabe();
    verarbeitung();
    ausgabe();
    return 0;
}
    