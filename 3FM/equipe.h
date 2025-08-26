#ifndef EQUIPE_H
#define EQUIPE_H

typedef struct 
{
    
  int Pos; //Posição final da equipe;
  char Estado[30];
  char Equipe[50]; //Nome do time
  int Pts;
  int J;
  int V;
  int E;
  int D;
  int GP;
  int GC;
  int SG;
  float Aproveitamento;

}Time ;

Time * LerDados(char * Arquivo);

#endif
