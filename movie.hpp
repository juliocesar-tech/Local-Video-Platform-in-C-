#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>
using namespace std;

class Movie{
    private:
        string titulo;
        string genero;
        int ano;
        int nota;
    public:
        Movie(const string& titulo, const string& genero, int ano, int nota);
};

#endif