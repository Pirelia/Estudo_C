
/*
    Programa para realizar operações com números complexos

    Prof. Sérgio Cechin
    27/03/2026

*/

#include <stdio.h>
#include "compex.h"

int main()
{
    double n1[2];  // [0]: real, [1]: imaginaria
    double n2[2];  // [0]: real, [1]: imaginaria
    double res[2];

    printf("Programa para operacoes de numeros complexos -- vers. 1.00\n\n");

    printf("Forneça a parte real e a imaginaria do primeiro numero: "); scanf("%lf %lf", &n1[0], &n1[1]);
    printf("Forneça a parte real e a imaginaria do segundo numero:  "); scanf("%lf %lf", &n2[0], &n2[1]);

    somaCompex(res, n1, n2);
    printf("Soma: %lf + i %lf\n", res[0], res[1]);

    toPolar(res);
    printf("      %lf arg(%lf)\n", res[0], res[1]);

    difCompex(res, n1, n2);
    printf("Dif: %lf + i %lf\n", res[0], res[1]);

    toPolar(res);
    printf("     %lf arg(%lf)\n", res[0], res[1]);

    return 0;

}


