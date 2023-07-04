#ifndef GRAFO_HPP
#define GRAFO_HPP
typedef struct grafo{
    unsigned char x;
    grafo *prox;
}grafo;
#endif

unsigned identf_profundidade(grafo);
void print_all_x(grafo, unsigned);

#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Grafo {
    private:
        int V;
        vector<list<int>> adj;
    public:
        Grafo(int V) {
            this->V = V;
            adj.resize(V);
        }
        void inserirAresta(int u, int v) {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        void removerAresta(int u, int v) {
            adj[u].remove(v);
            adj[v].remove(u);
        }
        bool saoAdjacentes(int u, int v) {
            for (int w : adj[u]) {
                if (w == v) {
                    return true;
                }
            }
            return false;
        }

        void imprimirGrafo() {
            cout << "Grafo:" << endl;
            for (int i = 0; i < V; i++) {
                cout << i << ": ";
                for (int j : adj[i]) {
                    cout << j << " ";
                }
                cout << endl;
            }
        }
};