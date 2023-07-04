#include "lib/dfs.hpp"
#include "lib/utility.hpp"
#include <ctime>

int main(int argc, char**argv){
    Grafo v1(0,11);
    /* 
    Grafo v2(1,2);
    Grafo v3(2,3);

    Grafo v4(0,4);

    Grafo v5(0,5);
    Grafo v6(0,6);

    v1.insertChild(v2);
    v1.insertChild(v3);
    v2.insertChild(v4);
    v3.insertChild(v5);
    v3.insertChild(v6);
     */
    int deep_ref=-1;

    std::cout << busca_em_profundidade(v1,12,&deep_ref) << '\n';
    
    return 0;
}