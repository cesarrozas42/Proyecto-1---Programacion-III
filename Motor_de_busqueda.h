#ifndef MOTOR_DE_BUSQUEDA_H
#define MOTOR_DE_BUSQUEDA_H

#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include "Pelicula.h"

using namespace std;

class motor_de_busqueda {
private:
    vector<Pelicula> catalogo;

    // Función auxiliar para convertir texto a minúsculas
    string a_minusculas(const string& texto) const;

public:
    motor_de_busqueda(const vector<Pelicula>& peliculas);

    // Búsqueda por subcadenas en Título y Sinopsis
    vector<Pelicula> buscar_por_subcadena(const string& consulta) const;

    // Búsqueda por Tags (Director, Género, Actor)
    vector<Pelicula> buscar_por_director(const string& director) const;
    vector<Pelicula> buscar_por_genero(const string& genero) const;
    vector<Pelicula> buscar_por_actor(const string& actor) const;
};

#endif