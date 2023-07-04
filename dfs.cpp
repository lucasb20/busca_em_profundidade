#include "lib/dfs.hpp"
#include <iostream>

void print_all_x(grafo a, unsigned n){
    grafo *aux = a.prox;
    printf("Grafo: %u\t[%p]\n",a.x,&a);
    for(int i = 0; i < n; i++){
        aux = aux->prox;
        printf("Grafo: %u\t[%p]\n",aux->x,aux);
    }
}

unsigned identf_profundidade(grafo ini){
    grafo *aux = &ini;
    unsigned k = 0;
    while(true){
        printf("Grafo ->\tValor: %u\tDeep: %u\n",aux->x,k);
        if(aux->prox==nullptr)break;
        aux = aux->prox;
        k++;
    }
    return k;
}