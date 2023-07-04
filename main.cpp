#include "lib/dfs.hpp"
#include "lib/utility.hpp"
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
        do{
        k = rand()%qtd;
        }while((matriz[i][k] != 0) || (i == k));
        vertice[i].x = rand() % 256;
        vertice[i].prox = &vertice[k];
        matriz[i][k] = 1;
        matriz[k][i] = 1;
    }

    //print_square(matriz,qtd);

    //print_all_x(vertice[0],1000);

    /* grafo teste[3];
    teste[0].x = 5;
    teste[1].x = 10;
    teste[2].x = 15;

    teste[0].prox = &teste[1];
    teste[1].prox = &teste[2];
    teste[2].prox = NULL;

    identf_profundidade(teste[0]);
 */
    free(vertice);
    for(int i=0; i<qtd; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}