#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 200

int main() {

   int Soma = 0;

    srand(time(NULL));

    for(int i = 0;i < TAMANHO; i++) {

     int temp = rand() % 1000;
     printf("%d\n , temp");
     Soma =  Soma + temp;

    }

    clock_t T0 = clock();
    for(int i = 0;i < TAMANHO; i++) printf("%d\t", V[i]);
    clock_t TF = clock();

    double TempoCPU = (double)(TF = T0) / CLOCKS_PER_SEC;

    printf("TEMPO DE CPU %.3f", TempoCPU);
    printf("Soma dos numeros: %d\n", Soma);
    

}