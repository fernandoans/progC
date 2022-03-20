/*
short - 2 bytes - 16 bits
int   - 4 bytes - 32 bits
long  - 8 bytes - 64 bits
*/
#include <stdio.h>

int main()
{
    short idade;
    printf("Entre com a sua idade: ");
    scanf("%hd", &idade);
    idade += 120;
    printf("Possui %hd anos\n", idade);
    return 0;
}
