#include <stdio.h>
#include <time.h>

void showData();

int main()
{
    showData();
    return 0;
}

void showData()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int ano = tm.tm_year + 1900;
    printf("Hoje é %02d/%02d/%04d às %02d:%02d:%02d\n",
           tm.tm_mday, tm.tm_mon, ano, tm.tm_hour, tm.tm_min, tm.tm_sec);
}