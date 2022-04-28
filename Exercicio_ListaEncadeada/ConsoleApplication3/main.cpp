#include <iostream>
#include "ListEnc.h"

using namespace std;

int main() {

    int numElementoLista;
    //Nao precisar o new
    //So quando a gente quer colocar na Heap
    //Aqui a lista esta sendo criada na stack mesmo
    ListaEncadeada l;

    Aluno aluno1 = { 1234, 100, "Knight Solaire" };
    Aluno aluno2 = { 4321, 85, "Wade Watson" };
    Aluno aluno3 = { 321, 90, "P4rzival" };
    Aluno aluno4 = { 555, 95, "Varyan" };
    Aluno aluno5 = { 7799, 50, "Foo" };
    Aluno aluno6 = { 1122, 40, "Bar" };

    l.insereInicio(&aluno1);
    l.insereInicio(&aluno2);
    l.insereInicio(&aluno3);

    l.mostrarElementos();
    cout << "Num alunos na lista: " << l.verificaNumElementos() << endl;

    cout << "Removendo do fim" << endl;
    l.removeFim();
    l.mostrarElementos();

    cout << "Num elementos na lista: " << l.verificaNumElementos() << endl;

    cout << "Inserindo no final" << endl;
    l.insereNoFim(&aluno4);
    l.mostrarElementos();

    cout << "Removendo do inicio" << endl;
    l.removeInicio();
    l.mostrarElementos();

    cout << "Inserindo no Inicio" << endl;
    l.insereInicio(&aluno1);
    l.mostrarElementos();


    Aluno* tmp;
    tmp = l.buscaElementoPelaMatricula(555);

    // acessando o último elemento
    tmp = l.retornaElemento(l.verificaNumElementos() - 1);

    return 0;

}