#include "lib/dfs.hpp"
#include <iostream>

int busca_em_profundidade(Grafo *a, unsigned x, size_t *deep){
    (*deep)++;
    
    printf("deep: %ld -> x: %u[%p]\n",*deep,a->x,a);

    if(a->x == x){
        std::cout << "Encontrado na profundeza: " << *deep << ".\n";
        return 1;
    }
    
    if(a->array_child == nullptr){
        *deep--;
        std::cout << "Back" << '\n';
        return 0;
    }
    else{
        for(int i=0;i<a->qtd;i++){
            if(busca_em_profundidade(a->array_child[i],x,deep)==1){
                return 1;
            }
        }
    }

    return 0;
}