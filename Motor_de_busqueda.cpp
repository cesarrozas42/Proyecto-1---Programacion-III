#include "motor_de_busqueda.h"

using namespace std;

motor_de_busqueda::motor_de_busqueda(const vector<Pelicula>& peliculas) 
    : catalogo(peliculas) {}

string motor_de_busqueda::a_minusculas(const string& texto) const {
    string resultado = texto;
    transform(resultado.begin(), resultado.end(), resultado.begin(),
              [](unsigned char c){ return tolower(c); });
    return resultado;
}

// 1. Búsqueda por Subcadena (Coincidencias parciales y frases completas)
vector<Pelicula> motor_de_busqueda::buscar_por_subcadena(const string& consulta) const {
    vector<Pelicula> resultados;
    string q = a_minusculas(consulta);

    for (const auto& pelicula : catalogo) {
        string titulo = a_minusculas(pelicula.getTitulo());
        string sinopsis = a_minusculas(pelicula.getSinopsis());

        if (titulo.find(q) != string::npos || sinopsis.find(q) != string::npos) {
            resultados.push_back(pelicula);
        }
    }
    return resultados;
}

// 2. Filtros por Tags
vector<Pelicula> motor_de_busqueda::buscar_por_director(const string& director) const {
    vector<Pelicula> resultados;
    string dir = a_minusculas(director);

    for (const auto& pelicula : catalogo) {
        if (a_minusculas(pelicula.getDirector()).find(dir) != string::npos) {
            resultados.push_back(pelicula);
        }
    }
    return resultados;
}

vector<Pelicula> motor_de_busqueda::buscar_por_genero(const string& genero) const {
    vector<Pelicula> resultados;
    string gen = a_minusculas(genero);

    for (const auto& pelicula : catalogo) {
        if (a_minusculas(pelicula.getGenero()).find(gen) != string::npos) {
            resultados.push_back(pelicula);
        }
    }
    return resultados;
}

vector<Pelicula> motor_de_busqueda::buscar_por_actor(const string& actor) const {
    vector<Pelicula> resultados;
    string act = a_minusculas(actor);

    for (const auto& pelicula : catalogo) {
        if (a_minusculas(pelicula.getCast()).find(act) != string::npos) {
            resultados.push_back(pelicula);
        }
    }
    return resultados;
}