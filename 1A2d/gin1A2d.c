#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float Zahl1, Zahl2;

void festlegenGanzzahligerWerte() {
    printf("Legen Sie Ihre ganzzahligen Werte fest:\n\n");
    printf("a = ");
    scanf("%f", &Zahl1);
    printf("b = ");
    scanf("%f", &Zahl2);
}

int main(int argc, char** argv) {
    float Ergebnis;
    int Auswahl;

    printf("Grundrechenarten\n\n");
    printf("(1) Addition\n(2) Subtraktion\n(3) Multiplikation\n(4) Division\n\n");
    printf("Waehlen Sie aus: \n");
    scanf("%d", &Auswahl);
    printf("_______________________________________________________________\n");

    if (Auswahl == 1) { //Addition
        festlegenGanzzahligerWerte();
        Ergebnis = Zahl1 + Zahl2;
        printf("Ergebnis = %f", Ergebnis);
    }
    else if (Auswahl == 2) { //Subtraktion
        festlegenGanzzahligerWerte();
        Ergebnis = Zahl1 - Zahl2;
        printf("Ergebnis = %f", Ergebnis);
    }
    else if (Auswahl == 3) { //Multiplikation
        festlegenGanzzahligerWerte(); 
        Ergebnis = Zahl1 * Zahl2;
        printf("Ergebnis = %f", Ergebnis);
    }
    else if (Auswahl == 4) { //Division
        festlegenGanzzahligerWerte();
        Ergebnis = Zahl1 / Zahl2;
        printf("Ergebnis = %f", Ergebnis);
    }
    else {
        printf("Waehlen Sie bitte eine Zahl zwischen 1 und 4.\n");
    }
    return 0;
}
