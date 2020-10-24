#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "header.h"

int main(int argc, char** argv) {
    float Ergebnis;
    int Auswahl;

    printf("Grundrechenarten\n\n");
    printf("(1) Addition\n(2) Subtraktion\n(3) Multiplikation\n(4) Division\n\n");
    printf("Waehlen Sie aus: \n");
    scanf("%d", &Auswahl);
    printf("_______________________________________________________________\n");
    festlegenGanzzahligerWerte();

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

    printf("Ergebnis = %f", Ergebnis);

    return 0;
}
    