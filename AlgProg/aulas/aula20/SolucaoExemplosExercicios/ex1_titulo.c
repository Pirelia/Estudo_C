
/*
    Programa para colocar string na tela, cercado por "*"

    Prof. Sérgio Cechin
    27/03/2026

*/

#include <stdio.h>
#include <string.h>

void formatTitulo(char *s);
void formatRepete(int n, char c);

#define STRLEN  100

int main()
{
    char s[STRLEN+1];

    printf("Programa para colocar titulo formatado na tela -- vers. 1.00\n\n");

    printf("Forneca o string (sem espacos): "); scanf("%s", s);

    formatTitulo(s);

    return 0;

}

/**
    Coloca o titulo do string "s" na tela.
    O formato é:
    ******************
    * string de text *
    ******************
*/
void formatTitulo(char *s) {
    int n;

    n = strlen(s);      // utiliza função da biblioteca string.h

    formatRepete(n+4, '*'); printf("\n");
    printf("* %s *\n", s);
    formatRepete(n+4, '*');  printf("\n");

}

/**
    Coloca na tela o caractere "c" repetido "n" vezes
*/
void formatRepete(int n, char c) {
    while(n!=0) {
        printf("%c", c);
        n--;
    }
}

