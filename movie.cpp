#include "movie.hpp"
#include <iostream>
using namespace std;

Movie::Movie(const string& titulo, const string& genero, int ano){
    this->titulo = titulo; this->genero = genero; this->ano = ano; this->nota = 0;
}
void Movie::avaliar(int nota){
    this->nota = nota;
}
