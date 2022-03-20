#include <stdio.h>

int main()
{
    int i;
    char str[100]; // cadeia de caracteres

    // 2 bytes * 100 = 200 bytes

    printf("Entre com 2 valores (Seu nome e sua idade): ");
    scanf("%s %d", str, &i);

    printf("Olá %s é bom saber que você tem %d anos.\n", str, i);

    i += 10; // i = i + 10;

    printf("Sabia que daqui a 10 anos você terá %d anos.\n", i);

    return 0;
}
