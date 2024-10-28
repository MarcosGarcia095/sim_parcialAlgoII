#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>

class Article {
private:
    int id;
    std::string nombre;
    double precio;
    int cantidad;

public:
    Article(int id, const std::string& nombre, double precio, int cantidad);

    int getId() const;
    std::string getNombre() const;
    double getPrecio() const;
    int getCantidad() const;
    void setCantidad(int cantidad);
};

#endif // ARTICLE_H