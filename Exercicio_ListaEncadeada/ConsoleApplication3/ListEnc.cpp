#include "ListEnc.h"

using namespace ListaEncadeada;

//Construtor
ListaEncadeada() {
    cabeca = NULL;
    cauda = NULL;
    numElementos = 0;
}

void removeElementoUnico() {
    if (cabeca != NULL) {
        delete cabeca;
    }
    cabeca = NULL;
    cauda = NULL;
}

//Verifica quantos elementos a lista possui
int verificaNumElementos() {
    return numElementos;
}

//Verifica se a lista esta vazia
bool listaVazia(){
    if (numElementos != 0){

        return false;

    }else{

        return true; //Lista vazia

    }
}

//inserir no inicio
void insereInicio(Aluno* dado){

    Node* temp = new Node;
    temp->dado = dado;
    if (listaVazia()){

        cabeca = temp;
        cauda = temp;
        cabeca->proxNode = NULL;
    }else{

        temp->proxNode = cabeca;
        cabeca = temp;
    }

    numElementos++;
}


//metodo para inserir na lista
void insereNoFim(Aluno* dado){

    Node* temp = new Node;
    temp->dado = dado;
    temp->proxNode = NULL;

    if (listaVazia()){

        cabeca = temp;
        cauda = temp;
    }else{
        
        cauda->proxNode = temp;
        cauda = temp;
    }
    numElementos++;
}


//metodo para remover do inicio
void removeInicio(){
    if (listaVazia()){
        
        return;

    }

    if (numElementos == 1){

        removeElementoUnico();

    }else{

        Node* temp = cabeca;
        cabeca = cabeca->proxNode;
        delete temp;
    }

    numElementos--;

}

//metodo para remover elemento da lista pelo fim
void removeFim(){
    if (listaVazia()){

        return;

    }
    if (numElementos == 1){

        removeElementoUnico();
    }else{

        Node* temp = cabeca;
        while (temp->proxNode != cauda){
            temp = temp->proxNode;
        
        }

        cauda = temp;
        delete temp->proxNode;
        cauda->proxNode = NULL;
    }

    numElementos--;
}

//metodo para mostrar os valores da lista
void mostrarElementos(){

    cout << "Mostrar Elementos" << endl;

    if (listaVazia()){

        cout << "Lista vazia" << endl << endl;
    
    }else{
        Node* temp = cabeca;
        while (temp != cauda->proxNode) {
            cout << "Dados do aluno: " << temp->dado->nome << endl;
            cout << "Matricula: " << temp->dado->mat << endl;
            cout << "NPA: " << temp->dado->npa << endl;
            temp = temp->proxNode;
        }
        cout << endl;
    }
}

//metodo para remover elemento de determinado indice
void removeElementoPelaPosicao(int indice){

    if (listaVazia()){

        cout << "Esta lista está vazia!!" << endl << endl;

        return NULL;
    
    }else{
        Node* temp = cabeca; // temp == aux;
        bool found = false; //verifica se o elemento foi encontrado

        while (temp != cauda->proxNode){

            if(temp == indice){
                
                found = true;
                cout << "Dados do aluno: " << temp->dado->nome << endl;
                cout << "Matricula: " << temp->dado->mat << endl;
                cout << "NPA: " << temp->dado->npa << endl;
                cout <<" "<< endl;
            }
        }

        if(found == false){
            return NULL;
        }else{
            return Aluno*(temp);
        }
                
    }
    
}

//metodo para remover Aluno que tenha determinada matricula
void removeAlunoPelaMatricula(int matricula){


}

//retorna o ponteiro para o Aluno que possui determinada 
//  matricula.
//retorna NULL caso nao exista
Aluno* buscaElementoPelaMatricula(int matricula){

    if (listaVazia()){

        cout << "Lista vazia" << endl << endl;

        return NULL;
    
    }else{
        Node* temp = cabeca; // temp == aux;
        bool found; //verifica se o elemento foi achado

        while (temp != cauda->proxNode){

            if(temp->matricula == matricula){

                found = true;
                cout << "Dados do aluno: " << temp->dado->nome << endl;
                cout << "Matricula: " << temp->dado->mat << endl;
                cout << "NPA: " << temp->dado->npa << endl;
                cout <<" "<< endl;

            }
            
        }

        if(found == false){
            return NULL;
        }else{
            return Aluno*(temp);
        }     

    }

}

//retorna um ponteiro para o elemento de determinado indice.
//retorna NULL caso nao exista
Aluno* retornaElemento(int indice){

    if (listaVazia()){

        cout << "Esta lista está vazia!!" << endl << endl;

        return NULL;
    
    }else{
        Node* temp = cabeca; // temp == aux;
        bool found = false; //verifica se o elemento foi encontrado

        while (temp != cauda->proxNode){

            if(temp == indice){
                
                found = true;
                cout << "Dados do aluno: " << temp->dado->nome << endl;
                cout << "Matricula: " << temp->dado->mat << endl;
                cout << "NPA: " << temp->dado->npa << endl;
                cout <<" "<< endl;
            }
        }

        if(found == false){
            return NULL;
        }else{
            return Aluno*(temp);
        }
                
    }

    
}
