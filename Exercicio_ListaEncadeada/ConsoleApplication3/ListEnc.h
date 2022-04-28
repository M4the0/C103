#pragma once
#include <iostream>
using namespace std;


//Definicao do dado que sera salvo na lista
struct Aluno {
    int mat;
    int npa;
    string nome;
};

//Conhecido como node (noh em portugues)
struct Node {
    //Dentro do noh temos um Aluno, e nao apenas um inteiro
    Aluno* dado;
    Node* proxNode;
};



//Definicao da classe lista
class ListaEncadeada {
    //Definicao de membros privados
private:
    Node* cabeca;
    Node* cauda;
    int numElementos;
    void removeElementoUnico();

public:
    //Construtor
    ListaEncadeada();

    //Verifica quantos elementos a lista possui
    int verificaNumElementos();
    
    //Verifica se a lista esta vazia
    bool listaVazia();
    
    //inserir no inicio
    void insereInicio(Aluno* dado);

    //metodo para inserir na lista
    void insereNoFim(Aluno* dado);
    
    //metodo para remover do inicio
    void removeInicio();
    
    //metodo para remover elemento da lista pelo fim
    void removeFim();
    
    //metodo para mostrar os valores da lista
    void mostrarElementos();

    //metodo para remover elemento de determinado �ndice
    void removeElementoPelaPosicao(int indice);

    //metodo para remover Aluno que tenha determinada matricula
    void removeAlunoPelaMatricula(int matricula);

    //retorna o ponteiro para o Aluno que possui determinada matricula
    //retorna NULL caso nao exista
    Aluno* buscaElementoPelaMatricula(int matricula);

    //retorna um ponteiro para o elemento de determinado indice.
    //retorna NULL caso nao exista
    Aluno* retornaElemento(int indice);
};
