/*
Este programa seleciona um número aleatório entre 0 a 100 e solicita
que o usuário tente advinhar este valor.

Em cada tentativa, será informado se o usuário está acima ou abaixo
deste valor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selecionarValor();
void obterInformacao();
int testarResultado();

short selecionado;
short valorDigitado;

int main()
{
    selecionarValor();
    return 0;
}

void selecionarValor()
{
    srand(time(NULL));
    selecionado = rand() % 101; // 0 a 100
    do
    {
        obterInformacao();
    } while (testarResultado());
    puts("Parabéns! Você acertou o valor!");
}

void obterInformacao()
{
    puts("Informe um valor entre 0 e 100:");
    scanf("%hd", &valorDigitado);
}

int testarResultado()
{
    if (selecionado > valorDigitado)
    {
        puts("Valor muito baixo, tente novamente!");
    }
    else if (selecionado < valorDigitado)
    {
        puts("Valor muito alto, tente novamente!");
    }
    return selecionado != valorDigitado;
}
