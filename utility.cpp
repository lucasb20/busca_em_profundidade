#include "lib/utility.hpp"
#include <iostream>

bool search_in_vector(const unsigned char* array, const unsigned int tam, const unsigned char element){
    int k = 0;
    for(int i=0;i<tam;i++){
        if(array[i] == element)k++;
    }

    return (k>0)?(true):(false);
}

void print_square(unsigned char **data, const unsigned side){
    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            printf("%u\t",data[i][j]);
        }
        printf("\n");
    }
}