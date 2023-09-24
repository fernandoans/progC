#include <stdio.h>
#include <stdlib.h>

void repeticao1();
void repeticao2();
void repeticao3();

int main() {
    repeticao1();
    repeticao2();
    repeticao3();
    return 0;
}

// Laço de Repetição Indeterminada
void repeticao1() {
    puts("Resultado do WHILE");
    int i = 0;
    while (i < 3) {
        printf("%d", i);
        i++;
    }
    puts("");
}

void repeticao2() {
    puts("Resultado do DO-WHILE");
    int i = 0;
    do {
        printf("%d", i);
        i++;
    } while (i < 3);
    puts("");
}

// Laço de Repetição Determinada
void repeticao3() {
    puts("Resultado do FOR");
    for (int i = 0; i < 3; i++) {
        printf("%d", i);
    }
    puts("");
}