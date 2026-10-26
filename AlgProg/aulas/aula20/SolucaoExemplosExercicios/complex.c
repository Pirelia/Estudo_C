
#include "math.h"

/**
    Soma dois numeros complexos
    Os numeros complexos são um vetor de 2 posições do tipo double
    res = n1 + n2
*/
void somaComplex(double* res, double* n1, double* n2) {
    res[0] = n1[0] + n2[0];
    res[1] = n1[1] + n2[1];
}

/**
    Diminui um número complexo do outro
    Os numeros complexos são um vetor de 2 posições do tipo double
    res = n1 - n2
*/
void difComplex(double* res, double* n1, double* n2) {
    res[0] = n1[0] - n2[0];
    res[1] = n1[1] - n2[1];
}

/**
    Converte um numero de coordenadas retangulares para polares
    Os numeros complexos são um vetor de 2 posições do tipo double
    O próprio numero passado é mudado de representação
*/
void toPolar(double* res) {
    double n[2];
    n[0] = sqrt(res[0]*res[0]+res[1]*res[1]);
    n[1] = atan(res[1] / res[0]);

    res[0] = n[0];
    res[1] = n[1];
}

