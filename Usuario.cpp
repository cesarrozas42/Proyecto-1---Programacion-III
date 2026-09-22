#include "Usuario.h"

Usuario::Usuario() {
    id = 0;
    nombre = "";
}

Usuario::Usuario(int id, string nombre) {
    this->id = id;
    this->nombre = nombre;
}

int Usuario::getId() const {
    return id;
}

string Usuario::getNombre() const {
    return nombre;
}

void Usuario::agregarLike(int idPelicula) {
    likes.push_back(idPelicula);
}

void Usuario::agregarVerMasTarde(int idPelicula) {
    verMasTarde.push_back(idPelicula);
}

vector<int> Usuario::getLikes() const {
    return likes;
}

vector<int> Usuario::getVerMasTarde() const {
    return verMasTarde;
}
