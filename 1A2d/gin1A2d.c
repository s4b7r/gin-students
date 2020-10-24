#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv) {
    float Zahl1;
    float Zahl2;
    float Ergebnis;
    int Auswahl;

    printf("Grundrechenarten\n\n");
    printf("(1) Addition\n(2) Subtraktion\n(3) Multiplikation\n(4) Division\n\n");
    printf("Waehlen Sie aus: \n");
    scanf("%d", &Auswahl);
    printf("_______________________________________________________________\n");

    if (Auswahl == 1) { //Addition
        printf("Legen Sie Ihre ganzzahligen Werte fest:\n\n");
        printf("a = ");
        scanf("%f", &Zahl1);

        printf("b = ");
        scanf("%f", &Zahl2);

        Ergebnis = Zahl1 + Zahl2;
        printf("Ergebnis = %f", Ergebnis);
    }
    else if (Auswahl == 2) { //Subtraktion
        printf("Legen Sie Ihre ganzzahligen Werte fest:\n\n");
        printf("a = ");
        scanf("%f", &Zahl1);

        printf("b = ");
        scanf("%f", &Zahl2);

        Ergebnis = Zahl1 - Zahl2;
        printf("Ergebnis = %f", Ergebnis);
    }
    else if (Auswahl == 3) { //Multiplikation
        printf("Legen Sie Ihre ganzzahligen Werte fest:\n\n");
        printf("a = ");
        scanf("%f", &Zahl1);

        printf("b = ");
        scanf("%f", &Zahl2);

        Ergebnis = Zahl1 * Zahl2;
        printf("Ergebnis = %f", Ergebnis);
    }
    else if (Auswahl == 4) { //Division
        printf("Legen Sie Ihre ganzzahligen Werte fest:\n\n");
        printf("a = ");
        scanf("%f", &Zahl1);

        printf("b = ");
        scanf("%f", &Zahl2);

        Ergebnis = Zahl1 / Zahl2;
        printf("Ergebnis = %f", Ergebnis);
    }
    else {
        printf("Waehlen Sie bitte eine Zahl zwischen 1 und 4.\n");
    }
    return 0;
}
