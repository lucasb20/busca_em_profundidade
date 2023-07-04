#include "lib/dfs.hpp"
#include "lib/utility.hpp"

int main(int argc, char**argv){
    if(argc!=2)exit(1);

    unsigned num = atoi(*(argv+1));

    Grafo v1(1,12);

    Grafo v2(0,35);
    v1.insertChild(v2);

    size_t deep_ref=-1;

    std::cout << busca_em_profundidade(&v1,num,&deep_ref) << '\n';
    
    return 0;
}