#pragma once
#include <stdio.h>

float Zahl1, Zahl2;

void festlegenGanzzahligerWerte() {
    printf("Legen Sie Ihre ganzzahligen Werte fest:\n\n");
    printf("a = ");
    scanf("%f", &Zahl1);
    printf("b = ");
    scanf("%f", &Zahl2);
}
