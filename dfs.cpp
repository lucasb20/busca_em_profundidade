#include "lib/dfs.hpp"
#include <iostream>

int busca_em_profundidade(Grafo a, unsigned x, int *deep){
    (*deep)++;
    
    printf("deep: %d -> x: %u[%p]\n",*deep,a.x,&a);

    if(a.x == x){
        std::cout << "Encontrado na profundeza: " << *deep << ".\n";
        return 0;
    }
    
    if(a.array_child == nullptr){
        *deep--;
        return -1;
    }
    else{
        for(int i=0;i<a.qtd;i++){
            if(busca_em_profundidade(*(a.array_child[i]),x,deep)==0){
                break;
                return 0;
            }
        }
    }

    std::cout << "Não encontrado.\n";

    return -1;
}