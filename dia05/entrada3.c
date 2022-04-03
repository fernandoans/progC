// Entrar com 3 valores
// Saida 3 valores multiplicados e divido por 100

#include <stdio.h>

void executar();
void entradaDeValor();
float calcular();
void saidaDeValor(float resultado);

int val1, val2;
float val3;

int main()
{
    executar();
    return 0;
}

void executar()
{
    entradaDeValor();
    saidaDeValor(calcular());
}

void entradaDeValor()
{
    puts("Entre com os valores: ");
    scanf("%d %d %f", &val1, &val2, &val3);
}

float calcular()
{
    return (val1 * val2 * val3) / 100;
}

void saidaDeValor(float resultado)
{
    printf("O resultado é: %f\n", resultado);
}