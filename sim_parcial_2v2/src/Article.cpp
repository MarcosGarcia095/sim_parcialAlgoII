#include "Article.h"

Article::Article(int id, const std::string& nombre, double precio, int cantidad)
    : id(id), nombre(nombre), precio(precio), cantidad(cantidad) {}

int Article::getId() const {
    return id;
}

std::string Article::getNombre() const {
    return nombre;
}

double Article::getPrecio() const {
    return precio;
}

int Article::getCantidad() const {
    return cantidad;
}

void Article::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}