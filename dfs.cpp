#include "lib/dfs.hpp"
#include <iostream>

void busca_em_profundidade(Grafo a, unsigned x, unsigned *deep){
    Grafo *aux;
    if(aux->array_child == nullptr){
        return;
    }
    else{
        for(int i=0;i<aux->qtd;i++){
            busca_em_profundidade(*(aux->array_child[i]),x,deep);
        }
    }
}