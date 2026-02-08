#ifndef LIBRARY_HPP
#define LIBRARY_HPP
#include "movie.cpp"
#include <vector>
class Library{
    private:
        vector<Movie> lista;
        string titulo;
        string genero;
        int ano;
        int nota;
    public:
        void adicionar();
        void atualizar();
        void listar();
        void filtrar();
        void reproduzir();
        void remover();
};
#endif