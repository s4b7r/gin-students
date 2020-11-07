#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define AnzahlNoten 10

float Eingabe(float fach1, int x);
float Addition(int y, float fach2, float Summe);
float Mittelwert(float Ergebnis);
int Ausgabe(float Addition, float Mittelwert);

void eingabe(float noten[AnzahlNoten]) {
    for (int i = 0; i < AnzahlNoten; i++) {
        noten[i] = Eingabe(noten[i], i);
    }
}

float verarbeitung(float noten[AnzahlNoten]) {
    float summe = 0, durchschnitt;
    for (int i = 0; i < AnzahlNoten; i++) {
        summe = Addition(i, noten[i], summe);
    }
    durchschnitt = Mittelwert(summe);

    return durchschnitt;
}

float Eingabe(float fach1, int x) {
    printf("%d. Fach:\t", x);
    scanf("%f", &fach1);
    return fach1;
}

float Addition(int y, float fach2, float Summe) {
    Summe = Summe + fach2;
    return Summe;
}

float Mittelwert(float Ergebnis) {
    float mittelwert;
    mittelwert = Ergebnis / AnzahlNoten;
    return mittelwert;
}

int Ausgabe(float Addition, float Mittelwert) {
    printf("\nDie Summer der eingegebenen Noten ist:\t\t%3.2f", Addition);
    printf("\nDer Durchschnitt der eingegebenen Noten ist:\t%3.2f", Mittelwert);
    return 0;
}

int main(int argc, char** argv) {
    float fach[AnzahlNoten];
    int i;
    float summe = 0, durchschnitt = 0;

    // Namen in Funktionen
    // Fehlervermeidung

    //Eingabe
    eingabe(fach);

    //Verarbeitung
    durchschnitt = verarbeitung(fach);

    //Ausgabe
    Ausgabe(summe, durchschnitt);

    return 0;
}