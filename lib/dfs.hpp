#include <iostream>

#ifndef GRAFO_HPP
#define GRAFO_HPP
class Grafo {
    public:
        unsigned x;
        unsigned qtd;
        unsigned used;
        Grafo **array_child;

        Grafo(unsigned qtd) {
            this->qtd = qtd;
            this->array_child = (Grafo**) calloc(qtd,sizeof(Grafo*));
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
};
#endif

void busca_em_profundidade(Grafo,unsigned,unsigned*);