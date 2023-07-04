#include "lib/dfs.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main(int argc, char**argv){
    if(argc != 2){
        printf("Formato: %s <qtd_grafos>\n",*argv);
        exit(1);
    }

    srand(time(NULL));

    unsigned int qtd = atoi(*(argv+1));
    grafo *vertice = (grafo*) calloc(qtd,sizeof(grafo));

    unsigned char **matriz;
    matriz = (unsigned char **) malloc(qtd*sizeof(unsigned char*));
    for(int i = 0; i < qtd; i++) *(matriz+i) = (unsigned char*) calloc(qtd,sizeof(unsigned char));

    int k = -1;
    for(int i=0; i<qtd; i++){
        k = rand()%qtd;
        vertice[i].x = rand() % 256;
        vertice[i].prox = &vertice[k];
        matriz[i][k] = 1;
        matriz[k][i] = 1;
    }

    free(vertice);
    for(int i=0; i<qtd; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}