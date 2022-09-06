#include <stdio.h>

void desvio1();
void desvio2();

int main()
{
    desvio1();
    desvio2();
    return 0;
}

// Comando IF
void desvio1()
{
    short idade;
    puts("Entre com sua idade:");
    scanf("%hd", &idade);

    if (idade > 18) // > < >= <= == != - "&&" E lógico "||" OU lógico
    {
        puts("Você chegou na vida adulta!");
    }
    else
    {
        puts("Aproveite a sua infância!");
    }

    switch (idade)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
        puts("Aproveite a sua infância!");
        break;
    default:
        puts("Você chegou na vida adulta!");
    }
}

// Comando SWITCH
void desvio2()
{
    short codigo;
    puts("Informe o código:");
    scanf("%hd", &codigo);
    if (codigo == 1 || codigo == 2)
    {
        puts("Como vai?");
    }
    else if (codigo == 3)
    {
        puts("Olá Mundo!");
    }
    else if (codigo == 4)
    {
        puts("Estou bem");
    }
    else
    {
        puts("Até logo!");
    }

    switch (codigo)
    {
    case 1:
    case 2:
        puts("Como vai?");
        break;
    case 3:
        puts("Olá Mundo!");
        break;
    case 4:
        puts("Estou bem");
        break;
    default:
        puts("Até logo!");
    }
}
