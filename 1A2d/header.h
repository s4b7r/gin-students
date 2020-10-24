#pragma once
#include <stdio.h>

// Hier gibts ein paar Sachen, die schlechter Stil sind.
// Bitte nur als Demonstration verstehen, dass Codeteile prinzipiell
// in eingene Header ausgelagert werden können!

// Bei globalen Varibalen zieht sich mir alles zusammen! :-/
float Zahl1, Zahl2;

void festlegenZweierGanzzahligerWerte() {
    printf("Legen Sie Ihre ganzzahligen Werte fest:\n\n");
    printf("a = ");
    scanf("%f", &Zahl1);
    printf("b = ");
    scanf("%f", &Zahl2);
}
