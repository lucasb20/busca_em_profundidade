#include <iostream>
#include <cstdlib>

#ifndef GRAFO_HPP
#define GRAFO_HPP
class Grafo {
    public:
        unsigned x;
        unsigned qtd;
        unsigned used;
        Grafo **array_child;

        Grafo(unsigned qtd,unsigned x) {
            this->qtd = qtd;
            this->x = x;
            this->array_child = nullptr;
            if(qtd != 0)this->array_child = (Grafo**) calloc(qtd,sizeof(Grafo*));
            this->used = 0;
        }

        void insertChild(Grafo child){
            if(this->used < this->qtd){
                this->array_child[this->used] = &child;
            }
            else{
                std::cout << "Espaço insuficiênte.\n";
            }
        }

        void anull_child(){
            free(this->array_child);
        }
};
#endif

int busca_em_profundidade(Grafo,unsigned,int*);