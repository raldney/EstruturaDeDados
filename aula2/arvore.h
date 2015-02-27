#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

typedef struct _no{
    unsigned char letra;
    int freq;
    struct _no *pai,*esq,*dir;
}no;

typedef struct{
    int max,n;
    no **v;
}arvore;

#endif // ARVORE_H_INCLUDED
