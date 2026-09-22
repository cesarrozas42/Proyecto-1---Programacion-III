#include <iostream>
#include <vector>
#include <cstdlib>
#include "CSVReader.h"
#include "Motor_de_busqueda.h"

using namespace std;

int main() {
#ifdef _WIN32
     system("chcp 65001 > nul");
#endif

     CSVReader lector;
     string nombreArchivo = "wiki_movie_plots_deduped.csv";
     vector<Pelicula> peliculas = lector.leerArchivo(nombreArchivo);
     cout << endl;

     // Mostrar las primeras 5 peliculas
     int cantidad = peliculas.size();
     if (cantidad > 5) {
          cantidad = 5;
     }
     for (int i = 0; i < cantidad; i++)
     {
          cout << "Pelicula " << i + 1 << endl;
          cout << "Titulo: " << peliculas[i].getTitulo() << endl;
          cout << "Anio: " << peliculas[i].getAnio() << endl;
          cout << "Director: " << peliculas[i].getDirector() << endl;
          cout << "Genero: " << peliculas[i].getGenero() << endl;
          cout << "Titulo normalizado: " << peliculas[i].getTituloNormalizado() << endl;
          cout << "--------------------------------" << endl;
     }

     cout << endl;
     cout << "PRUEBA DE ULTIMA PELICULA" << endl;

     cout << "Titulo normalizado: "
          << peliculas.back().getTituloNormalizado() << endl;

     cout << "Titulo: "
          << peliculas.back().getTitulo() << endl;

     cout << "Anio: "
          << peliculas.back().getAnio() << endl;

     cout << "Director: "
          << peliculas.back().getDirector() << endl;

     cout << "Genero: "
          << peliculas.back().getGenero() << endl;

     cout << "Sinopsis: "
          << peliculas.back().getSinopsis() << endl;



     motor_de_busqueda motor(peliculas);

     // Ejemplos de uso con las funciones actualizadas:
     string consulta_subcadena = "Matrix";
     vector<Pelicula> resultados_subcadena = motor.buscar_por_subcadena(consulta_subcadena);

     string consulta_director = "Nolan";
     vector<Pelicula> resultados_director = motor.buscar_por_director(consulta_director);

     string consulta_actor = "Keanu Reeves";
     vector<Pelicula> resultados_actor = motor.buscar_por_actor(consulta_actor);

     cout << "Resultados encontrados: " << resultados_subcadena.size() << endl;
     return 0;
}