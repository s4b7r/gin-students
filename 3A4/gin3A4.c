#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define AnzahlNoten 10

float Eingabe(int x);
float Addition(int y, float note, float Summe);
float Mittelwert(float Ergebnis);
int Ausgabe(float Addition, float Mittelwert);

void eingabe(float noten[AnzahlNoten]) {
    for (int i = 0; i < AnzahlNoten; i++) {
        noten[i] = Eingabe(i);
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

float Eingabe(int x) {
    float note;
    printf("%d. Fach:\t", x);
    scanf("%f", &note);
    return note;
}

float Addition(int y, float note, float Summe) {
    Summe = Summe + note;
    return Summe;
}

float Mittelwert(float summe) {
    float mittelwert;
    mittelwert = summe / AnzahlNoten;
    return mittelwert;
}

int Ausgabe(float Addition, float Mittelwert) {
    printf("\nDie Summer der eingegebenen Noten ist:\t\t%3.2f", Addition);
    printf("\nDer Durchschnitt der eingegebenen Noten ist:\t%3.2f", Mittelwert);
    return 0;
}

int main(int argc, char** argv) {
    float noten[AnzahlNoten];
    int i;
    float summe = 0, durchschnitt = 0;

    // Fehlervermeidung

    //Eingabe
    eingabe(noten);

    //Verarbeitung
    durchschnitt = verarbeitung(noten);

    //Ausgabe
    Ausgabe(summe, durchschnitt);

    return 0;
}