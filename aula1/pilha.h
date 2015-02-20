#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct _elemento{
    int valor;
    struct _elemento *prox;
}elemento;

typedef struct{
    elemento *topo;
}pilha;

#endif // PILHA_H_INCLUDED
