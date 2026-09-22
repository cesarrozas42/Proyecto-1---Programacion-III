#ifndef PROYECT_PRGR3_AVANCE_USUARIO_H
#define PROYECT_PRGR3_AVANCE_USUARIO_H

#include <string>
#include <vector>

using namespace std;

class Usuario {
private:
    int id;
    string nombre;

    vector<int> likes;
    vector<int> verMasTarde;

public:
    Usuario();
    Usuario(int id, string nombre);

    int getId() const;
    string getNombre() const;

    void agregarLike(int idPelicula);
    void agregarVerMasTarde(int idPelicula);

    vector<int> getLikes() const;
    vector<int> getVerMasTarde() const;
};

#endif //PROYECT_PRGR3_AVANCE_USUARIO_H
