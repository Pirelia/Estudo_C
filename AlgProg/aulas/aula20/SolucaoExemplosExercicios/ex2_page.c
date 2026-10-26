
/*
    Programa para colocar string na tela, cercado por "*"

    Prof. Sérgio Cechin
    27/03/2026

*/

#include <stdio.h>
#include <string.h>

#define MAXSTR  10
#define STRSIZE  100

void formatPagina(char[][STRSIZE+1]);
void formatRepete(int, char);


int main()
{
    char svect[MAXSTR][STRSIZE+1] = {
        "    Titulo centralizado?",
        "  Outro texto",
        "    Agora mais um, que eh o maior",
        ""
    };

    printf("Programa para formatar uma pagina na tela -- vers. 1.00\n\n");

    formatPagina(svect);

    return 0;

}

/**
    Coloca a página (vários strings) na tela
    O formato é:
    **********************
    * string de text     *
    *  asdasd            *
    * dd   d  ddd dddddd *
    **********************
*/
void formatPagina(char vetor[][STRSIZE+1]) {
    int i,n;
    int max;

    max=0;
    for(i=0; i<MAXSTR; i++) {
        if(vetor[i][0]==0)  // O último string está vazio
            break;

        n = strlen(vetor[i]);

        if(max<n)
            max=n;
    }

    formatRepete(max+4, '*'); printf("\n");
    for(i=0; i<MAXSTR; i++) {
        if(vetor[i][0]==0)  // O último string está vazio
            break;
        printf("* %s", vetor[i]);
        formatRepete(max-strlen(vetor[i]), ' ');
        printf(" *\n");
    }
    formatRepete(max+4, '*');  printf("\n");

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

