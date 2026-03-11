#include "racional.h"

Racional criaRacional(int n,int d){
    Racional r;
    r.num=n;
    r.den=d;
    return r;
}

Racional soma(Racional a,Racional b){
    Racional r;
    r.num=a.num*b.den+b.num*a.den;
    r.den=a.den*b.den;
    return r;
}

Racional multiplica(Racional a,Racional b){
    Racional r;
    r.num=a.num*b.num;
    r.den=a.den*b.den;
    return r;
}

int iguais(Racional a,Racional b){
    return a.num*b.den==b.num*a.den;
}
