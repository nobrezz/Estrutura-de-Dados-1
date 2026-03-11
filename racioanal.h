#ifndef RACIONAL_H
#define RACIONAL_H

typedef struct{
    int num;
    int den;
}Racional;

Racional criaRacional(int n,int d);
Racional soma(Racional a,Racional b);
Racional multiplica(Racional a,Racional b);
int iguais(Racional a,Racional b);

#endif
