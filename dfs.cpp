#include "lib/dfs.h"

void busca_em_profundidade(){

}

bool search_in_vector(unsigned char* array, int tam, unsigned char element){
    int k = 0;
    for(int i=0;i<tam;i++){
        if(array[i] == element)k++;
    }

    return (k>0)?(true):(false);
}