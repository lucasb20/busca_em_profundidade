#include "dfs.h"
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

    char **matriz;
    matriz = (char **) malloc(qtd*sizeof(char*));
    for(int i = 0; i < qtd; i++) *(matriz+i) = (char*) calloc(qtd,sizeof(char));

    int aux;
    for(int i=0; i<qtd; i++){
        vertice[i].x = rand() % 256;
        vertice[i].prox = &vertice[rand()%sizeof(vertice)];
    }

    free(vertice);
    for(int i=0; i<qtd; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}