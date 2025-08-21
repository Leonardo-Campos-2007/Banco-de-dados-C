#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE * fp;

    fp = fopen("compras.txt", "r");

    if(fp == NULL)
    {

        printf("ERRO: arquivo não foi aberto\n");
        exit(1);

    }

    int Quantidade;
    float Valor;
    char Comida[50];


    for(int i=0; i < 4; i++)
    {

        fscanf(fp, "%s %i %f\n", &Comida, &Quantidade, Valor);
        printf("%s\t%i\t%f\n", Comida, Quantidade, Valor);

    }

}


