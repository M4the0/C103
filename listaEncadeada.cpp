#include<iomanip>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

//Definicao do dado que sera salvo na lista
//Conhecido como node (noh em portugues)

struct Node{  
    int dado;
    Node* proxNode;
};

class ListaEncadeada{
private:
    Node* cabeca;
    Node* cauda;
    int numElementos;
    void removeElementoUnico() {}
public:
    //Construtor
    ListaEncadeada() {}
    int verificaNumElementos(){
        return numElementos;
    }
    bool listaVazia(){

        if(cabeca == NULL){
            return true;
        }else{
            return false;
        }

    }
    void insereInicio(int dado){
        Node* aux = new Node;
        aux->dado = dado;
        aux->proxNode = NULL;

        if(listaVazia()){
            cabeca = aux;
            cauda = aux;
            numElementos++;

        }else{
            aux->proxNode = cabeca; // aux->proxNode = *cabeca;
            cabeca = aux;
            numElementos++; 
            
        }

    }
    void insereFim(int dado){
        
        Node* aux = new Node;
        aux->dado = dado;
        aux->proxNode = NULL;

        if(listaVazia()){
            cabeca = aux;
            cauda = aux;
            numElementos++;

        }else{
            aux->proxNode = cabeca; // aux->proxNode = *cabeca;
            cabeca = aux;
            numElementos++; 
            
        }

    }
    void removeInicio(){



    }
    void removeFim(){}
    void mostrarElementos(){
        Node* aux = cabeca;
        
        while (aux != NULL){
            cout<< aux->dado <<endl;
            aux = aux ->proxNode;
        }
              
    }
};

int main(){

    ListaEncadeada l;
    cout<< "Num elementos: "<< l.verificaNumElementos() <<endl;
    cout<< "Esta vazia: "<< l.listaVazia()<<endl;

    for(int i = 0; i < 9; i++){
        int x = rand()%10;
        
        l.insereInicio(x);
        l.mostrarElementos();
    }

    for(int i = 0; i < 9; i++){
        int x = rand()%10;
        
        l.insereFim(x);
        l.mostrarElementos();
    }

    return 0;
}

/*

    listaEnadeada::listaEncadeada()

    void listaEncadeada::removeInicio(){

    }

    void lisEncadeada::removeElementoUnico(){

        Node* aux = cabeca;
        delete

        cabeca = NULL;
        cauda = NULL;
            
    }

    void listaEncadeada::removerFim(){

         if(listaVazia()){
            removeElementoUnico();

        }else{
            
            Node* anterior = cabeca;
            
            
        }
    }   
 
*/
