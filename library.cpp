#include "library.hpp"
#include <iostream>
#include <fstream>
using namespace std;

void Library::adicionar(){
    cout << "Digite o nome do filme: "; cin >> this->titulo;
    cout << endl << "Digite o caminho do arquivo do video: ";
    ofstream arquivo("movies.txt", fstream::app); 
    arquivo.close();
    cout << endl << "Digite o genero do filme: "; cin >> this->genero;
    cout << endl << "Digite o ano de lancamento: "; cin >> this->ano;
    cout << endl << "Filme adicionado com sucesso!" << endl;
    this->lista.emplace_back(titulo, genero, ano);
}
void Library::atualizar(){

}
void Library::filtrar(){

}
void Library::reproduzir(){

}
void Library::remover(){

}