#include "lib/dfs.hpp"
#include "lib/utility.hpp"

int main(int argc, char**argv){
    if(argc!=2){
        printf("Formato: %s <num>\n",*argv);
        exit(1);
    }

    unsigned num = atoi(*(argv+1));

    Grafo v1(2,10);

    Grafo v2(3,11);
    Grafo v3(2,12);

    Grafo v4(2,13);
    Grafo v5(0,14);
    Grafo v6(0,15);

    Grafo v7(0,16);
    Grafo v8(0,17);

    Grafo v9(0,18);
    Grafo v10(2,19);

    Grafo v11(0,20);
    Grafo v12(0,21);

    v1.insertChild(&v2);
    v1.insertChild(&v3);

    v2.insertChild(&v4);
    v2.insertChild(&v5);
    v2.insertChild(&v6);

    v3.insertChild(&v7);
    v3.insertChild(&v8);

    v4.insertChild(&v9);
    v4.insertChild(&v10);

    v10.insertChild(&v11);
    v10.insertChild(&v12);

    size_t deep_ref=-1;

    std::cout << busca_em_profundidade(&v1,num,&deep_ref) << '\n';
    
    return 0;
}