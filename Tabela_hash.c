#include <stdio.h>

#define TAM 15

void iniciarTabela(int t[]){
    int i;
    for(i=0; i<TAM; i++)
        t[i] = 0;
}

int funcaoHash (int chave){
    return chave % TAM;
}

void inserir(int t[], int valor){
    int id = funcaoHash(valor);
    while(t[id] != 0){
        id = funcaoHash(id+1);
    }
    t[id] = valor;
}

int busca(int t[], int chave){
    int id = funcaoHash(chave);
    printf("\nÍndice Gerado: %d\n", id);
    while(t[i] != 0){
        if(t[id] == chave)
        return t[id];
    else
    id = funcaoHash(id+1);
    }
    return 0;
}