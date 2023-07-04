# busca_em_profundidade
 Algoritmos de busca em profundidade feitos em C++, apenas para dar uma testada enquanto aprendo I.A.

Nem há muito que descrever aqui, são algoritmos simples de busca em profundidade em objetos grafos.

Grafo é objeto que simboliza um ponto de uma rota, e ele está representado em uma instância da classe Grafo. Todo grafo possui um número associado a ele, uma quantidade de filhos e um array de endereços dos filhos. Há alguns métodos, como insert() para inserir um filho.

O algoritmo é bem simples, você dá o endereço de um grafo e um número, e o algoritmo irá procurar em todos os filhos se algum possui o número que você deu, funcionando de forma recursiva. Há também um parâmetro para referência de profundeza, porque não encontrei melhor forma para lidar com essa referência.